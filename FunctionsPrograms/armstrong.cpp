//To check Wheather a no is armstrong or not.
#include <iostream>
using namespace std;
bool armstrong(int n){
    int result=0;
    while (n!=0)
    {
        int rem=n%10;
        result+=rem*rem*rem;
        if (result==n)
    {
        return 1;
    }else{
        return 0;
    }
    }
}
int main(){
    int n;
    cout<<"Enter a no:";
    cin>>n;
    armstrong(n);
    cout<<armstrong(n);
    cout<<"It is armstrong"<<endl;
    cout<<"It is not armstrong"<<endl;
    // return 0;
}