#include<iostream>
using namespace std;

int LinearSearch(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
        return i;
    }
}
    return -1;
}
int main(){
    int n;
    cout<<"Size of N: ";
    cin>>n;
    cout<<"Enter the value of Array: ";
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the Key: ";
    int key;
    cin>>key;
    cout<<LinearSearch(arr,n,key);
}
