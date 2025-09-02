use std::io;
fn main(){
    let mut input = String::new();

    io::stdin().read_line(&mut input).expect("can't read input");

    let input_number: i64 =  input.trim().parse().expect("can't convert the number");

    analysis(input_number);

}


fn analysis(number:i64){
    if number == 0{
        println!("sorry 0 is neither odd or even");
    }
    if number % 2 == 0 {
        println!("{} is even",number);
    }else{
        println!("{} is odd",number);   
    }

}