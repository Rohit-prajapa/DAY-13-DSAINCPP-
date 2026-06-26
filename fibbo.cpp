#include<iostream>
using namespace std;
int F[10]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};

int fibbo1(int n){
    if(n<=1){
        F[n]=n;
        return n;
    }
    if(F[n-2]==-1){
        F[n-2]=fibbo1(n-2);
    }
   if(F[n-1]==-1){
    F[n-1]=fibbo1(n-1);
   }

   return F[n-2]+F[n-1];
}
// int fibbo(int n){
//     if(n<=1) return n;
//     return fibbo(n-1)+fibbo(n-2);
// }
int main(){
    int n;
    cout<<"enter the number: ";
    cin>>n;

    cout<<fibbo1(n)<<" ";
//    for(int i=0; i<n; i++){
//      cout<<fibbo1(i)<<" ";
//    }
}