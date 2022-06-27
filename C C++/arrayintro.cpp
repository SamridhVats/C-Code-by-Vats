#include<iostream>
using namespace std;

void printArray(int arr[],int size){
    cout<<"printing the array"<<endl;
    //print the array
    for(int i = 0 ; i <= size ; i++){
        cout<<arr[i]<< " ";
    }
    cout<<"Printing done"<<endl;
}
int main(){

    // declare
    int number[15];

    //accessing an array
    cout<<"Value of 14 index"<<number[14] << endl;

    //initialize an array
    int second[3] = {5,7,11};

    //accessing an array
    cout<<"Value at 2 index"<<second[2] << endl;

    int third[14] = {28,3};

    int n = 14;
   printArray(third,13);

   int fifth[20] = {22,78};

     n = 20;
    printArray(fifth,19);

    int fifthsize = sizeof(fifth)/sizeof(int);
    cout<< " size of fifth " << fifthsize << endl;

    cout << endl << "Everything is fine" <<endl <<endl;


}