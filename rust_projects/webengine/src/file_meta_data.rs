use std::{ fs, time::SystemTime};


pub struct  FileMetaData{
   pub  path : String,
   pub size :u64,
   pub created_at : SystemTime,
   pub modified_at : SystemTime,
   pub last_accessed_at : SystemTime
}


pub fn get_meta_data (file_path:&String)-> FileMetaData{    
    let metadata = fs::metadata(&file_path).expect("failed to extarct the file matadata");

    FileMetaData {
        path: file_path.to_string(),
        size: metadata.len(),
        created_at: metadata.created().unwrap(),
        modified_at: metadata.modified().unwrap(),
        last_accessed_at : metadata.accessed().unwrap()
    }
}

