// Greatest Among Three Numbers using Functions.
#include <iostream>
using namespace std;
int greatest_of_three(int a,int b,int c){
    if (a>b && a>c)
    {
        cout<<"A is greater";
    }else if (b>a && b>c)
    {
        cout<<"B is greater";
    }else{
        cout<<"C is greater ";
    }
    return 0;
}
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    greatest_of_three(a,b,c);
}