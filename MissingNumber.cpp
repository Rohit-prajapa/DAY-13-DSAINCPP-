#include<iostream>
using namespace std;
int missingNumber(int arr[], int n){
    int sum=((n+1)*(n+2))/2;

    int sum1=0;
    for(int i=0; i<n; i++){
        sum1=sum1+arr[i];
    }
    return sum-sum1;
}

void missingNumber2(int arr[], int n){
    int lo=arr[0];
    int diff=lo-0;
    for(int i=0; i<n; i++){
        if(arr[i]-i!=diff){
            cout<<i+diff<<" ";
            break;
        }
    }
}
int main(){
    int n;
    cout<<"enter the Number Of Element: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the Arrays Element: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    missingNumber2(arr,n);
    
}