#include<iostream>
using namespace std;

int firstocc(int arr[],int n,int key){
    int s = 0 , e = n-1;
    int ans = -1 ;
    int mid = s + (e-s)/2;
    while(s <= e){

        if(arr[mid] == key){
            ans = mid;
            e = mid - 1;
        }
        else if(key > arr[mid]){ // go to right part
            s = mid + 1 ;
        }
        else if(key < arr[mid]){ // go to left part
            e = mid - 1; 
        }
        mid = s + (e-s)/2;
        
    }
    return ans;
}

int lastocc(int arr[],int n,int key){
    int s = 0 , e = n-1;
    int ans = -1 ;
    int mid = s + (e-s)/2;
    while(s <= e){

        if(arr[mid] == key){
            ans = mid;
            s = mid + 1;
        }
        else if(key > arr[mid]){ // go to right part
            s = mid + 1 ;
        }
        else if(key < arr[mid]){ // go to left part
            e = mid - 1; 
        }
        mid = s + (e-s)/2;
        
    }
    return ans;
}
int main(){

    int arr[5] = {1,2,4,4,5};
    cout <<"First Occurence of 4  is at Index "<< firstocc(arr,5,4) << endl;
    cout <<"Last Occurence of 4  is at Index "<< lastocc(arr,5,5) << endl;
    return 0;
}