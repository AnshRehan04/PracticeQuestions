#include <iostream>
using namespace std;
bool sorted(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>=arr[i-1])
        {
            return 1;
        }
    }
    return 0;
    
}
int main(){
    int arr[5]={1,10,3,4,5};
    bool sort=sorted(arr,5);
    if (sort)
    {
        cout<<"Array is Sorted "<<endl;
    }
    else{
        cout<<"Not sorted";
    }
    
}