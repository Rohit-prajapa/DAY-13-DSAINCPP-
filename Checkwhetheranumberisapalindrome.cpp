#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the Number: ";
    cin>>n;

    int temp=n;

    int rev=0;
    while(n!=0){
        int ld=n%10;
        rev=rev*10+ld;
        n=n/10;
    }
    if(temp==rev){
        cout<<rev<<" is palindrome Number: ";
    }
    else{
        cout<<rev<<"is Not a palindrome Number: ";
    }
}