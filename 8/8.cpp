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

void keepAndDelete(Node * &head,int r,int d){
    Node *tmp = head;
    Node *rest = NULL;
    while (tmp != NULL)
    {
        for (int i = 1; i< r && tmp!= NULL; i++) {
           tmp = tmp->next;
        }
        if (tmp == NULL) return;
        rest = tmp->next;
        for (int i = 1; i<=d && rest!= NULL; i++)
        {
            Node *delNode = rest;
            rest = rest->next;
            delete delNode;
        }

        tmp->next = rest;
        tmp = rest;
    }
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
    int n,a,b;
    cin>>n>>a>>b;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        insertAtTail(head,a);
    }
    keepAndDelete(head,a,b);
    display(head);
}
