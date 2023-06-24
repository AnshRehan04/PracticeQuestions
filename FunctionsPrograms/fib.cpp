#include <iostream>
using namespace std;
int fib(int n){
    int a=0;
    int b=1;
    int sum=0;
    for (int i = 1; i <=n; i++)
    {
        sum=a+b; //sum=(a+b)=0+1=1
        a=b;     //b=1,now a=b;a=1
        b=sum;   // sum=b,sum=1,b=sum;b=1
    }
    return 0;
}
int main(){
    int sum=0;
    int n;
    cout<<"Enter the no:";
    cin>>n;
    cout<<sum<<" ";
    fib(n);
    cout<<fib(n);
    
}