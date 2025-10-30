//reverse a number using stack 

fn main() {
    let mut  stack = Stack::new();
    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.push(4);
    println!("{:?}",stack.data);
    reverser(&mut stack);
}

fn reverser(stack: &mut Stack){
    let mut  reverse_stack = Stack::new();
    while let Some(s) = stack.peek_and_remove(){
        reverse_stack.push(s);
    }
    println!("reversed stack is :  {:?}",reverse_stack.data)
}



struct Stack{
    data : Vec<i128>
}

impl Stack {

    fn new()-> Stack{
        Stack { data: Vec::new() }
    }

    fn push(&mut self, number : i128){
        self.data.push(number);
    }
    
    fn pop(&mut self) -> Option<i128>{
        self.data.pop()
    }

    #[allow(dead_code)]
    fn peek(&mut self)-> Option<&i128>{

        match self.data.last() {
            Some(s)=>{
            println!("{:?}",s);
            },
            None=>{
                println!("there is no data ");
            }
        }
        self.data.last()
    }

    fn peek_and_remove(&mut self)->Option<i128>{
        self.pop()
    }
    
}