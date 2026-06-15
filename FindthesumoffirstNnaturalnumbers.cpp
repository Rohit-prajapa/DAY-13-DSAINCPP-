#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the Number: ";
    cin>>n;

    int sum=0;
    for(int i=1; i<=n; i++){
        sum=sum+i;
    }
   cout<<"The sum of First "<<n<<" natural Number is :"<<sum<<endl;
}