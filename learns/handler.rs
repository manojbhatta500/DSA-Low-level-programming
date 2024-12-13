

pub  fn helper (){
    let mut data : i32 = 1;
    for i in 1..=10{
        std::thread::scope(|s|{
           s.spawn(||{
            println!("thread {} has started",i);
            data +=1;
           });
        });
    }
    println!("Counter: {}", data);
}


pub fn muter_function(){
    let num = 0;
    let  mutec1 = std::sync::Mutex::new(num);

    let clousore1 = ||{
        println!("thread  has started");
        let mut guard = mutec1.lock().unwrap();
        *guard +=1;
        println!("thread number  has ended",);
    };
    std::thread::scope(|s|{
        for i  in 0..=10{
            println!("thread {} has started",i);
            s.spawn(clousore1);

        }
        println!("total of num is by defrencing {}",num);
    });
}