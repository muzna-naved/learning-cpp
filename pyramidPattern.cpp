//     1
//    121
//   12321
//  1234321
// 123454321

#include <iostream>

using namespace std;

int main() {

    int i,j,k,l,num;
    cout<<"Enter range:\t";
    cin>>num;

    for(i=1;i<=num;i++){
        for(j=num-1;j>=i;j--){
            cout<<" ";
        }
        for(k=1;k<=i;k++){
            cout<<k;
        }
        for(l=i-1;l>=1;l--){
            cout<<l;
        }
    cout<<endl;
    }

return 0;
}