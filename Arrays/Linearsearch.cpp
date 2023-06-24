// #include <iostream>
// using namespace std;
// int search(int arr[] ,int n ,int key){
//     for (int i = 0; i < 5; i++)
//     {
//         if (arr[i]==key)
//         {
//             cout<<arr[i];
//         }
//         else{
//             cout<<"Element not present "<<endl;
//         }
//     }
    
// }
// int main(){
//     int arr[5]={1,2,7,9,11};
//     int key;
//     cout<<"Which element to search "<<endl;
//     cin>>key;
//     cout<<search(arr,5,key);
// }



// Linear Search By taking Input From User.
// #include <iostream>
// using namespace std;
// bool search(int arr[],int size,int key){
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i]==key)
//         {
//             return 1;
//         }
//     }
//     return 0;
    
// }
// int main(){
//     int size;
//     cout<<"Enter the size of an array :";
//     cin>>size;
//     int arr[10];
//     for (int i = 0; i < size; i++)
//     {
//         cin>>arr[i];
//     }
//     int key;
//     cout<<"Which Element to search :";
//     cin>>key;
//     bool found=search(arr,size,key);
//     if (found)
//     {
//         cout<<"Element is Present "<<endl; 
//     }
//     else{
//         cout<<"Element is not Present "<<endl;

//     }
// }

//Linear search and tell its index.
#include <iostream>
using namespace std;
int linearsearch(int arr[],int size,int key){
    for (int i = 0; i <size; i++)
    {
    if (arr[i]==key)
    {
        return i;
    }
    }
    return -1;
}
int main(){
    int size;
    cout<<"Enter the size of array:";
    cin>>size;
    int arr[100];
    for (int i = 0; i <size; i++)
    {
        cin>>arr[i];
    }
    int key;
    cout<<"Which Element to search:";
    cin>>key;
    cout<<" Index of the element is "<<linearsearch(arr,size,key);
    
}
