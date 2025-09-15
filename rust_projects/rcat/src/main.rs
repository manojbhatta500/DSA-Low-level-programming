use std::fs::File;
use std::io::{ BufReader, Read};
fn main() {
    let  file = File::open("test.txt") .expect("failed to open a test.txt file");

    let mut  buffer         = BufReader::new(file);  


    let mut content = String::new();


   let result =  buffer.read_to_string(&mut content);

   match  result {
    Ok(data) =>{
    },
    Err(err) => println!("failed to put the buffer content to file : {}",err),    
   }


    print!("{}",content);


   

}

