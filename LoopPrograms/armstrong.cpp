// To check armstrong of a number.
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arm=0;
//     while (n!=0)    
//     {
//         int rem=n%10;
//         arm=arm+rem*rem*rem;
//         n=n/10;
//     }
//     cout<<"Armstrong of a no is "<<arm;
// }

// To Check wheather a number is Armstrong or not.
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arm=0;
    while (n!=0)    
    {
        int rem=n%10;
        arm=arm+rem*rem*rem;
        n=n/10;
    }
    // cout<<"Armstrong of a no is "<<arm;
    if (arm==n)
    {
        cout<<"It is armstrong"<<endl;
    }
    else{
        cout<<"It is not a armstrong "<<endl;
    }
}