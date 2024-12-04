fn main(){

    let found_username = find_username(1);
    let user_not_found = find_username(2);

    match found_username{
        Some(username)=>{
            println!("the username is {}",username);
        },
        None =>{
            println!("sorry username not found ");
        }
    }

    match user_not_found{
        Some(username)=>{
            println!("the username is {}",username);
        },
        None =>{
            println!("sorry username not found ");
        }
    }

}

fn find_username(index:u32)-> Option<String>{
    if index == 1{
        Some(String::from("manojbhatta500"))
    }else{
        None
    }
}