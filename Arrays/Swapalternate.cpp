// #include <iostream> 
// using namespace std;
// void swapalternate(int arr[],int size){
//     for (int i = 0; i <size; i+=2)
//     {
//         if (i+1<size)
//         {
//             swap(arr[i],arr[i+1]);
//         }
//     }
// }
// void printarray(int arr[],int size){
//     for (int i = 0; i <size; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
    
// }
// int main(){
//     int arr[5]={1,2,3,4,5};
//     int arr1[4]={1,2,3,4};
//     swapalternate(arr,5);
//     swapalternate(arr1,5);
// }

// Swap Alternate taking input From User.
#include <iostream>
using namespace std;
void swapalternate(int arr[],int size){
    for (int i = 0; i <size; i+=2)
    {
        if (i+1<size)
        {
            swap(arr[i],arr[i+1]);
        }
    }
}
void printarray(int arr[],int size){
    for (int i = 0; i <size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
int main(){
    int size;
    cout<<"Enter the number of Element :";
    cin>>size;
    int arr[10];
    for (int i = 0; i <size; i++)
    {
        cin>>arr[i];
    }
    swapalternate(arr,size);
    printarray(arr,size);
}