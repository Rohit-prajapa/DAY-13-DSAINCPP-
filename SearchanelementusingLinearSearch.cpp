#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number :";
    cin>>n;

    int arr[n];
    cout<<"enter the Arrays Element: ";

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int k;
    cout<<"enter the key element :";
    cin>>k;

    for(int i=0; i<n; i++){
        if(arr[i]==k){
            cout<<"Found: ";
            break;
        }
        {
            cout<<"Not Found:";
        }
    }
}