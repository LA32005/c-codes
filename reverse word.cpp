#include<iostream>
#include <string>
using namespace std;

int main(){
    string word;
    cout<<"Enter the word:";
    cin>>word;
    int size=word.length()-1;
    string reverse="";
    
    for(int i=size;i>=0;i--){
        reverse+=word[i];
    }
    cout<<reverse<<endl;
    return main();
}
