#include<iostream>
using namespace std;

int fact(int n){
    if(n==0 || n==1) return 1;
    return n*fact(n-1);
}

int ncr(int n, int r){
    return fact(n)/((fact(r)*(fact(n-r))));
}

int NCR(int n, int r){
    if(n==r || r==0)
    return 1;

    return NCR(n-1,r-1)+NCR(n-1,r);
}
int main(){
    int n;
    cout<<"enter the value of n: ";
    cin>>n;

    int r;
    cout<<"enter the value of r: ";
    cin>>r;
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<=i; j++){
    //         cout<<ncr(i,j)<<" ";
    //     }
    //     cout<<endl;

    cout<<NCR(n,r)<<" ";
    }
