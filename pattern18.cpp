//    *
//   * *
//  *   *
// *     *
//  *   *
//   * *
//    *
#include <iostream>
using namespace std;
int main(){
    int n=4;
    for(int i=1;i<=n+n-1;i++){
        if(i<=n){
            for(int j=1;j<=n-i;j++){
                
                // if(j==0){
                //     for(j=1;j<=n-1;j++){
                //         cout << " ";
                //     }
                // }
                cout << " ";
            }
            cout << "*";
            for(int k=1;k<=2*i-3;k++){
                cout << " ";
                // if(i>=n+1){
                //     for(k=1;k<=2*(2*n-i)-3;k++){
                //         cout << " ";
                //     }
                // }
            }
            
            // cout << "*" << endl;
            if(i==1){
                cout << endl;
            }
            else{
                cout << "*" << endl;
            }
        }
        else{
            for(int j=1;j<=i-n;j++){
                cout << " ";
            }
            cout << "*";
            for(int k=1;k<=2*(2*n-i)-3;k++){
                cout << " ";
            }
            if(i==1 || i==2*n-1){
                cout << endl;
            }
            else{
                cout << "*" << endl;
            }
        }

    }
    
    
    
}