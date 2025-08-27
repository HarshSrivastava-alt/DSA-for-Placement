#include<iostream>
using namespace std;
int getpivot(int arr[],int n){
    int e=n-1,s=0;
    int mid = s+(e-s)/2;
    //minimum index of minimum value;
    while(s<e){
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }else{
            e=mid;
        }
        mid = s +(e-s)/2;
    }
       return s;
}
int main(){
    int arr[5]={8,10,17,1,3};
    cout<<"Pivot iS "<<getpivot(arr,5)<<endl;
}