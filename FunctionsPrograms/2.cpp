// Check whether a number is a palindrome using function.
#include <iostream>
using namespace std;
bool palidrome(int n){
    int rev=0;
    while (n!=0)
    {
        int rem=n%10;
        rev=(rev*10)+rem;
        n=n/10;
    }
    if (rev==n)
    {
        return 1;
    }
    else{
        return 0;
    }
    
}
int main(){
    int n;
    cin>>n;
    if (palidrome(n))
    {
        cout<<"It is not Palidrome ";
    } else{
        cout<<"It is a Palidrome ";
    }
    
}