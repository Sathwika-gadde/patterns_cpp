// AAAA
//  BBB
//   CC
//    D
#include <iostream>
using namespace std;
int main(){
    int n=4;
    char ch='A';
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i-1;j++){
            cout << " ";
        }
        for(int k=1;k<=n-i+1;k++){
            cout << ch;
            
        }
        ch+=1;
        cout << endl;
    }
}