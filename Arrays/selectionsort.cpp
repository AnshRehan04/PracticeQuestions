#include <iostream>
using namespace std;
void selectionsort(int arr[],int n){
    for (int i = 0; i < n-1; i++)
    {
        int minindex=i;
        for (int j = i+1; j < n; j++)
        {
            if (arr[minindex]>arr[j])
            {
                minindex=j;
            }
        }
        swap(arr[minindex],arr[i]);
    }
}
void printarray(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
int main(){
    int n;
    cout<<"Enter the element size :";
    cin>>n;
    int arr[20];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    selectionsort(arr,n);
    printarray(arr,n);
    
}