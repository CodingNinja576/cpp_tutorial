#include<iostream>
using namespace std;
class Node{
    public :
    int d;
    Node* prev;
    Node* next;
    
    Node(int data){
           d = data;
           this->next = NULL;
           this->prev = NULL;
    }
  ~Node(){
    int val  = this ->d;
    if(next!=NULL){
        delete next;
        next = NULL;
    }
    cout<<"memory free for node with data "<<val<<endl;
  }


};
void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->d<<" ";
        temp= temp ->next;

    }
}
int getlen(Node* &head){
    Node* temp = head;
    int len = 0 ;
    while(temp !=NULL){
        len++;
        temp = temp->next;
    }
    return len;

}
void insertAthead(Node* &head , int data){
    Node* temp = new Node(data);
    temp->next = head;
    head->prev = temp;
    head = temp;

}
void insertAtTail(Node* &tail , int data){
    Node * temp = new Node(data);
    tail->next = temp;
    temp->prev = tail ;
    tail = temp;
    


}

void insertAtposition(Node* &tail , Node* &head , int position ,int data){
    Node * nodetoinsert = new Node(data);
    if(position == 1){
        insertAthead(head,data);
        return;
    }

    int cnt = 1 ;
    Node* temp = head;

    while(cnt<position-1){
        temp = temp->next;
        cnt++;
        
    }
    if(temp ->next == NULL){
        insertAtTail(tail, data);
        return;
    }
    nodetoinsert->next=temp->next;
    temp->next->prev=nodetoinsert;
    temp->next = nodetoinsert;
    nodetoinsert->prev=temp;
}

void deleteNode(int position , Node * &head){
    if(position == 1){
        Node* temp = head;
        temp ->next->prev = NULL;
        head = temp ->next;
        temp->next= NULL;
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

        curr->prev=NULL;
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;

    }
}



int main(){
    Node* node1 = new Node(10);
    Node* head = node1; 
    Node* tail = node1;
    print(head);
    cout<<"  legth of linked list is " <<getlen(head)<<endl;
    insertAthead(head, 20);
    print(head);
    cout<<"  legth of linked list is " <<getlen(head)<<endl;
    insertAthead(head,354);
    print(head);
    cout<<"  legth of linked list is " <<getlen(head)<<endl;
    insertAtTail(tail , 124);
    print(head);
    cout<<"  length of linked list is "<<getlen(head)<<endl;
    insertAtTail(tail , 1024);
    print(head);
    cout<<"  length of linked list is "<<getlen(head)<<endl;
    insertAthead(head,1032);
    print(head);
    cout<<"  legth of linked list is " <<getlen(head)<<endl;
    insertAtposition(tail, head, 7,3003);
    print(head);
    cout<<" length of linked list is :"<<getlen(head)<<endl;
    deleteNode(1,head);
    print(head);
    cout<<" length of linked list is :"<<getlen(head)<<endl;
    deleteNode(3,head);
    print(head);
    cout<<" length of linked list is :"<<getlen(head)<<endl;
    deleteNode(5,head);
    print(head);
    cout<<" length of linked list is :"<<getlen(head)<<endl;
    
    

}