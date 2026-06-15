#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the Number: ";
    cin>>n;

    int rev=0;
    while(n!=0){
        int ld=n%10;
        rev=rev*10+ld;
        n=n/10;
    }
    cout<<"Reverse is :"<<rev<<" ";
}