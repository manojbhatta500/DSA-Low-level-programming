pub fn create_d(){
    let dir_name = "./images";
    let already_exist = std::fs::exists(dir_name);
    if already_exist.is_ok(){
        println!("directory  already exits.....");
        return;
    }
    let res = std::fs::create_dir(dir_name);
    if res.is_ok(){
        println!("successfully created an directory");
    }else {
        println!("something went wrong while creating directory {:?}",res);
    }
}


// learning complex task 


pub fn create_f(){
    let file_name = "./images/try.txt";
    let  file_result = std::fs::File::create_new(file_name);

    if file_result.is_ok(){
        println!("file is successfully created...{}",file_name);
    }else{
        println!("something went wrong while creating file {}",file_result.err().unwrap());
    }
}

pub fn remove_f(){
    let file_name = "./images/try.txt";
    let  file_result = std::fs::remove_file(file_name);

    if file_result.is_ok(){
        println!("file is successfully deleted...{}",file_name);
    }else{
        println!("something went wrong while creating file {}",file_result.err().unwrap());
    }
    
}