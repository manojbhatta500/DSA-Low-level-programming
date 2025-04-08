#include <iostream>
using namespace std;


struct Person{
      int number[5];
};

void numberChanger(struct Person *p1){
    for(int i = 0;i<5;i++){
        p1->number[i] = p1->number[i] * 10;
    }

    cout<<"the numbers have been changed to  their own format"<<endl;

           
}


int main() {
    struct Person p  = {{1,2,3,4,5}};
    

    numberChanger(&p);

    for(int i = 0;i<5;i++){
        cout<<p.number[i]<<endl;

}

    return 0;
}
