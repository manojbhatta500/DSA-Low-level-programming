use  std::{ fs::{self, File}, io::{BufReader, Read}};




pub struct SearchResult {
    pub file_name: String,
    pub match_count: usize,
    pub lines: Vec<String>,
}


impl SearchResult {
    pub fn increase_count(&mut self){
        self.match_count +=1;
    }

}



pub fn search_keyword (keyword:String,file:String)-> SearchResult{
    let current_file = open_file(&file);
    let mut buffer = BufReader::new(current_file);

    let  mut content = String::new();

    buffer.read_to_string(&mut content).expect("cannot read file");

    let mut current_file_data : SearchResult = SearchResult{ 
        file_name: file,
        match_count: 0,
        lines: Vec::new()
    };

    let clean_content = content.to_lowercase();


   for i in  clean_content.lines(){
    if i.contains(&keyword.to_lowercase()){
        current_file_data.increase_count();
        current_file_data.lines.push(i.to_string());
    }
   }


    current_file_data

}


pub fn  load_files(path:String)-> Vec<String>{    
    let mut files: Vec<String> = Vec::new();

    let entries = fs::read_dir(path).expect("failed to read folder");

    for e in entries{
        let entry = e.expect("failed to read entry");
        let current_entry_path = entry.path();
        if current_entry_path.is_file(){
            if let Some(name) = current_entry_path.to_str(){
                files.push(name.to_string());
            }
        }
    }
    return files;
}



pub fn open_file(file_name : &String) ->File {
    let file  = fs::File::open(file_name).expect("failed to open file {}");
    return file;
}




