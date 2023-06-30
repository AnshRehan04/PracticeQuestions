#include <iostream>

#include <bits/stdc++.h>
using namespace std;
int search(int arr[],int n,int k){
    int s=0;
    int e=n-1;
    int mid=(s+e)/2;
    while (s<=e)
    {
        if (arr[mid]==k) return mid;

        if (arr[s]<=arr[mid])  //Left Part is Sorted.
        {
            if (k>=arr[s] && k<=arr[s])  //Surly element is at left side
            {
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        else{                       //Right Part is Sorted.
            if (k>=arr[s] && k<=arr[s])
            {
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        mid=(s+e)/2;
    }
    return -1;
}

int main(){
    int arr[5]={7,8,9,0,1};
    int ans=search(arr,5,9);
    cout<<"Element is at "<<ans;
}