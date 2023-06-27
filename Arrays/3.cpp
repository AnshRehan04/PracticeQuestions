// To find the no of occurence of a particular element.
#include <iostream>
using namespace std;
int occ(int arr[],int size,int key){
    int ans=0;
    for (int i = 0; i < size; i++)
    {
        if (key==arr[i])
        {
            ans++;   //1==1 ans=0+1=1;
        }
    }
    return ans;
}
int main(){
    int size;
    cin>>size;
    int arr[20];
    for (int i = 0; i <size; i++)
    {
        cin>>arr[i];
    }
    int key;
    cin>>size;
    cout<<"No of occurence of the element is :"<<occ(arr,size,key);
}