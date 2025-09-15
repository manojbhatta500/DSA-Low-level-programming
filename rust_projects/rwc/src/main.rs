use std::{env,fs::File, io::{BufReader, Read}};
fn main() {
    let args : Vec<String>= env::args().collect();

    if args.len() <2{
        println!("please provide file name  eg  ./rwc test_file.txt");
        return;
    }



    let file_name = args[1].clone();



    // open file


    let file = match  File::open(file_name) {
        Ok(f)=>f,
        Err(e)=>{
            println!("failed to pen a file {}",e);
            return;
        }
    };


    let mut buffer_manager = BufReader::new(file);


    let mut content = String::new();

    buffer_manager.read_to_string(&mut  content).expect("cannot read the file");



    let  lines : usize = content.lines().count();
    let  words :usize = content.split_whitespace().count();

   
    println!("total lines : {}",lines);
    println!("total words : {}",words);

    let  characters  = content.chars().filter(|c| *c != '\n' && *c != '\t' && *c != ' ').count();

    println!("total characters : {}",characters);


}




