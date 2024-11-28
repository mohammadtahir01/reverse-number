#include<iostream>
using namespace std;
int main(){
    int n;
    
    cout<<"enter the number:";
    cin>>n;
    if(n != 0){
        cout<<n%10;
        n=n/10;
        
        cout<<n%10;
        n=n/10;
        
        cout<<n;
    }
}