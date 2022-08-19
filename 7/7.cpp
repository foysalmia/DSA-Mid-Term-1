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
};

void display(Node * &head){
    Node * tmp = head;
    while(tmp != NULL){
        cout<<tmp->value;
        if(tmp->next != NULL)cout<<" -> ";
        tmp = tmp->next;
    }
    cout<<endl;
};

void reverseNode(Node * &head){
    Node* current = head;
    Node *prev = NULL, *Next = NULL;

    while (current != NULL) {
        Next = current->next;
        current->next = prev;
        prev = current;
        current = Next;
    }
    head = prev;
}

void reverseByK(Node * &head,int k){
    Node *tmp = head;
    Node * first = tmp;
    Node *rest = NULL;
    for(int i=1;i<k;i++){
        tmp = tmp->next;
    }
    rest = tmp->next;
    tmp->next = NULL;
    reverseNode(rest);
    reverseNode(first);
    Node * save = first;
    while(first->next!=NULL){
        first = first->next;
    }
    first->next = rest;
    head = save;
};

int main(){
    Node * head = NULL;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        insertAtTail(head,a);
    }
    int m;
    cin>>m;
    reverseByK(head,m);
    display(head);
}

