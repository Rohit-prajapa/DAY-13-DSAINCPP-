#include<iostream>
using namespace std;
int main(){
    char a[100];

    cout<<"Enter String: ";
    cin>>a;

    for(int i=0; a[i]!='\0'; i++){
        cout<<a[i];
    }

    cout<<endl;
    for(int i=0; a[i]!='\0'; i++){
        if(a[i]>=65 && a[i]<=90){
            a[i]=a[i]+32;
        }
        else if(a[i]>=90 && a[i]<=122){
            a[i]=a[i]-32;
        }
    }

    cout<<a;
}