
fn main(){
    // let x = 100;
    // println!("hello the value of x in the outer scope  is {}",x);
    // let y = x;
    // println!("hello the value of y in the outer scope  is {}",y);
    // println!("hello the value of x in the outer scope  is {}",x);
    // {
    //     let x = 14;
    //     println!("hello the value of x inside the inner scope  is {}",x);
    // }
    // first question since the x is assined to the y and since shouldn't it's
    // ownership changed and should be invalid


    // lets try that to the heap memory 

    // let x = String::from("hello world");
    // let y = x.clone();

    // println!("the value of y {}",y);
    // println!("the value of x {}",x);

    // since mentioned it's working on stack memory but not in heap

    // let name = String::from("hello");
    // let size = sizer(&name);

    // println!("The length of '{}' is {}.", name, size);

    // so basically an analogy form c since i am passing the address of name to the function and 
    // it's refrence right  and currently i am just browing and once the function is 
    //  over since it was only borrowed i can now then use it 

}

fn sizer(x: &String) -> usize {
  return  x.len();
}
