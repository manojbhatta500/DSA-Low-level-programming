use std::thread::spawn;

pub fn normal_treads(){
    println!("main thread started");
    let mut x :u128 = 0u128;
    for i in 1..500_000_000_000{
        x = x + i;
    }
    println!("main thread ended");

    println!("{x}");
}

pub fn spawn_thread(){
    let cjlore = ||{
        let mut x :u128 = 0u128;
        for i in 1..500_000_000_000{
            x = x + i;
        }
        println!("normal thread ended");
        println!("{x}");
    };




    println!("worker  thread  1 started");
    let thread_controller = spawn(cjlore);
    println!("worker  thread  1 ended");

    println!("worker  thread  2 started");
    let thread_controller2 = spawn(cjlore);
    println!("worker  thread  2 ended");

    normal_treads();

    let _res = thread_controller.join();
    let _res2 = thread_controller2.join();


}