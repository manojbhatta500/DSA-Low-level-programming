// 11. Find Maximum / Minimum – Input multiple numbers, print largest and smallest.


fn main(){
    let vector : Vec<i64> = [5,10,50,30].to_vec();
    manager(vector);
}


fn manager(vector: Vec<i64>){
    let mut smallest : i64 = 10000000;
    let mut  biggest : i64 = 0;
    if vector.len() == 0{
        println!("the length of  vector is {}",vector.len());
    }
    for i in 0..vector.len(){
        if vector[i]< smallest{
            smallest = vector[i];
        }

        if vector[i]>biggest{
            biggest = vector[i];
        }
    }
    println!("biggest number : {}  smallest number : {} ",biggest,smallest);
}