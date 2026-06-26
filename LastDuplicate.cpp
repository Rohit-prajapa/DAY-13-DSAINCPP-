#include<iostream>
using namespace std;
void duplicate(int arr[], int n){
    int last=0;
    for(int i=0; i<n; i++){
        if(arr[i]==arr[i+1] && arr[i]!=last){
            cout<<arr[i]<<" ";
            last=arr[i];
        }
    }
}
void countDuplicate(int arr[], int n){
    for(int i=0; i<n; i++){
        if(arr[i]==arr[i+1]){
            int j=i+1;
            while(arr[j]==arr[i]) j++;
            cout<<arr[i]<<" "<<j-i<<" ";
            i=j-1;
        }
    }
}

void countDuplicateUnsortedArryas(int arr[], int n){
    for(int i=0; i<n-1; i++){
          if(arr[i] == -1) continue;
        int count=1;
        for(int j=i+1; j<n; j++){
            if(arr[j]==arr[i]){
                count++;
                arr[j]=-1;
            }
        }

        if(count>1) cout<<arr[i]<<endl<<" count is "<<count<<" ";
    }
}
int main(){
    int n;
    cout<<"Enter the Number :";
    cin>>n;

    int arr[n];
    cout<<"Enter the Arrays Element: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    // duplicate(arr,n);

    // cout<<endl;
    // countDuplicate(arr,n);

    countDuplicateUnsortedArryas(arr,n);
}