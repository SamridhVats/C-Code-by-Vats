#include<iostream>
using namespace std;

int sumarr(int arr[],int n ){
    int sum = 0;
   for(int i = 0; i<n ; i++){
      sum += arr[i];
      
   }
   return sum;
}
int main (){
   int arr[] = { 2, 5, 7, 8, 2, 6, 9 };
//    int n = 7, sum = 0;
//    for(int i = 0; i<n ; i++){
//       sum+=arr[i];
//    }
    int cls = sumarr(arr,7);
    
   cout<<"The array sum is "<< cls << endl;
  //int  sum += arr[i];
   
   return 0;
}