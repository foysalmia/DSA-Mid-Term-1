#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int income[n];
        int cost[n];
        int prefix[n];
        for(int i=0;i<n;i++)cin>>income[i];
        for(int i=0;i<n;i++){
            cin>>cost[i];
            prefix[i] = income[i]-cost[i];
        }

        for(int i=1;i<n;i++){
            prefix[i]=prefix[i]+prefix[i-1];
        }

        int q;
        cin>>q;
        int query[q];
        for(int i=0;i<q;i++){
            cin>>query[i];
        }
        for(int i=0;i<q;i++){
            if(prefix[query[i]]<0){
                cout<<0<<" ";
            }else{
                cout<<1<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
