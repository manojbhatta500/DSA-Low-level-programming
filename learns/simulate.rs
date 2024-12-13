use std::time::Duration;

pub fn simulate_task(){
    let tasks = vec!["task 1", "task 2", "task 3","task 4", "task 5"];
    let mut task_finished = vec![];
    for task in tasks{
        std::thread::scope(|s|{
          s.spawn(||{
            println!("performing  {}",task);
            std::thread::sleep(Duration::from_secs(2));
            println!("finished {}",task);
          });
        });
        task_finished.push(task);
    }
    for finshed in task_finished{
        println!("{} is finished",finshed);
    }
}