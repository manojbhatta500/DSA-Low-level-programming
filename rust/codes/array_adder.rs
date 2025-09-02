// 6. Sum of N Numbers – Ask how many numbers, read them, calculate sum.

use std::io;


fn main(){
    println!("please enter the length of number");
    let mut input_manager = String::new();
    io::stdin().read_line(&mut input_manager).expect("failed to store data in input manager");


    let n : usize =  input_manager.trim().parse().expect("n is not a number");


    let mut array : Vec<i64> = Vec::with_capacity(n);


    for i in 0..n{
        input_manager.clear();
        println!("please enter a number for index {}",i);
        io::stdin().read_line(&mut input_manager).expect("error taking a number for index {i}");
        let current_number : i64 = input_manager.trim().parse().expect("can't convert input to the number");
        array.push(current_number);
    }

    add_the_array(array);

}


fn add_the_array(array: Vec<i64>){
    let mut total :i64 = 0;

    for i in 0..array.len(){
        total = total + array[i];
    }

    println!("the addition of total number is {}",total);
}