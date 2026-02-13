/*
1
23
345
4567
*/
#include<iostream>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        int value=i;// if we don't use the value variable we can use 
        while(j<=i){
            cout<<value;//or we can use (i+j-1) to print the same thing 
            value++;
            j++;
        }
        cout<<endl;
        i++;
    }
}