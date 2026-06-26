#include<iostream>
using namespace std;
void display(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
void insertAtPosition(int arr[], int n, int k){
    int i=n-1;
    while(arr[i]>k){
        arr[i+1]=arr[i];
        i--;
    }
    arr[i+1]=k;
}

bool isSorted(int arr[], int n){
    bool flag=true; // means not sorted

    for(int i=0; i<n; i++){
        if(arr[i]>arr[i+1]){
            flag=false;
            break;
        }
    }
    if(flag==true) cout<<" Arrays is  sorted: ";
    else{
        cout<<"Arrays is not  sorted: ";
    }
}

void shieftNegativeToleftSide(int arr[], int n){
    int i=0;
    int j=n-1;
while(i<j){
    while(arr[i]<0){
        i++;
    }
    while(arr[j]>=0){
        j--;
    }
    if(i<j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
}
}

void merge(int arr[], int brr[], int m, int n, int crr[]){
    int i=0,j=0,k=0;

    while(i<n && j<m){
        if(arr[i]<brr[j]){
            crr[k]=arr[i];
            k++;
            i++;
        }
        else{
            crr[k]=brr[j];
            k++;
            j++;
        }
    }

    for(; i<n; i++){
        crr[k]=arr[i];
        k++;
    }

    for(; j<m; j++){
        crr[k]=brr[j];
        k++;
    }
}
int main(){
    int n;
    cout<<"enter the Number in Arrays one ";
    cin>>n;


    int arr[n];
    cout<<"Enter the Arrays Element: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

   int m;
    cout<<"enter the Number in Arrays two ";
    cin>>m; 

    int brr[m];

    cout<<"Enter the Arrays Element: ";
    for(int i=0; i<m; i++){
        cin>>brr[i];
    }

    // int k;
    // cout<<"Enter the Element that is u want to insert in Arrays: ";
    // cin>>k;

    // isSorted(arr,n);
    // insertAtPosition(arr,n,k);
    // shieftNegativeToleftSide(arr,n);

    int crr[m+n];

    merge(arr,brr,m,n,crr);

    display(crr,m+n);

}