#include <iostream>
using namespace std;
int even(int arr[],int size){
    int sum=0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i]%2==0)
        {
            sum=sum+arr[i];
        }
    }return sum;
}
int odd(int arr[],int size){
    int sum=0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i]%2!=0)
        {
            sum=sum+arr[i];
        }
    } return sum;
    
}
int main(){
    int size;
    cin>>size;
    int arr[20];
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    cout<<"Sum of Even elements is "<<even(arr,size)<<endl;
    cout<<"Sum of Odd elements is "<<odd(arr,size);
}