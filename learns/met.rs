
struct Rectangle{
    width :u32,
    height: u32
}
impl Rectangle{
    fn calculate_total (&self)-> u32{
        return self.height + self.width;
    }
    fn calculate_area(&self)-> u32{
        return self.height * self.width;
    }
}

fn main(){
    let mero_ghar = Rectangle{
        height:10,
        width:20
    };
    println!("the total of height and width is {}",mero_ghar.calculate_total());
    println!("the total area of mero ghar is {}",mero_ghar.calculate_area());
}