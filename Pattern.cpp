// 1 = 1
// 1 + 2 = 3
// 1 + 2 + 3 = 6
// 1 + 2 + 3 + 4 = 10
// 1 + 2 + 3 + 4 + 5 = 15
// 1 + 2 + 3 + 4 + 5 + 6 = 21

#include <iostream>

using namespace std;

int main() {

    int i,j,num,sum;
    cout<<"Enter range:\t";
    cin>>num;
    
    for(i=1;i<=num;i++){
    sum+=i;
        for(j=1;j<=i;j++){
            if(j==1){
                cout<<j;
            }
            else{
                cout<<"+"<<j;
            }
        }
    cout<<"="<<sum;
    cout<<endl;
    }
    
return 0;
}