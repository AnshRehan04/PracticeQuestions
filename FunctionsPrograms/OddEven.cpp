#include <iostream>
using namespace std;
bool isEven(int n){
    if (n%2==0)
    {
        return 1;  //1=Even,0=Odd
    }
    return 0;
}
int main(){
    int n;
    cin>>n;
    if (isEven(n))
    {
        cout<<"It is Even ";
    }
    else{
        cout<<"It is Odd ";
    }
}