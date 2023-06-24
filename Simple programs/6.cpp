// A Character Is an Alphabet or Not
#include <iostream>
using namespace std;
int main(){
    char ch;
    cin>>ch;
    if (ch>='a' && ch<='z' || ch>='A' && ch<='Z')
    {
        cout<<"It is an Alphabet";
    }else{
        cout<<"It is not an Alphabet";
    }
}