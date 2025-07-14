#include<iostream>
using namespace std;
#include<map>
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
bool detectloop(Node* head){
    if (head == NULL){
        return false ;
    }
    map<Node*,bool> visited;
    Node* temp = head;
    while(temp!=NULL){
        if(visited[temp]=true){
            cout<<"Present of element:"<< temp->data <<endl;
            return true; // means cycle is present
        }
        visited[temp]=true;
        temp = temp -> next;
    }
    return false;
}


bool floydcycle(Node* head){
    if(head== NULL){
        return false;
    }
    Node* fast = head;
    Node* slow = head;
    while(slow!=NULL&&fast!=NULL){
        fast = fast->next;
        if(fast!=NULL){
            fast = fast->next;
        }
        slow = slow ->next;
        if(slow==fast){
            return true;
        }
    }
    return false;
}


Node* floydDetectLoop(Node* head) {

    if(head == NULL)
        return NULL;

    Node* slow = head;
    Node* fast = head;

    while(slow != NULL && fast !=NULL) {
        
        fast = fast -> next;
        if(fast != NULL) {
            fast = fast -> next;
        }

        slow = slow -> next;

        if(slow == fast) {
            return slow;
        }
    }

    return NULL;

}

Node* getStartingNode(Node* head) {

    if(head == NULL) 
        return NULL;

    Node* intersection = floydDetectLoop(head);
    
    if(intersection == NULL)
        return NULL;
    
    Node* slow = head;

    while(slow != intersection) {
        slow = slow -> next;
        intersection = intersection -> next;
    }  

    return slow;

}

Node *removeLoop(Node *head)
{
    if( head == NULL)
        return NULL;

    Node* startOfLoop = getStartingNode(head);
    
    if(startOfLoop == NULL)
        return head;
    
    Node* temp = startOfLoop;

    while(temp -> next != startOfLoop) {
        temp = temp -> next;
    } 

    temp -> next = NULL;
    return head;
}

int main(){

    Node *node1 = new Node(10);
    // cout<<node1 ->data <<endl;
    // cout <<node1 ->next<<endl;
    
    Node* head = node1;
    Node* tail = node1;
   // print(head);
    insertAtTail(tail , 12);
    //print(head);
    insertAtTail(tail , 15);
    //print(head);
    insertAtPosition(tail,head,4,22);
    
    print(head);
    tail -> next = head -> next;
       // print(head);

       // with help of detction function and using map
    // if(detectloop(head)){
    //   cout<<"loop or cycle is present in your LL"  <<endl;
    // }
    // else{
    //     cout<<"cycle is not present in your linked list "<<endl;
    // }


    if(floydcycle(head)){
      cout<<"loop or cycle is present in your LL"  <<endl;
    }
    else{
        cout<<"cycle is not present in your linked list "<<endl;
    }
    

    

   // deleteNode(4,head);
   // print(head);
    //cout<<"head"<<" "<< head->data<<endl;
    //cout<<"tail"<<" "<< tail->data<<endl;
    return 0;
}
// #include<iostream>
// using namespace std;
// #include<map>
// class Node{
//     public :
//     int data;
//     Node* next;

//     Node(int d){
//         this->data=d;
//         this->next=NULL;
//     }
//     ~Node(){
//         int value = this->data;
//         if(this->next != NULL){
//             delete next;
//             next = NULL;
//         }
//         cout<<" memory is free for node with data"<<value<<endl;
//     }
// };
// void insertnode(Node* &tail,int element , int d ){
//     // assuming that the element is present in the list
//     if(tail == NULL){
//         Node* newnode = new Node(d);
//         tail = newnode;
//         newnode->next= newnode;

//     }
//     else{
//         // non empty list
//         //assuming that element is present in the lise
//         Node * curr = tail;
//         while(curr->data!=element){
//             curr= curr->next;
//         }
//         //element found -> curr is representing curr
//         Node* temp = new Node(d);
//         temp->next=curr->next;
//         curr->next= temp;

//     }
// }
// void print(Node* &tail){
//     Node* temp = tail;
//     do{
//         cout<<tail->data<<" ";
//         tail=tail->next;
//     }
//     while(tail!= temp);
//     cout<<endl;
// }
// void deletenode(int value,Node* &tail ){
//     // empty list
//     if(tail==NULL){
//         cout<<" List is empty , please check again"<<endl;
//         return;
//     }else{
//         // non empty
//         //assuming that value is present in the list
//         Node* prev = tail;
//         Node* curr = prev->next;
//         while(curr->data!=value){
//             prev = curr;
//             curr=curr->next;
//         }
//         prev->next=curr->next;
//         if(tail==curr){
//             tail = prev;
//         }
//         curr->next = NULL;
//         delete curr;
//     }
// }

// bool detectloop(Node* head){
//     if (head == NULL){
//         return false;
//     }
//     map<Node*,bool> visited;
//     Node* temp = head;
//     while(temp!=NULL){
//         if(visited[temp]==true){
//             return true; // means cycle is present
//         }
//         visited[temp]==true;
//         temp = temp -> next;
//     }
//     return false;
// }

// int main(){
//     Node* tail = NULL;
//     // inserting at empty
//     insertnode(tail,5,3);
//     print(tail);
//     insertnode(tail,3,5);
//     print(tail);
//     insertnode(tail,5,71);
//     print(tail);
//     insertnode(tail,71,756);
//     print(tail);
//     insertnode(tail,5,76);
//     print(tail);
//     deletenode(71,tail);
//     print(tail);
//     deletenode(756,tail);
//     print(tail);
//     deletenode(3,tail);
//     print(tail);
//     return 0;
// }