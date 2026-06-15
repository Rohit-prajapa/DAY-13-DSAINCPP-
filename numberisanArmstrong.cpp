#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the Number: ";
    cin>>n;

    int temp=n;

    int sum=0;
    while(n!=0){
        int ld=n%10;
        sum=sum+ld*ld*ld;
        n=n/10;
    }

    if(temp==sum){
        cout<<temp<<"  is a ArmStrong Number: ";
    }
    else{
        cout<<temp<<" is Not a ArmStrong NUmber: ";
    }
}