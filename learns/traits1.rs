/*
1. Printer for Different Data Types
Problem: Create a trait Printable with a method print(&self).
Implement it for i32, f64, and String.
Write a function print_item that takes any type implementing Printable and calls the print method.


*/

fn main(){
    let  mut int_cheker:i32 = 10;
    let string_checker : String = String::from("manoj bhatta");
    let float_checker: f64 = 101.00;

   int_cheker.echoer();
   string_checker.echoer();
   float_checker.echoer();

   int_cheker.doubler();
   int_cheker.echoer();


}


trait Echoer{
    fn echoer(&self)-> ();
}

impl Echoer for i32{
    fn echoer(&self){
        println!("your input is {}",self);
    }
}

impl Echoer for String{
    fn echoer(&self){
        println!("your input is {}",self);
    }
}


impl Echoer for f64{
    fn echoer(&self){
        println!("your input is {}",self);
    }
}





trait Doubler{
    fn doubler(&mut self)->();
}


impl Doubler for i32{
    fn doubler(&mut self){
        *self = *self * *self;
    }
}

