#include <iostream>
using namespace std; 
int main(){
    int e, arr[100];
    int first = 0, second = -1;
    cout << "enter number of elements: ";
    cin>>e;
    cout<<"enter the elements: ";
    for (int i = 0; i < e; ++i){
        cin >> arr[i];
    }
    for (int i = 1; i < e; i++) {
        if (arr[i] > arr[first]) {
            second = first;
            first = i;
        }else if (arr[i] < arr[first]) {
            if (second == -1 || arr[second] < arr[i]){
                second = i;
            }     
        }
    }
    if (second == -1)
        cout << "Second Largest is not their."<<endl;
    else
        cout << "Second largest : " << arr[second]<<endl;
}