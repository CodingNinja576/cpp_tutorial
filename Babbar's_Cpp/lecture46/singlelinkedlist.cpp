#include<iostream>
using namespace std;
// insertion at any position 
// defining nodes
class Node{
    public :
    int data;
    Node *next;

    // constructor called
    Node(int data){
        this -> data =data;
        this -> next = NULL;
    }


    // destructor called

    ~Node(){
        int value = this -> data;
        if (this ->next != NULL)
        {
            delete next;
            this ->next = NULL;
        }
        cout<<"Memory is free for node with data"<<value<<endl;
        
    }
};

// How to insert Node at start of existing node ?

void insertAtHead(Node* &head , int d){
    // New node created
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
    
}

// How to insert Node at end of existing node?
void insertAtTail(Node* &tail , int d ){
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp;

}

// How to insert node in between two nodes ?

void insertAtPosition(Node* &tail , Node* &head,int position , int d){
    if(position==1){
        insertAtHead(head , d);
        return;
    }
    Node* temp = head ;
    int cnt = 1;
    // How to traverse in a Node?
    while(cnt < position-1){
        temp = temp->next;
        cnt++;
    }
    if(temp->next == NULL){

        insertAtTail(tail,d);
        return;
    }

    Node* nodetoinsert = new Node(d);
    nodetoinsert->next = temp -> next;
    temp->next = nodetoinsert;



}
// How to delete any Node ?

void deleteNode(int position , Node * &head){
    if(position == 1){
        Node* temp = head;
        head = head -> next;
        temp -> next = NULL;
        delete temp;
    }
    else{
        Node * curr = head;
        Node * prev = NULL;
        int cnt = 1;

        while(cnt<position){
            prev = curr;
            curr = curr ->next; 
            cnt++;
        }

        prev ->next = curr -> next;
        curr -> next = NULL;
        delete curr;

    }
}

// How to print Node ?

void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<< temp ->data << " ";
        temp = temp->next;
    }
    cout<<endl;


}
int main(){

    Node *node1 = new Node(10);
    // cout<<node1 ->data <<endl;
    // cout <<node1 ->next<<endl;
    
    Node* head = node1;
    Node* tail = node1;
    print(head);
    insertAtTail(tail , 12);
    print(head);
    insertAtTail(tail , 15);
    print(head);
    insertAtPosition(tail,head,4,22);
    print(head);

    

    deleteNode(4,head);
    print(head);
    cout<<"head"<<" "<< head->data<<endl;
    cout<<"tail"<<" "<< tail->data<<endl;
    return 0;
}