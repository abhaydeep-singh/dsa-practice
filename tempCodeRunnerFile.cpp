#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next; // it represent pointer to the next node in LL. 

    // Node *next; and Node* next; is same thing

    // 'Node refers to class representing a node in LL, it is alos a DATATYPE, it define what type of data *next can point which is another NODE itself'

    // '*next is a pointer, means it can store address of next node which is our requirement'


    // creating constructor to add data to our Node, we can add it by other way too, by accesing it in main()
    Node(int data){
        this -> data = data;
        this -> next = NULL; // because we are creating only one node, not pointing it anywhere
    }

    // creating destructor
    ~Node(){
        int value = this->data;
        //memory free
        if (this->next != NULL)
        {
            delete next;
            this->next=NULL;
        }
        cout << " memory is free for node with data " << value << endl;
    }

};

void print(Node *&head){
    if (head==NULL) 
    {
        cout<<"empty Linked List";
    }
    Node *temp=head; //head points on temp
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }    
}

void insertAtStart(Node *&head, int data){
    //create new node
    Node *temp_node=new Node(data); // class Node(jo ekk node ko represent karti hai), uske constructor ka use karke node bana dia
    temp_node->next=head; //head(exsisting LL ka head) ko point kar dia new node(tempnode) ke NEXT mein
}

int main(){

    // //dynamic object
    // Node *dynamic_obj = new Node(10); // creating new node(Node). data inserted by using dynamic_obj
    // cout<<"Data: "<<dynamic_obj->data<<endl;
    // cout<<"Next: "<<dynamic_obj->next<<endl;

// create a node using
    Node *node1 = new Node(10); //initial node
    // pointing head of node1 in head
    Node *head=node1; 
    cout<<"node1: "<<&node1<<endl;
    insertAtStart(head,20);

    return 0;
}