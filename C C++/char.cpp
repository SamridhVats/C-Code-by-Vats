#include<iostream>
using namespace std;

int main(){
    char ch ;
    cin >> ch;
    if(ch==('a'-'z')){
        cout << "this is lowercase"<<endl;
    }
    else if(ch==('A'-'Z')){
        cout <<"this is uppercase"<<endl;
    }
    else{
        if(ch==0-9){
        cout<<"This is numeric"<<endl;
        }
    }
}