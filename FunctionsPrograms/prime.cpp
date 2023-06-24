#include <iostream>
using namespace std;
bool isprime(int n){
    for (int i = 2; i <n; i++)
    {
        if (n%i==0)
        {
            return 0; //0=Not Prime
                      //1=Prime   
        }
    }return 1;
    
}
int main(){
    int n;
    cin>>n;
    if (isprime(n))
    {
        cout<<"It is a Prime number ";
    }
    else{
                cout<<"It is not a Prime number ";
    }
    

}