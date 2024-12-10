fn main(){
    let _an1 = Dog{};
    let _an2 = Cat{};
    let _an3 = Bear{};
    let _an4 = Tiger{};


    let person1 = Person{
        name: String::from("manoj bhatta"),
        pet: _an4,
    };
    person1.pet.make_sound();
    println!("the name of the owner is {}",person1.name);

}

struct Person<T:Animal>{
    name:String,
    pet: T,
}
trait Animal{
    fn make_sound(&self)-> ();
}

struct Dog{}
impl Animal for Dog{
    fn make_sound(&self){
        println!("dog barked");
    }
}
struct Cat{}
impl Animal for Cat{
    fn make_sound(&self){
        println!("cat  roared");
    }
}
struct Bear{}
impl Animal for Bear{
    fn make_sound(&self){
        println!("bear  sleeped");
    }
}
struct Tiger{}
impl  Animal for Tiger{
    fn make_sound(&self){
        println!("tiger  roared");
    }
}



/* 


3.
Create a trait Transformer with a method transform(&self) -> Self.
Implement it for i32 (e.g., double the value) and String (e.g., append " transformed").
Write a function apply_transformation that takes an item implementing Transformer and prints the transformed value.



*/