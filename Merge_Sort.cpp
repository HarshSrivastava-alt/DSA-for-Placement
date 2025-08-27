#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int> &arr,int l,int mid,int r){
    vector<int> temp;
    int i=l,j=mid+1;
    while(i<=mid && j<=r){
        if(arr[i]<=arr[j]){
            temp.push_back(arr[i]);
            i++;
        }else{
            temp.push_back(arr[j]);
            j++;
        }
    }
    while(i<=mid){
         temp.push_back(arr[i]);
            i++;
    }
    while(j<=r){
        temp.push_back(arr[j]);
            j++;
    }
    for(int idx=0;idx<temp.size();idx++){
        arr[idx+l] = temp[idx];
    }
}
void mergeSort(vector<int> &arr,int l,int r){
    if(l<r){
        int mid = l + (r-l)/2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);
        merge(arr,l,mid,r);
    }
}
int main(){
    vector<int>arr ={59,48,6,15,2,4};
    mergeSort(arr,0,arr.size()-1);

    for(int val: arr){
        cout<<val<<" ";
    }
    cout<<endl;
}