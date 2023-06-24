#include <iostream>
using namespace std;
int intersection(int arr1[],int arr2[],int n,int size){
    int i=0;
    int j=0;
    while (i<n && j<size)
    {
        if (arr1[i]<arr2[j])
        {
            i++;
        }else if (arr1[i]==arr2[j])
        {
            cout<<arr2[j];
            i++;
            j++;
        }else if (arr1[i]>arr2[j])
        {
            j++;
        }
    } return arr2[j];
    
}
int main(){
    int arr1[10]={1,2,3,4};
    int arr2[10]={2,2,9,5};
    cout<<intersection(arr1,arr2,10,10)<<" ";
}