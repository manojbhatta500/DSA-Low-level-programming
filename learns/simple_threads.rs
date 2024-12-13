pub fn simple_tr(){
    let cl = ||{
        println!("hello from child thread");
    };
    let _res = std::thread::spawn(cl).join();

    println!("just exited from the child thread and this is main thread");
}

struct  Person{
    name:String
}

pub fn complex_tr (){
    let  age:i32 = 50;
    let p1 = Person{name: String::from("manoj bhatta")};

    let thread1 = move ||{
        println!("the age of manoj bhatta is {age}");
        println!("the person name is {}",p1.name);
    };
   let _ =  std::thread::spawn(thread1).join();

}


pub fn more_complex_tr(){

    let  age:i32 = 50;
    let p1 = Person{name: String::from("manoj bhatta")};

    let thread1 =  ||{
        println!("the age of manoj bhatta is {age}");
        println!("the person name is {}",p1.name);
    };

    std::thread::scope(|s|{
        println!("inside the scoped thread");
        s.spawn(thread1);
        println!("outside the scoped thread");
    });

    println!("the person name is {}",p1.name);


}