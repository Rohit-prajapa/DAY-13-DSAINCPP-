#include<iostream>
#include <algorithm>
#include <limits>
using namespace std;
void printIndexOfVowel(string str){
    for(int i=0; i<str.length(); i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
            cout<<i<<" ";
        }
    }
}
void anagram(string str){
     string str1;
    cout<<"Enter 2nd string: ";
    getline(cin,str1);
   

    sort(str.begin(), str.end());
    sort(str1.begin(), str1.end());

    if(str == str1)
        cout<<"Anagram";
    else
        cout<<"Not Anagram";
    }

void toggle(string str){

    for(int i=0; i<str.length(); i++){
        if(str[i]>='a' && str[i]<='z'){
            str[i]=toupper(str[i]);
        }
        else{
            str[i]=tolower(str[i]);
        }
    }
    cout<<str;
}

void reverse(string str){
    for(int i=str.length()-1; i>=0; i--){
        cout<<str[i]<<" ";
    }
}
void printCapital(string str){
    for(int i=0; i<str.length(); i++){
        str[i]=toupper(str[i]);
    }
    cout<<str<<" ";
}
void secondOccurrence(string str){
    char ch;
    cout << "Enter character: ";
    cin >> ch;

    int count = 0;

    for(int i = 0; i < str.length(); i++){
        if(str[i] == ch){
            count++;

            if(count == 2){
                cout << "Second occurrence at index: " << i;
                return;
            }
        }
    }

    cout << "Second occurrence not found";
}
void printNoOfAlphabet(string str){
    int count = 0;

    for(int i=0; i<str.length(); i++){
        if(isalpha(str[i]))
            count++;
    }

    cout << "Alphabets = " << count;
}
void printEachWord(string str){
    string word="";

    for(char ch : str){
        if(ch!=' ')
            word+=ch;
        else{
            cout<<word<<endl;
            word="";
        }
    }
    cout<<word<<endl;
}
void noOfWord(string str){
    int count=1;
    for(int i=0; i<str.length(); i++){
        if(str[i]==' ')
        count++;
    }
    cout<<"No of Word is :"<<count<<endl;
}

void noOfSpace(string str){
    int count1=0;
    for(int i=0; i<str.length(); i++){
        if(str[i]==' ')
        count1++;
    }
    cout<<"no of space is :"<<count1<<" ";
}
int main(){
    string str;
    cout<<"Enter the String: ";
    getline(cin,str);

    int choice;

    cout<<"\n1. Number of Words";
    cout<<"\n2. Number of Spaces";
    cout<<"\n3. Print Each Word";
    cout<<"\n4. Number of Alphabets";
    cout<<"\n5. Second Occurrence";
    cout<<"\n6. Convert to Uppercase";
    cout<<"\n7. Reverse String";
    cout<<"\n8. Toggle Case";
    cout<<"\n9. Anagram Check";
    cout<<"\n10. Index of Vowels";

    cout<<"\nEnter Choice: ";
    cin>>choice;

    switch(choice){

        case 1:
            noOfWord(str);
            break;

        case 2:
            noOfSpace(str);
            break;

        case 3:
            printEachWord(str);
            break;

        case 4:
            printNoOfAlphabet(str);
            break;

        case 5:
            secondOccurrence(str);
            break;

        case 6:
            printCapital(str);
            break;

        case 7:
            reverse(str);
            break;

        case 8:
            toggle(str);
            break;

        case 9:
            anagram(str);
            break;

        case 10:
            printIndexOfVowel(str);
            break;

        default:
            cout<<"Invalid Choice";
    }

    return 0;
}

