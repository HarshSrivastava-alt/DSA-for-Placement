#include<iostream>
using namespace std;

int main(){
     int arr[] = {1,2,398,78,5,6};
     int n = sizeof(arr)/sizeof(arr[0]);
     bool isSorted = true;
     for(int i=0;i<n-1;i++){
         if(arr[i]>arr[i+1]){
             isSorted = false;
             break;
         }/
     }
     if(isSorted){
         cout<<"Array is Sorted: ";
     }else{
         cout<<"Array is not Sorted: ";
     }
}