#include<iostream>
using namespace std;
int main(){
    char a[100]="How are you";


    for(int i=0; a[i]!='\0'; i++){
        cout<<a[i];
    }

    cout<<endl;

    int count=1;
    for(int i=0; a[i]!='\0'; i++){
        if(a[i]==' '){
            count++;
        }
    }
    cout<<count<<" ";
    
}