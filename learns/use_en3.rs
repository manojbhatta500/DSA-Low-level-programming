mod en3;
use en3::CarDetail;

fn main(){
    let manoj_car = CarDetail::Name(String::from("bullet"));
    let manoj_number = CarDetail::Number(32);

    match manoj_car {
        CarDetail::Name(v) => println!("the name is bullet {}",v),
        CarDetail::Number(v) => println!("the  number plate is {}",v),
        CarDetail::Unknown => println!("sorry the value is unknown"),

    }

    match manoj_number{
        CarDetail::Name(v) => println!("the name is bullet {}",v),
        CarDetail::Number(v) => println!("the  number plate is {}",v),
        CarDetail::Unknown => println!("sorry the value is unknown"),
    }
}