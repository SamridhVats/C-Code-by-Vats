#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int i=1;
    int sum = 0;
    while(i <=n%2){
        sum = sum+i;
        i = i+1;
    }
    cout<<"value of sum is "<<sum << endl;
}