#include<iostream>
using namespace std;
int main(){
    int a, b, c;
    cout<<"enter two numbers: ";
    cin>>a>>b;
    c=a;
    a=b;
    b=c;
    cout<<a<<" "<<b<<endl;
    return 0;
}