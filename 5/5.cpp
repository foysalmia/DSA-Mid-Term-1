#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }

    int mid = (n/2);
    int sum = 0;

    for(int i=0;i<n;i++){
        sum += a[i][mid];
    }

    for(int i=0;i<n;i++){
        sum += a[mid][i];
    }

    for(int i=0;i<mid;i++){
        sum += a[0][i];
        sum += a[i][n-1];
    }

    for(int i=n-1;i>mid;i--){
        sum += a[i][0];
        sum += a[n-1][i];
    }

    sum -= a[mid][mid];

    cout<<sum<<endl;

    return 0;
}

