fn main(){
    let a = [1,42,64,12,87];
    let mut i = 0;

    while i<5{
        println!("the value  is {} in {}th index",a[i],i); 
        i = i +1;
    }

    for e in a {
        println!("the value  is {} ",e); 
    }
}