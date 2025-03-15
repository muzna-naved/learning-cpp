//Selection Sort

#include <iostream>
#include <array>
#include <iomanip>

using namespace std;

int main() {

    array<int, 5> arr;
    
    for (size_t i{0}; i < arr.size(); i++) {
        cout << "Enter value " << i + 1 << ": ";
        cin >> arr[i];
    }
    cout << "\nIndex Value\n";
    
    for (size_t j{0}; j < arr.size(); j++) {
        cout << setw(4) << j << setw(7) << arr[j] << endl;
    }

    for(int k=0;k<arr.size()-1;k++){
        for(int l=k+1;l<arr.size();l++){
            if(arr[k]>arr[l]){
                arr[k]=arr[k]+arr[l];
                arr[l]=arr[k]-arr[l];
                arr[k]=arr[k]-arr[l];
            }
        }
    }

    cout << "After sorting:"<<endl;
    
    for (size_t m{0}; m < arr.size(); m++) {
        cout<<setw(4)<<m<<setw(7)<< arr[m]<<endl;
    }
    
return 0;
}