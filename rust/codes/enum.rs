fn main(){
    let current_event : Event = Event::SUCCESS;

    if current_event == Event::FAILED{
        println!("current event is failed");
    }else if current_event == Event::LOADING{
        println!("the current event is loading");
    }else if current_event == Event::SUCCESS{
        println!("the current event is Success");
    }else{
        println!("this is not state in the Event");
    }

}

#[derive(PartialEq, Eq)] // 👈 this enables == comparison
enum  Event {
    LOADING,
    SUCCESS,
    FAILED    
}