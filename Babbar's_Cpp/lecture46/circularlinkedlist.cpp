#include<iostream>
using namespace std;
class Node{
    public :
    int data;
    Node* next;

    Node(int d){
        this->data=d;
        this->next=NULL;
    }
    ~Node(){
        int value = this->data;
        if(this->next != NULL){
            delete next;
            next = NULL;
        }
        cout<<" memory is free for node with data"<<value<<endl;
    }
};
void insertnode(Node* &tail,int element , int d ){
    // assuming that the element is present in the list
    if(tail == NULL){
        Node* newnode = new Node(d);
        tail = newnode;
        newnode->next= newnode;

    }
    else{
        // non empty list
        //assuming that element is present in the lise
        Node * curr = tail;
        while(curr->data!=element){
            curr= curr->next;
        }
        //element found -> curr is representing curr
        Node* temp = new Node(d);
        temp->next=curr->next;
        curr->next= temp;

    }
}
void print(Node* &tail){
    Node* temp = tail;
    do{
        cout<<tail->data<<" ";
        tail=tail->next;
    }
    while(tail!= temp);
    cout<<endl;
}
void deletenode(int value,Node* &tail ){
    // empty list
    if(tail==NULL){
        cout<<" List is empty , please check again"<<endl;
        return;
    }else{
        // non empty
        //assuming that value is present in the list
        Node* prev = tail;
        Node* curr = prev->next;
        while(curr->data!=value){
            prev = curr;
            curr=curr->next;
        }
        prev->next=curr->next;
        if(tail==curr){
            tail = prev;
        }
        curr->next = NULL;
        delete curr;
    }
}

int main(){
    Node* tail = NULL;
    // inserting at empty
    insertnode(tail,5,3);
    print(tail);
    insertnode(tail,3,5);
    print(tail);
    insertnode(tail,5,71);
    print(tail);
    insertnode(tail,71,756);
    print(tail);
    insertnode(tail,5,76);
    print(tail);
    deletenode(71,tail);
    print(tail);
    deletenode(756,tail);
    print(tail);
    deletenode(3,tail);
    print(tail);
    return 0;
}