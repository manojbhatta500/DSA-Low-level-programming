fn main(){

    // let x = String::from("hello");
    
    // let y = &x;
    // let z = &y;
    // println!("{}, {}", y, z); // This works

    let mut s = String::from("hello");
let r = &mut s; // Mutable reference
r.push_str(", world"); // Modify the original value
println!("{}", r); // Prints "hello, world"



}