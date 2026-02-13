/*
ABCD
EFGH
IJKL
MNOP
*/
#include<iostream>
using namespace std;
 int main(){
    int n;
    cin>>n;
    int i=1;
    int k=0;
    char ch='A';
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<ch;
            j++;
            ch++;
        }
        cout<<endl;
        i++;
    }
 }