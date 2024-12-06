mod typ;

use typ::Colors;


fn main(){
    let fav_color = Colors::Red;

    let fav_second = Colors::Blues;

    let fav_third = Colors::Green;

    match fav_color{
        Colors::Red => println!("so my color is red"),
        Colors::Blues => println!("so my color is blue"),
        Colors::Green => println!("so my color is green"),
    }

    match fav_third{
        Colors::Red => println!("so fav_third color is red"),
        Colors::Blues => println!("so fav_third color is blue"),
        Colors::Green => println!("so fav_third color is green"),
    }


    match fav_second{
        Colors::Red => println!("so  fav_second color is red"),
        Colors::Blues => println!("so fav_second color is blue"),
        Colors::Green => println!("so fav_second color is green"),
    }


}


