#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the Number :";
    cin>>n;

    int arr[n];
    cout<<"enter the Arrays Element: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int mx=INT32_MIN;
    for(int i=0; i<n; i++){
        if(arr[i]>mx){
            mx=arr[i];
        }
    }
    
    int smx=INT32_MIN;
    for(int i=0; i<n; i++){
        if(arr[i]>smx && arr[i]!=mx){
            smx=arr[i];
        }
    }

    cout<<"Second Maximum element is :"<<smx;
}