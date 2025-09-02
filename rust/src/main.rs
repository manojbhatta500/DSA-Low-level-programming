use std::io;

fn main(){
    let mut input_manager =  String::new();

    println!("please enter the first number");
    io::stdin().read_line(&mut input_manager).expect("failed  to read input");
    let  firstnumber:i64  = input_manager.trim().parse().expect("failed to parse int");


    input_manager.clear();


    io::stdin().read_line(&mut input_manager).expect("failed  to read input");
   let  secodnumber:i64  =  input_manager.trim().parse().expect("failed to parse int");


    add(firstnumber,secodnumber);


}


fn add(a:i64,b:i64){
    println!("the addition of 2 number is {}",a+b);
}