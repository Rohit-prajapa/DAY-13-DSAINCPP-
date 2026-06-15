#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter the 1st Number: ";
    cin>>a;


    int b;
    cout<<"enter the 2nd Number : ";
    cin>>b;

    int c;
    cout<<"enter the 3rd Number: ";
    cin>>c;

    if(a>=b && a>=c){
        cout<<a<<" is Greater Number: ";
    }
    else if(b>=a && b>=c){
        cout<<b<<" is greater Number: ";
    }
    else{
        cout<<c<<" is greater Number ";
    }
}