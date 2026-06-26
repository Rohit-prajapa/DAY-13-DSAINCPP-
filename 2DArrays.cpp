#include<iostream>
using namespace std;
int main(){

    // 1st method to initialize
    int arr[3][4]={{1,2,3,4},{2,4,6,8},{1,3,5,7}};

    // 2nd method to initialize

    int *brr[3];
    brr[0]=new int[4];
    brr[1]=new int[4];
    brr[2]=new int[4];

// 3rd method to initialize
    int **crr;
    crr=new int*[3];
    crr[0]=new int[3];
    crr[1]=new int[3];
    crr[2]=new int[3];

    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}