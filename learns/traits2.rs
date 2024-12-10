/*

2.
Define a trait Comparable with a method compare(&self, other: &Self) -> bool that checks if two items are equal.
Implement this trait for i32 and String. Write a generic function are_equal that takes two items of the same type implementing Comparable and returns whether they are equal.


*/

fn main(){
    let  a :i32 = 5;
    let  b :i32 = 10;
    let output = a.compa(&b);
    println!("the output is {}",output);

    println!("for string");

    let fname = String::from("manoj");
    let lname = String::from("manoj");
    let output  = fname.compa(&lname);
    println!("the output is {}",output);



    

}

trait Barabar{
    fn compa(&self, input:&Self) ->bool;
}

impl Barabar for i32{
    fn compa(&self, input:&Self)-> bool{
        if self == input{
            return true;
        }else{
            return false;
        }
    }

}

impl Barabar for String{
    fn compa(&self,input:&Self)-> bool{
        self == input
    }
}