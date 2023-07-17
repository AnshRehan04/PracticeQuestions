#include <iostream>
using namespace std;
bool ispossible(int arr[],int n,int m,int mid){
    int studentcount=1;
    int m=4;
    int pagesum=0;
    for (int i = 0; i < n; i++)
    {
        if (pagesum+arr[i]<=mid)
        {
            pagesum=pagesum+arr[i];
            
        }else{
            studentcount++;
            if (studentcount>m || arr[i]>mid)
            {
                return false;
            }
            pagesum=arr[i];
        }
        
    }
    return true;
    
}
int allocatebook(int arr[],int n){
    int s=0;
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum=sum+arr[i];
    }
    int e=sum;
    int mid=(s+e)/2;
    int ans=-1;
    while (s<=e)
    {
        if(ispossible(arr,n,m,mid)){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return ans;
}
int main(){
}