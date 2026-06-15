#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Number of Row: ";
    cin>>n;

    for(int i=0; i<n; i++){
        for(int j=0; j<=n-i-1; j++){
           cout<<"  ";

        }
        int a=1;
         for(int j=0; j<=i; j++){
           cout<<a<<"  ";
           a = a * (i - j) / (j + 1);
        }
        cout<<endl;
    }
}