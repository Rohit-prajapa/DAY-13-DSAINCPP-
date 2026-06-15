#include<iostream>
using namespace std;

void square(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<(arr[i]*arr[i])<<endl;
    }
}
void indexPosition(int p){
    string num = to_string(p);

    for(int i = 0; i < num.length(); i++){
        cout << num[i] << " - " << i << endl;
    }
}
int sum(int arr[], int n){
    int sum=0;
    for(int i=0; i<n; i++){
        sum=sum+arr[i];
    }
    cout<<"sum is : "<<sum<<" ";
     return sum;
}
 void evenIndex(int *p, int n){
    for(int i=0; i<n; i++){
        if(i%2==0){
            cout<<i<<"  ";
        }
    }
}
void merge(int *p, int n){
     int brr[n];
    cout<<"enter 2nd Arrays element: ";
    for(int i=0; i<n; i++){
        cin>>brr[i];
    }
    for(int i=0; i<n; i++){
        cout<<*(p+i)<<"  ";
    }
     for(int i=0; i<n; i++){
        cout<<brr[i]<<"  ";
    }

    cout<<endl;
   float mean = (sum(p,n)+sum(brr,n))/(float)(2*n);
   cout<<"Mean = "<<mean;
}

void swap(int *a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
void sortDescending(int *p, int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(*(p+j) < *(p+j+1)){
                swap((p+j),(p+j+1));
            }
        }
    }

    for(int i=0; i<n; i++){
        cout << *(p+i) << " ";
    }
}
void reverse(int *p, int n){
    for(int i=n-1; i>=0; i--){
        cout<<*(p+i)<<" ";
    }
}
void display(int *p, int n){
    for(int i=0; i<n; i++){
        cout<<*(p+i)<<" ";
    }
}
int main(){
    int n;
    cout<<"enter the number of element: ";
    cin>>n;

    int arr[n];
    cout<<"enter the Arrays element: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    display(arr,n);
    cout<<endl;

    reverse(arr,n);
    cout<<endl;

   sortDescending(arr,n);
   cout<<endl;

    merge(arr,n);
    cout<<endl;

    evenIndex(arr,n);

    cout<<endl;

    sum(arr,n);

    cout<<endl;

    int p;
    cout<<"enter the number: ";
    cin>>p;

    indexPosition(p);

    cout<<endl;
    square(arr,n);
}