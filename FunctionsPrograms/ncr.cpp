#include <iostream>
using namespace std;
int factorial(int n){
    int fact=1;
    for (int i = 1; i <=n; i++)
    {
        fact=fact*i;
    }
    return fact;
}
int ncr(int n,int r){
    int num=factorial(n);  //ncr=factorial(n)/factorial(r)*factorial(n-r)
    int denom=factorial(r)*factorial(n-r);
    return num/denom;
}
int main(){
    int n,r;
    cin>>n>>r;
    cout<<"nCr of given no is :"<<ncr(n,r);
}