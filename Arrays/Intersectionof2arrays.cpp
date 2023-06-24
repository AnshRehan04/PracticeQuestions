#include <iostream>
using namespace std;
int intersection(int arr1[],int arr2[],int n,int size){

    for (int i = 0; i <n; i++)
    {
        int element=arr1[i];
        for (int j = 0; j < size; j++)
        {
            if (element==arr2[j])
            {
                cout<<arr2[j];
                arr2[j]=-1;
                break;
            }
        }
    }
}
int main(){
    int arr1[3]={1,2,3};
    int arr2[2]={2,4};
    intersection(arr1,arr2,3,2);
}