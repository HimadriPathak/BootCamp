#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[100];
    int n, d;
    cin>>n>>d;
    for (int i = 0; i < n; ++i){
        cin >> arr[i];
    }

    for (int i = 0; i < d; i++){
        int temp = arr[0];
        for (int j = 0; j < n - 1; j++){
            arr[j] = arr[j + 1];
        }
        arr[n-1] = temp;
    }

    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}