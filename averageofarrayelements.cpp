#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Number :";
    cin>>n;

    int arr[n];
    cout<<"Enter the Number: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int sum=0;
    for(int i=0; i<n; i++){
        sum=sum+arr[i];
    }

    float avg=sum/n;

    cout<<"the average Of the All element in Arrays is :"<<avg<<" ";
}