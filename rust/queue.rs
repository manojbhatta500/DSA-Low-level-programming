// 1️⃣ Line of People (Simple Simulation)
// Description:
// Simulate a queue at a counter.
// Enqueue people (numbers or names).
// Serve them in order (dequeue).
// Print the queue before and after serving.


fn main(){
    let mut  queue = Queue::new();
    queue.enqueue("manoj".to_string());
    queue.enqueue("ram".to_string());
    queue.enqueue("shyam".to_string());


    queue.dequeue();
    queue.dequeue();
    queue.dequeue();



}

struct  Queue{
    data : Vec<String>
}

impl  Queue {
    
    fn new ()-> Queue{
        Queue { data: Vec::new() }
    }

    fn enqueue(&mut self, name : String){
        self.data.push(name);
        println!("Data added New queue : {:?}",self.data);

    }

    fn dequeue(&mut self){
        if self.data.len() != 0{
        if let Some(s) =  self.data.first(){
            println!("serve completed to : {:?}",s);    
        }  
        self.data.remove(0);
        println!("New Queue  is : {:?}",self.data);    
        }
    }
   
}