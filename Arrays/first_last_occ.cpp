#include <iostream>
using namespace std;
int firstocc(int arr[],int size,int key){
    int s=0;
    int e=size-1;
    int mid=(s+e)/2;
    int ans=0;
    while (s<=e)
    {
        if (key==arr[mid])
        {
            ans=mid;
            e=mid-1;
        }
        else if (key>arr[mid])  //right side jao
        {
            s=mid+1;
        }
        else{ //left side jao
            e=mid-1;
        }
        mid=(s+e)/2;
    }
    return ans;
}
int lastocc(int arr[],int size,int key){
    int s=0;
    int e=size-1;
    int mid=(s+e)/2;
    int ans=0;
    while (s<=e)
    {
        if (key==arr[mid])
        {
            ans=mid;  //For last occ element must be in right side.
            s=mid+1;
        }
        else if (key>arr[mid])  //right side jao
        {
            s=mid+1;
        }
        else{ //left side jao
            e=mid-1;
        }
        mid=(s+e)/2;
    }
    return ans;
}
void printarr(int arr[],int size,int key){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
int main(){
    int size;
    cin>>size;
    int arr[20];
    for (int i = 0; i < size; i++)
    {
        cin>>arr[size];
    }
    int key;
    cout<<"which element to search :";
    cin>>key;
    cout<<firstocc(arr,size,key)<<endl;;
    cout<<lastocc(arr,size,key);
}