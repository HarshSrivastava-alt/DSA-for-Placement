#include<iostream>
using namespace std;

int main(){
    int n,i,j;
    cout<<"Enter the Value of N: ";
    cin>>n;
    int c=1;
    for (i = 1; i <=n; i++){
        for (j = 1; j <=n; j++){
            cout<<c<<" ";
            c++;
        } 
        cout<<endl;
    }
    return 0;
}