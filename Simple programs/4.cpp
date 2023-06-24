// Read Integer (N) and Print the First Three Powers (N^1, N^2, N^3)
#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter a no. ";
    cin>>n;
    int power;
    for (int i = 1; i <=3; i++)
    {
        power=pow(n,i);
        cout<<power<< " "<<endl;
    }
    
}