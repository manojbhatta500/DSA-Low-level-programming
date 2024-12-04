
enum IpAddrKind{
    V4,
    V6,
}

struct IpAddr{
    kind:IpAddrKind,
    address: String,
}


fn main(){

    let home = IpAddr{
        kind: IpAddrKind::V6,
        address: String::from("192.174.1.1"),
    };

    let office = IpAddr{
        kind: IpAddrKind::V4,
        address: String::from("::1"),
    };

    

   

}