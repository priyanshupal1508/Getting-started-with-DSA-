#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=2;i<n;i++){
        if(n%i==0){
            cout<<("Note a Prime");
            break;
        }
        else if(i==(n-1)){
            cout<<n<<" Is a Prime number";
                break;
        }
    }
}