#include<bits/stdc++.h>
#include"MYSTACK.h"
using namespace std;

int main(){
    MyStack<int > st;
    int n;
    cin>>n;
    while(n--){
        int a;
        cin>>a;
        st.push(a);
    }


    cout<<st.mid()<<endl;
    st.display();

    return 0;
}
