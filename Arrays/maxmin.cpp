#include <iostream>
#include <limits.h>
using namespace std;
int main(){
    int arr[3]={10,12,3};
    int max=INT_MIN;
    int min=INT_MAX;
    int maxi;
    int mini;
    for (int i = 0; i <3; i++)
    {
        if (arr[i]>max)
        {
            max=arr[i];
            maxi=max;
            // cout<<"Max term is "<<max<<endl;
        }
        
        else if (arr[i]<min)
        {
            min=arr[i];
            mini=min;
            // cout<<"Min term is "<<min<<endl;
        }
        
    }
    int ans=maxi+mini;
    cout<<ans;

}