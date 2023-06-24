// Leap Year
#include <iostream>
#include <math.h>
using namespace std;
char leap(int year){
    if (year%4==0)
    {
        cout<<"Leap Year";
    }else{
        cout<<"Not Leap year";
    }
    return 0 ;
}
int main(){
    int year;
    cout<<"Enter the year ";
    cin>>year;
    leap(year);
    // cout<<leap(year);
    return 0;
}