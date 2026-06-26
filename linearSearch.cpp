#include<iostream>
using namespace std;
int LinearSearch(int arr[], int n, int k){
    for(int i=0; i<n; i++){
        if(arr[i]==k){
            return i;
        }
    }
    return -1;
}
int BinarySearch(int arr[], int n, int k){
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==k){
            return mid;
        }
        else if(arr[mid]>k){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return -1;
}

int sum(int arr[], int n){
    if(n<0) return 0;
    return n+sum(arr,n-1);
}

int get(int arr[], int n, int idx){
    if(idx>0 && idx<n){
        return arr[idx];
    }
}

void set(int arr[], int n, int idx,int  x){
    if(idx>0 && idx<n){
        arr[idx]=x;
    }
}

void reverse(int arr[], int n){
    int brr[n];

    for(int i=n-1,j=0; i>=0,j<n; i--,j++){
        brr[j]=arr[i];
    }
    for(int i=0; i<n; i++){
        arr[i]=brr[i];
    }
}

void reverse2(int arr[], int n){
    int i=0;
    int j=n-1;
    while(i<j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
}
void display(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n;
    cout<<"Enter the Number: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the Arrays Element: ";

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int idx=2;
    // int k;
    // cout<<"enter the Element that u want to search :";
    // cin>>k;

    // int c=BinarySearch(arr,n,k);
    // cout<<c<<" ";

    // int x=10;
    // set(arr,n,idx,x);

    reverse2(arr,n);

    display(arr,n);
}