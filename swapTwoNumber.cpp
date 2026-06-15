#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter the 1st Number: ";
    cin>>a;

    int b;
    cout<<"enter the 2nd Number: ";
    cin>>b;

cout<<"Befour Swap :";
cout<<a<<"  "<<b<<" "<<endl;

a=a+b;
b=a-b;
a=a-b;

cout<<"AFter Swap : ";
cout<<a<<" "<<b<<" ";
}