fn main(){
    let p1 = Angle{ name : String::from("manoj"),age : 19};
    println!("the name of person is {}  and age of person is {}",p1.name , p1.age);
}


struct Angle{
    name : String,
    age : i64
}