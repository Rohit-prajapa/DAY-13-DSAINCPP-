#include<iostream>
using namespace std;

int main() {
    char a[100];

    cout << "Enter the String: ";
    cin >> a;

    cout << "String is: ";

    for(int i = 0; a[i] != '\0'; i++) {
        cout << a[i];
    }

    for(int i=0; a[i]!='\0'; i++){
        a[i]=a[i]+32;
    }

    cout<<endl;
    
    cout<<a<<" ";
    return 0;
}