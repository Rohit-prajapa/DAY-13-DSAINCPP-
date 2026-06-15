#include<iostream>
using namespace std;
int main(){
    float celsius;
    cout<<"Enter temp in Celsius: :";
    cin>>celsius;

    float Fahrenheit=((9.0/5*celsius)+32);

    cout<<Fahrenheit<<" ";
}