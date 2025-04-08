#include <iostream>

using namespace std;

template<class T>
class Arithmatic{
private:
    T a;
    T b;
public:
    Arithmatic(T a, T b); 
    T add();
    T subtract();
};

template<class T>
Arithmatic<T>::Arithmatic(T a,T b){
    this->a = a;
    this -> b = b;
}

template<class T>
T Arithmatic<T>::add(){
    return a + b;
}

template<class T>
T Arithmatic<T>::subtract(){
    return a -b;
}




int main() {
    int a= 20,b = 10;

    Arithmatic<int> ar(a,b);

    int total = ar.add();
    int diffrence = ar.subtract();

    cout<<"addition is "<<total<<endl;
    cout<<"diffrence is "<<diffrence<<endl;

    return 0;
}

