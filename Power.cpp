#include<iostream>
using namespace std;
int pow(int a, int b){
    if(b==0) return 1;
    return a*pow(a,b-1);
}

int pow1(int a, int b){
    if(b==0) return 1;

    if(b%2==0){
        return pow(a*a, b/2);
    }

    else{
        return a*pow(a*a,(b-1)/2);
    }
}

int  pow2(int a, int b){
    int power=1;
 for(int i=1; i<=b; i++){
       power=power*a;
    }
    return power;
}
int main(){
    int a;
    cout<<"enter the base value : ";
    cin>>a;

     int b;
    cout<<"enter the power value:  ";
    cin>>b;

   cout<<pow2(a,b)<<" ";
}