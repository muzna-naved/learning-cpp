// A program that accepts an array of integers as a parameter and returns the percentage of even
// numbers in the array as a real number. For example, if a variable named nums refers to an array of the
// elements {6, 2, 9, 11, 3}, then the program should return 40.0. If the array contains no even elements
// or no elements at all, return 0.0.

#include <iostream>
#include<array>
#include<iomanip>

using namespace std;

int main() {

    array<int,5>nums;
    int evenCount = 0;
    
    for(size_t i{0};i<nums.size();i++){
        cout<<"Enter value\t"<<i+1<<":";
        cin>>nums[i];
    }

    for(size_t j{0};j<nums.size();j++){
        if(nums[j]%2==0){
            evenCount++;
        }
    }
    double evenPercentage = (static_cast<double>(evenCount)/ nums.size()) * 100;
    cout << "\nPercentage of even numbers: " << fixed <<setprecision(1) << evenPercentage << "%\n";

return 0;
}