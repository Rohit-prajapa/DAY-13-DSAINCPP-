#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the Number of Element: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the Arrays element: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int sum=0;
    for(int i=0; i<n; i++){
        sum=sum+arr[i];
    }

    cout<<"The Sum of The Arrays Element is :"<<sum<<" ";
}