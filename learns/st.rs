
struct User{
    username:String,
    email:String,
    sign_in_count:u64,
    active:bool
}

fn main(){
    let mut  user1 = User{
        active:false,
        email: String::from("manojbhatta500@gmail.com"),
        username: String::from("manojbhatta500"),
        sign_in_count:1
    };
    let uname =  & user1.username;
    println!("the uname value is {}",uname);
    println!("the user1 username  value is {}",user1.username);

    user1.username = String::from("wallance fuck you ");

    println!("the user1 username  value is {}",user1.username);


    let third_User = build_User(String::from("manoj"),String::from("bogeyman"));

    println!("the thirduser  username is {}",third_User.username);
    println!("the thirduser  email is {}",third_User.email);

    println!("the thirduser  active is {}",third_User.active);

    println!("the thirduser  sign_in_count is {}",third_User.sign_in_count);
}

fn build_User(name:String,email:String)->User{
    return User{
        active:true,
        email:email,
        username:name,
        sign_in_count: 1
    };

}