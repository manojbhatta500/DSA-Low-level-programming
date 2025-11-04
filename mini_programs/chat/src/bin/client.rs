use std::net::TcpStream;
use std::io::{self, Read, Write};

fn main() {
    let mut stream = TcpStream::connect("127.0.0.1:8080").expect("can't connect to server");
    println!("Connected to the server!");

    loop {
        let mut input = String::new();
        print!("client: ");
        io::Write::flush(&mut io::stdout()).unwrap();
        io::stdin().read_line(&mut input).unwrap();

        stream.write_all(input.as_bytes()).expect("failed to send");

        let mut buffer = [0; 1024];
        let bytes_read = stream.read(&mut buffer).expect("failed to read");
        let response = String::from_utf8_lossy(&buffer[..bytes_read]);
        println!("Server: {}", response);
    }
}
