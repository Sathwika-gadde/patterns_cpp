// * * * * * 
// * * * * *
// * * * * *
// * * * * *
// * * * * *
#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter n : ";
    cin >> n ;
    // e loop asalu enni line ah stars print ayyedhi
    for(int i=1;i<=n;i++){
        //e loop oka line lo enni stars print cheyyadaniki
        for(int j=1;j<=n;j++){
            cout << "*" << " ";
        }
        cout << endl;
    }
}