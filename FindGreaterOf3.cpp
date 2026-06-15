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

    if(a>=b){
        if(a>=c){
            cout<<a<<" is Greater number: ";
        }
        else{
            cout<<c<<" is Gretare nUmber :";
        }
    }
    else{
        if(b>=c){
            cout<<b<<" is Greater number: ";
        }
        else{
            cout<<c<<" is Greater Number: ";
        }
    }
}