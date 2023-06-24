#include <iostream>
#include <limits.h>
using namespace std;
int main(){
    int arr[3]={10,2,3};
    int max=INT_MIN;
    int min=INT_MAX;
    for (int i = 0; i <3; i++)
    {
        if (arr[i]>max)
        {
            max=arr[i];
            cout<<"Max term is "<<max<<endl;
        }
        
        else if (arr[i]<min)
        {
            min=arr[i];
            cout<<"Min term is "<<min;
        }
        
    }
    

}