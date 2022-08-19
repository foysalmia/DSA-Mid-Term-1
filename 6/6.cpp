#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int value;
    Node * next;
    Node(int value){
        this->value = value;
        this->next = NULL;
    }
};

void insertAtTail(Node * &head,int value){
    Node * newNode = new Node(value);
    if(head == NULL){
        head = newNode;
        return;
    }
    Node * tmp = head;
    while(tmp->next != NULL){
        tmp = tmp->next;
    }
    tmp->next = newNode;
}

void display(Node * &head){
    Node * tmp = head;
    while(tmp != NULL){
        cout<<tmp->value;
        if(tmp->next != NULL)cout<<" -> ";
        tmp = tmp->next;
    }
    cout<<endl;
}

int main(){
    Node * head = NULL;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        a = (a%2==0) ? -1 : a;
        insertAtTail(head,a);
    }
    display(head);
}
