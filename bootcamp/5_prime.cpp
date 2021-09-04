#include<iostream>
using namespace std;
int main(){
    int n, i = 1;
    cout<<"enter a no.: ";
    cin>>n;
    if(n>i){
        for(i=2; i<n;){
            if (n%i == 0){
                cout<<n<<" is not Prime"<<endl;
                i=0;
                break;
            }
            i+=1;
        }
    }
    if(i != 0){
        cout<<n<<" is Prime"<<endl;
    }
    return 0;
}