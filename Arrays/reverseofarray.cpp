#include <iostream>
using namespace std;
void reverse(int arr[],int size){
    int start=0;
    int end=size-1;
    while (start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
void printarray(int arr[],int size){
    for (int i = 0; i <size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
int main(){
    int size;
    cout<<"Enter the size of array:";
    cin>>size;
    int arr[10];
    for (int i = 0; i <size; i++)
    {
        cin>>arr[i];
    }
    // int arr[4]={1,2,3,4}
    reverse(arr,size);
    printarray(arr,size);
}