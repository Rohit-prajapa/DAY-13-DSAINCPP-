#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the Number: ";
    cin>>n;

    int arr[n];
    cout<<"enter the Arrays Element: ";
    
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    for(int i=n-1; i>=0; i--){
        cout<<arr[i]<<" ";
    }
}
