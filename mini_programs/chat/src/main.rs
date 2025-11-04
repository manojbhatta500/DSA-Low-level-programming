use std::net::{TcpListener, TcpStream};
use std::io::{self, Read, Write};
use std::sync::{Arc, Mutex};


fn handle_stream( stream : TcpStream){

    let  st = Arc::new(Mutex::new(stream));


    let  read_stream = Arc::clone(&st);

    let  write_stream = Arc::clone(&st);

    std::thread::spawn(move||{
        loop {
            let mut  buffer = [0;1024];
            let mut stream = read_stream.lock().unwrap(); // lock to read

            let bytes_read = match stream.read(&mut buffer) {
                Ok(0)=>{
                    println!("client disconnected: ip {:?}",stream.peer_addr());
                    break ;
                }
                Ok(n)=>n,
                Err(e)=>{
                    eprintln!("failed to read messages {} ",e);
                    break;
                } 
            };
            let    user_readable_message = String::from_utf8_lossy(&buffer[..bytes_read]);
            println!("client : {}",user_readable_message);
            io::Write::flush(&mut io::stdout()).unwrap();

        }
    });

    std::thread::spawn(move||{


        loop {
        let mut input = String::new();
        let  mut  writest = write_stream.lock().unwrap();
        print!("client: ");
        io::Write::flush(&mut io::stdout()).unwrap();
        io::stdin().read_line(&mut input).unwrap();
        writest.write_all(input.as_bytes()).expect("failed to send");   
        }


    });

    


}




fn main() {

    let listener = TcpListener::bind("127.0.0.1:8080").unwrap();

    println!("Server running on port 8080...");


    for stream in listener.incoming(){

        match stream {
            Ok(st)=>{
                std::thread::spawn(||{handle_stream(st);});
            }
            Err(e)=>{
                eprintln!("error : {}",e);
            }
            
        }
      


    }


}
