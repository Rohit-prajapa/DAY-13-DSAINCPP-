#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the NUmber: ";
    cin>>n;

    int sum=0;
    while(n!=0){
        int ld=n%10;
        sum=sum+ld;
        n=n/10;
    }

    cout<<"the sum of the Digit is :"<<sum<<" ";
}