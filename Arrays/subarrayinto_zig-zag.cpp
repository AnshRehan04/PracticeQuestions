#include <iostream>
using namespace std; 
void zigzag(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        if (i%2==0 && arr[i]>arr[i+1])
        {
            swap(arr[i],arr[i+1]);
        }
        else if (i%2==1 && arr[i]<arr[i+1])
        {
            swap(arr[i],arr[i+1]);
        }
    }
}
void printarray(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
int main(){
    int arr[5]={7,3,4,10,2};
    zigzag(arr,5);
    printarray(arr,5);
}