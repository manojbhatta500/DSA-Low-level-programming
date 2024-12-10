fn main(){
    let mut name = String::from("manoj");
    let r : &mut  String = &mut name;
    println!("the current refrence value is {}",r);
    // println!("the current refrence value is {}", name);
    println!("after changing");
    r.push_str(" bhatta");
    println!("the updated refrence value is {}",r);
    println!("the updated refrence value is {}",name);
}