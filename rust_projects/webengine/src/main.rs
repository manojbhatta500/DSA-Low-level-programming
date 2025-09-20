use  std::{env};


mod file_utils;

mod file_meta_data;

mod chrono_utils;

use crate::{ file_utils::{load_files,search_keyword, SearchResult}};


fn main() {

    let mut args : Vec<String> = env::args().collect();
    
    if args.len() < 2{
        println!("please provide the keyword please for our browser");
        return;
    }

    args.remove(0);

    let mut files_with_content: Vec<SearchResult> =Vec::new();

    let files: Vec<String> = load_files("data/".to_string());

    for file in &files{
        for keyword  in &args{

        let current_search_result = search_keyword(keyword.to_string(), file.clone());


        if current_search_result.match_count > 0{
            files_with_content.push(current_search_result);
        }
        }
    }

    let mut index = 0;
    for i in &files_with_content{
        index +=1;
        println!("{}. {}\ncount:{}",index, i.file_name,i.match_count,);
        for j in &i.lines{
            println!("{}",j)
        }
        let metadata = file_meta_data::get_meta_data(&i.file_name);
        println!("meta data : ");
        println!("size : {} bytes",metadata.size);
        println!("path : {}",metadata.path);
        println!("created at : {}",chrono_utils::format_system_time(metadata.created_at));
        println!("modified at : {}",chrono_utils::format_system_time(metadata.modified_at));
        println!("last accessed at : {}",chrono_utils::format_system_time(metadata.last_accessed_at));
        println!("-----------------------------------------------------------");
    }

  


}


