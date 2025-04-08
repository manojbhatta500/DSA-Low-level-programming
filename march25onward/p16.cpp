#include<iostream>

using namespace std;


class Rectangle{
    private:
        int length;
        int breadth;

    public:

        // void initilize(int l,int b){ 
        //     length = l;
        //     breadth = b;
        // }
        Rectangle(int l,int b){
            length = l;
            breadth = b;
        }

        int area(){
            return length * breadth;
        }

        void changeLength(int newLength){
            length = newLength;

        }

        void displayLength(){
            cout<<length<<endl;
        }
};


int main(){
    Rectangle r(10,20);
    // r.initilize(10,20);
    int area = r.area();
    cout<<"the area of rectangle is "<<area<<endl;
    r.changeLength(100);
    r.displayLength();

    return 0;
}