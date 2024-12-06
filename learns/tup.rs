fn main(){

    vector_checker();


}

fn vector_checker(){
    let mut vex1 = vec![];
    println!("the vector length before adding was {}",vex1.len());

    vex1.push(12);
    println!("the vector length after adding was {}",vex1.len());

    for i in &vex1{
        println!("the current value is {}",i);
    }

    let result = vex1.get(0);
    match result{
        Some(_v) => {
            println!("the some function is running ");
        },
        None =>{
            println!("the none  function is running");
        }
    }

    vex1.pop();

    println!("after pop method");


    for i in &vex1{
        println!("the current value is {}",i);
    }

    let result = vex1.get(0);
    match result{
        Some(_v) => {
            println!("the some function is running ");
        },
        None =>{
            println!("the none  function is running");
        }
    }
}