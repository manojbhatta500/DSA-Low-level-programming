fn main(){

    debug_array();

}


fn debug_array(){
    let arr1 = [12,42,53];
    println!("the debug fmd desplayer is {:?}",arr1);
    for e  in arr1{
        println!("the current value is {}",e);
    }
    println!("the length of this array is {}",arr1.len());


    println!("this is the new trick in for length ");


    for i in 0..arr1.len(){
        println!("the current value is {}",arr1[i]);
    }
}