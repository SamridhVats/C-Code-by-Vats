#include<iostream>
using namespace std;

int main(){
  //int a = 7; int b = 17; int *c = &b; *c = 7; cout << a << " " << b << endl;

int a = 10;
int *p = &a;
int **q = &p;
int b = 20;
*q = &b;
(*p)++;
cout << a << " " << b << endl;

   

    // void *ptr;
    // int i  = 10;
    // //Assign int address to void
    // ptr = &i;

    // cout << "Address of variable "<<&i << endl;
    // cout<< " Address where the void pointer is pointing" << ptr << endl;

    // return 0 ;


    //  int a = 10;
    // int * p = & a; //pointer
    // int ** q = & p; //pointer-to-pointer
    // /* Next three statements will print same value i.e. address of a */
    // cout << & a << endl;
    // cout << p << endl;
    // cout << * q << endl;
    // /* Next two statements will print same value i.e. address of p */
    // cout << & p << endl;
    // cout << q << endl;
    // /* Next three statements will print same value i.e. value of a */
    // cout << a << endl;
    // cout << * p << endl;
    // cout << ** q << endl;
    // return 0;
   
// int firstvalue = 5, secondvalue = 15;
// char thirdvalue = 'a';
// int * p1, * p2;
// char * p3;
// p1 = & firstvalue; // p1 = address of firstvalue
// p2 = & secondvalue; // p2 = address of secondvalue
// p3 = & thirdvalue; // p3 = address of thirdvalue
// * p1 = 10; // value pointed to by p1 = 10
// * p2 = * p1; // value pointed to by p2 = value pointed to by p1
// p1 = p2; // p1 = p2 (value of pointer is copied)
// * p1 = 20; // value pointed to by p1 = 20
// * p3 = 'b'; // value pointed to by p3 = ‘b ’
// cout << "firstvalue is " << firstvalue << endl;
// cout << "secondvalue is " << secondvalue << endl;
// cout << "thirdvalue is " << thirdvalue << endl;
// return 0;
}
