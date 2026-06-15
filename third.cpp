#include<iostream>
using namespace std;
void deleteElement(int arr[], int &n){
    int value;
    cout << "Enter element to delete: ";
    cin >> value;

    int pos = -1;

    for(int i = 0; i < n; i++){
        if(arr[i] == value){
            pos = i;
            break;
        }
    }

    if(pos == -1){
        cout << "Element not found";
        return;
    }

    for(int i = pos; i < n - 1; i++){
        arr[i] = arr[i + 1];
    }
    n--;
    cout << "Array after deletion: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}
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

   int choice;

cout<<"\n1.Display";
cout<<"\n2.Reverse";
cout<<"\n3.Sort Descending";
cout<<"\n4.Merge";
cout<<"\n5.Even Index";
cout<<"\n6.Sum";
cout<<"\n7.Index Position";
cout<<"\n8.Square";
cout<<"\n9.Delete Element";

cout<<"\nEnter your choice: ";
cin>>choice;

switch(choice)
{
    case 1:
        display(arr,n);
        break;

    case 2:
        reverse(arr,n);
        break;

    case 3:
        sortDescending(arr,n);
        break;

    case 4:
        merge(arr,n);
        break;

    case 5:
        evenIndex(arr,n);
        break;

    case 6:
        sum(arr,n);
        break;

    case 7:
    {
        int p;
        cout<<"Enter the number: ";
        cin>>p;
        indexPosition(p);
        break;
    }

    case 8:
        square(arr,n);
        break;

    case 9:
    deleteElement(arr,n);
    break;

    default:
        cout<<"Invalid Choice";
}
}