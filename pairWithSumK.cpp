#include<iostream>
using namespace std;

void sumWithK(int arr[], int n, int k){
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]+arr[j]==k){
                cout<<i<<" "<<j<<" ";
                 return;
            }
        }
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
    int k;
    cout<<"Enter the number sum: ";
    cin>>k;
    sumWithK(arr,n,k);
}