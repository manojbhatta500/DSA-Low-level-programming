use std::io;

struct User {
    name: String,
    age: u8,
    email: String,
}
struct KvPair{
    key : String,
    value : User,
}
struct HashMap{
    buckets : Vec<Vec<KvPair>>
}

fn main() {
    let hashmap_size = 10;
    let mut  hashmap = HashMap::new(hashmap_size);
    println!("Created a hashmap with {} buckets!", hashmap.buckets.len());

    hashmap.fill_test_data();

    loop {

    let mut input = String::new(); // a mutable String to store input
    println!("Enter the command please:");
    println!("1 -> Add user");
    println!("2 -> Get user");
    println!("3 -> Delete user");
    println!("4 -> Update user");
    println!("5 -> List all users");
    println!("0 -> Exit");

    io::stdin()
        .read_line(&mut input) // read a line into `input`
        .expect("Failed to read line"); // handle errors

    let command = input.trim(); // remove newline characters


   match command {
        "0" => {
            println!("Exiting program....");
            println!("Exit complete.");
            break;
        }
        "1" => {
            println!("Add user selected");
            println!("please give input");

            let username = read_input("name :");
            let age  = read_number("age :");
            let email = read_input("email :");

           match hashmap.put(&username, &username, age, &email) {
               None => {
                println!("sorry try again");
                continue;
                }
                Some(_) =>{
                    println!("successfully added user");
                    continue;
                }
           } 
        },

        "2" => {
        println!("Get user selected");
        let mut key = String::new();
        io::stdin()
        .read_line(&mut key) // read a line into `input`
        .expect("Failed to read line"); 
        match  hashmap.get(&key){
            None=>{
                println!("the key dosen't exists in the hashmap");
                continue;
            }
            Some(s) =>{
                println!("user found from this key {}",key);
                println!("{}  {}  {}",s.name,s.age, s.email);
            }
        }
        },
        "3" => {
            println!("Delete user selected");
            let key = read_input("key  :");
            match hashmap.delete(&key) {
                None => {
                    println!("the key does not exists");
                    continue;
                }
                Some(s)=>{
                    println!("user successfully deleted");
                    println!("{} {} {}",s.name,s.age,s.email);
                    continue;
                }
            } 
        },
        "4" => println!("Update user selected"),
        "5" => {
            println!("List all users selected");
            hashmap.list_all();
        },
        _ => println!("Invalid command"),
    }
 

        
    }
}

fn read_input(prompt: &str) -> String {
    let mut input = String::new();
    println!("{}", prompt);
    io::stdin()
        .read_line(&mut input)
        .expect("Failed to read line");
    input.trim().to_string() // remove newline and return owned String
}


fn read_number(prompt: &str) -> u8 {
    loop {
        let input = read_input(prompt); // reuse string reader
        match input.parse::<u8>() {
            Ok(num) => return num,
            Err(_) => println!("Invalid input, please enter a number between 0-255."),
        }
    }
}


fn hashing(key : &String, bucket_no : usize)-> usize{
    let mut  total:usize  = 0;
    for i in key.bytes(){
        total += i  as usize; 
    }
  total % bucket_no 
}

impl HashMap {

    fn new(size : usize)-> HashMap{
        let mut buckets = Vec::with_capacity(size);
        for _ in 0..size{
            buckets.push(Vec::new());
        }
        HashMap { buckets: buckets }
    }

    fn fill_test_data(&mut self){
        let  baseusername = "ram";
        let mut  base_number = 0;
        for bucket in self.buckets.iter_mut(){
            for j in 0..10{
            base_number +=1 + j;
            let  formattedname = format!("{}{}", baseusername,base_number);
            let formattedemail = format!("{}{}.gmail.com", baseusername,base_number);
                bucket.push(
                KvPair {
                     key: formattedname.clone(),
                     value: User { name: formattedname, age: 10, email: formattedemail } 
                    }
            );
            }
        }
    }


    fn put(&mut self,key : &String,name : &String, age : u8, email : &String)-> Option<bool>{
        let bucket_size = self.buckets.len();
        let pin_point_bucket = hashing(&key, bucket_size);
        for kv in self.buckets[pin_point_bucket].iter(){
            if &kv.key == key{
                println!("sorry can't insert already existing user");
                return None;
            }
        }
        self.buckets[pin_point_bucket].push(
           KvPair { key: key.clone(), value:  User{
                name : name.clone(),
                age : age,
                email : email.clone()
            } }
        );
        Some(true)
    }

    fn delete(&mut self, key : &String)-> Option<User>{   
        let bucket_size = self.buckets.len();
        let pin_point_bucket = hashing(&key, bucket_size);
        for (index , i) in self.buckets[pin_point_bucket].iter().enumerate(){
            if &i.key == key {
                println!("found user {}",i.key);
                let removed  =  self.buckets[pin_point_bucket].remove(index);
               return  Some(removed.value);
            }
        }
        println!("there is no user that exists by this user name {}",key);
        None
    }


    fn get(&mut self,key : &String)->Option<&User>{

        let bucket_size = self.buckets.len();
        let pin_point_bucket = hashing(&key, bucket_size);
        for i in self.buckets[pin_point_bucket].iter(){
            if i.key == key.clone(){
              return   Some(&i.value);
            }
        }
        None
    }

    fn list_all(&self) {
    for bucket in &self.buckets {
        for kv in bucket {
            println!("Key: {}, User: ( {} , {}, {})", kv.key, kv.value.name, kv.value.age, kv.value.email);
            }
        }   
    }

    #[allow(dead_code)]
    fn update(
        &mut self,
        key : &String,
        name: String,
        age : u8,
        email : String
    )-> bool{
        let bucket_size = self.buckets.len();
        let pin_point_bucket = hashing(&key, bucket_size);

        for (_, i) in self.buckets[pin_point_bucket].iter_mut().enumerate(){
            if &i.key == key{
                i.value.age = age;
                i.value.name = name;
                i.value.email = email;
                println!("updated successfull");
                println!("{} {} {}",i.value.name,i.value.email,i.value.age);

              return   true;
            }
        }
        false
    }
}



