#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the Number: ";
    cin>>n;

    int count=1;
    for(int i=1; i<=n; i++){
        count++;
        n=n/10;
    }
    cout<<"Number of digit is :"<<count;
}