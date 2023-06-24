// Sum of Odd Elements in an Array.  ({1,2,3,4}=sum=1+3=4)
// #include <iostream>
// using namespace std;
// int sum(int arr[], int size){
//     int sum=0;
//     for (int i = 0; i < size; i=i+2)
//     {
//         sum=sum+arr[i];
//     }
//     return sum;
// }
// int main(){
//     int size;
//     cin>>size;
//     int arr[20];
//     for (int i = 0; i < size; i++)
//     {
//         cin>>arr[i];
//     }
//     cout<<"Sum of the elements of the Array is "<<sum(arr,size);
// }
// Sum of Even Elements in an Array.  ({1,2,3,4}=sum=2+4=6)
#include <iostream>
using namespace std;
int sum(int arr[], int size){
    int sum=0;
    for (int i = 1; i < size; i=i+2)
    {
        sum=sum+arr[i];
    }
    return sum;
}
int main(){
    int size;
    cin>>size;
    int arr[20];
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    cout<<"Sum of the elements of the Array is "<<sum(arr,size);
}