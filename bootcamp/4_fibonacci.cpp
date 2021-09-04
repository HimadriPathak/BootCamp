#include<iostream>
using namespace std;
int main(){
    int n,a=0,b=1,c;
    cout<<"enter a no.: ";
    cin>>n;
    cout<<a<<", "<<b<<"";
    for(int i=1; i<n;i++){
        c = a+b;
        a=b;
        b=c;
        cout<<", "<<c;
    }
    cout<<endl;
    return 0;
}