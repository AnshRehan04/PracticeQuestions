#include <iostream>
#include <limits.h>
using namespace std;
int max(int arr[] ,int size){
    int max=INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i]>max)
        {
            max=arr[i];
        }
    }
    return max;
}
int main(){
    int size;
    cin>>size;
    int arr[20];
    for (int i = 0; i <size; i++)
    {
        cin>>arr[i];
    }
    cout<<"Maximum Element is "<<max(arr,size);
}