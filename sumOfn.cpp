#include<iostream>
using namespace std;
int sum(int n){
    if(n==0) return 0;
    return n+sum(n-1);
}

int sum1(int n){
    int sum=0;
    for(int i=1; i<=n; i++){
        sum=sum+i;
    }
    return sum;
}

int sum2(int n){
    return n*(n+1)/2;
}
int main(){
    int n;
    cout<<"enter the number: ";
    cin>>n;

    cout<<sum(n)<<" ";
    cout<<sum1(n)<<" ";
    cout<<sum2(n)<<" ";
}