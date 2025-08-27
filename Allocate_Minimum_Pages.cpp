#include<iostream>
#include<climits>
using namespace std;

int allocateMinimum(int arr[],int n,int m){
        int sum=0;
        if(n<m){
            return -1;
        }
        for(int i=0;i<n;i++){
            sum+=arr[i];
        }
        int start=0,end=sum,ans=INT16_MAX;
        while (start<=end){
            int mid = (start+end)/2;
            if(ispossible(arr,n,m,mid)){
                ans = min(ans,mid);
                end = mid-1;
            }
            else{
                start = mid+1;
            }
        }
        return ans;
}

bool ispossible(int arr[],int n,int m ,int min){
    int student = 1,sum=0;
    for(int i=0;i<n;i++){
        if(arr[i]>min){
            return false;
        }
        if(sum=arr[i]>min){
            student++;
            sum=arr[i];

            if(student>m){
                return false;
            }
        }
        else{
            sum+=arr[i];
        }
    }
    return true;
}
int main(){
    int arr[]={12,34,67,90};
    int n=4,m=2;
    cout<<"The minimum no pages: "<< allocateMinimum(arr,n,m)<<endl;
    return 0;
}