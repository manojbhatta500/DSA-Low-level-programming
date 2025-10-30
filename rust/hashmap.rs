
fn main(){
    let bucket_size = 10;
    let mut hashmap = Hashmap::new(bucket_size);


    let key = "manoj".to_string();
    let key2 = "harish".to_string();


    let mut bucket_id = hashing(key.clone(), bucket_size);


    hashmap.put(key.clone(), 1, bucket_id);

    hashmap.printer();

    bucket_id = hashing(key2.clone(), bucket_size);

    hashmap.put(key2.clone(), 1, bucket_id);

    hashmap.printer();


   
   if let Some(s) = hashmap.get(key2.clone(), bucket_id){
    println!("the  data gotten is {:?}",s);
   }


   if let Some(s) = hashmap.remove(key2, bucket_id){
    println!("the  data removed is {:?}",s);
   }

   hashmap.printer();

}

#[derive(Debug)]
struct  KvPair{
    key : String,
    value : i64    
}

struct Hashmap{
    buckets : Vec<Vec<KvPair>>
}

  fn hashing(key: String, bucketsize : usize)->usize{
        let mut  total:usize  = 0;
        for i in key.bytes(){
            total += i as usize
        }
       let bucket_no =  total % bucketsize;
       println!("the bucket no : {}",bucket_no);
       bucket_no
    }

impl Hashmap {
    fn new(size :usize)->Hashmap{
        let mut  buckets  = Vec::with_capacity(size);
        for _ in 0..size {
            buckets.push(Vec::new());
        }
        Hashmap { buckets }
    }
  
    fn put(&mut self,key : String , value : i64, bucket_key : usize){
        let   bucket = &mut self.buckets[bucket_key as usize];
        for i in bucket.iter_mut(){
            if i.key == key{
                i.value = value;
                return;
            }
        }
        bucket.push(KvPair { key, value });
       
    }

    fn get(&mut self,key : String, bucket_key : usize)->Option<KvPair>{
        
        let bucket = &mut self.buckets[bucket_key as usize];

        for i in bucket.iter_mut(){
           if i.key == key{
          return   Some(KvPair{key: i.key.clone(), value : i.value});
           }
        }
        None
    }

    fn remove(&mut self , key : String, bucket_key : usize)-> Option<bool>{
        let bucket = &mut self.buckets[bucket_key as usize];
        let mut  count = 0;
        for i in bucket.iter_mut(){
            if i.key == key{
                bucket.remove(count);
                return  Some(true);
            }
            count+=1;
        }
        println!("sorry the key dosent exits");
        None
    }

    fn printer(&mut self){
        println!("{:?}",self.buckets);
    }



}



