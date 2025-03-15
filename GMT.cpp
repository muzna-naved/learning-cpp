// A program that displays the current time in GMT (Greenwich Mean Time) in the format
// hour:minute:second, such as 13:19:8.

#include <iostream>
#include <cmath> 
#include <ctime>

using namespace std;

int main() {
    
    time_t present_time;
    present_time = time(NULL);
    cout<< present_time<<" seconds has passed since 00:00 GMT, Jan 1,1970"<<endl;
    int a = present_time;
    int sec = a%60;
    int min = (a%3600)/60;
    int hour = (a%86400)/3600;
    cout<<hour<<":"<< min<< ":"<< sec<<endl;
    
    return 0;
}
