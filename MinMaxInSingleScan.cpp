#include<iostream>
using namespace std;

void MinMax(int arr[], int n){
    int min=INT32_MAX;
    int mx=INT32_MIN;
    for(int i=0; i<n; i++){
       if(arr[i]<min){
        min=arr[i];
       }
       else{
        mx=arr[i];
       }
    }
    cout<<mx<<" "<<min<<" ";
}

void display(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n;
    cout<<"Enter The Number Of Element: ";
    cin>>n;

    int arr[n];
    cout<<"enter the Arrays element: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }


    MinMax(arr,n);

    cout<<endl<<" ";

    display(arr,n);

}