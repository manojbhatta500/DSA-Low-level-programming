
#include <iostream>
using namespace std;

/*
* This pattern is:
* 1
* 12
* 123
* 1234
* 12345
*/

int main() {
    int n;
    cout << "Please enter n: ";
    cin >> n;
    
    for(int i = 1;i<=n;i++){
    for(int j=1;j<=i;j++){
      cout<<j;
    }
    cout<<endl;
  }
}
