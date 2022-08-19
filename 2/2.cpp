#include<bits/stdc++.h>
using namespace std;

int main(){
    int m,n;
    cin>>m;
    int arr[m];
    for(int i=0;i<m;i++){
        cin>>arr[i];
    }

    cin>>n;
    int brr[n];
    for(int i=0;i<n;i++){
        cin>>brr[i];
    }

    for(int i=0;i<m;i++){
        bool flag = true;
        for(int j=0;j<n;j++){
            if(arr[i]==brr[j]){
                flag = false;
                break;
            }
        }
        if(flag){
            cout<<arr[i]<<" ";
        }
    }

    return 0;
}
