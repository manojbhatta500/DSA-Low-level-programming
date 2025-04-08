#include <iostream>
using namespace std;


// 3️⃣ Check if a String is a Palindrome

void reverser(int endIndex,char *originalText,char *reversedStorage,int startIndex){
    if(endIndex<0){
        return;
    }

    reversedStorage[startIndex] = originalText[endIndex];

    reverser(endIndex-1,originalText,reversedStorage,startIndex+1);

}


int main() {
    char text[5]= {'m','a','d','a','m'};

    char *reversedString = (char *)malloc(5 * sizeof(char)); 

    reverser(4,text,reversedString,0);

    for(int i = 0;i<5;i++){
        cout<<reversedString[i]<<endl;
    }

    if(text == reversedString){
        cout<<"both text and reversedString is same"<<endl;
    }else{
        cout<<"both text and reversedString are not the same"<<endl;
    }
    return 0;
}