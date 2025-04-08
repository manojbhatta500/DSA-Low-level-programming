#include <iostream>
using namespace std;

// 5️⃣ Reverse a String Using Recursion

void reverse(char *text,int startIndex,int endIndex){
    if(startIndex >= endIndex){
        return ;
    }

    char variable = text[startIndex];
    text[startIndex] = text[endIndex];
    text[endIndex] = variable;
    reverse(text,startIndex+1,endIndex-1);
}

int main() {
    char name[5] = {'h','e','l','l','o'};

    reverse(name,0,4);

    for(int i= 0;i<5;i++){
        cout<<name[i];
    }
    cout<<endl;

    return 0;
}