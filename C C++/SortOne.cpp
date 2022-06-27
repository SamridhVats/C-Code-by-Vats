#include<iostream>
using namespace std;

void printArray(int arr[],int n){
    for(int i = 0 ; i<n ;i++){
        cout << arr[i] << " ";
    }
    cout<<endl;
}

void sortOne(int arr[],int n){
    int left = 0 , right = n-1;
   // int step = 0;
   while(left < right){
    //    cout << "step"<< step++ << endl;
    //    printArray(arr,8);

    while(arr[left] == 0 && left<right){
        left++;
    }
    while(arr[right] == 1 && left<right){
        right--;
    }
    if(left<right){
        swap(arr[left],arr[right]);
        left++;
        right--;
    }
}
}

int main(){
    
    int arr[8] = {1,1,0,0,0,0,1,0};

    sortOne(arr,8);
    printArray(arr,8);
}