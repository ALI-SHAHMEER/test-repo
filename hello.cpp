#include<iostream>
#include<string>
using namespace std;

int main(){
    char word[40] = "Hello Fucking World";
    const char* ptr = word;
    cout<<word<<endl;
    cout<<"Address of varible word is "<<&word<<endl;
    cout<<*ptr<<endl;
    cout<<"Address of pointer ptr is "<<&ptr<<endl;
    return 0;
}