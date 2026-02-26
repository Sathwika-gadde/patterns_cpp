// *      *
// **    **
// ***  ***
// ********
// ********
// ***  ***
// **    **
// *      *
#include <iostream>
using namespace std;
int main(){
    int n=4;
    for (int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << "*" ;
        }
        
        for (int k=1;k<=2*(n-i);k++){
            cout << " ";
            // for(int l=1;l<=i;l++){
            //     cout << "*";
            // }
        }
        for(int l=1;l<=i;l++){
                cout << "*";
            }
        cout << endl;
        
    }
    for(int i=n;i<=2*n;i++){
        for(int j=1;j<=2*n-i;j++){
            cout << "*";
        }
        for(int k=1;k<=2*(i-n);k++){
            cout << " ";
        }
        for(int l=1;l<=2*n-i;l++){
            cout << "*";
        }
        cout << endl;
    }
}