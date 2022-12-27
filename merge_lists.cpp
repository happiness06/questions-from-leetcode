#include<iostream>
using namespace std;

class node{
    public:
    int data; node *next;

    node(){
        next =0;
    }

    
    node(int el, node *ptr = 0){
        data = el;
        next = ptr;
    }
};

class sll{
    private:
    node *head = 0; node *tail = 0;
    //head = NULL; tail = NULL;

    public:
    void addtohead(int x){
        cout<<"Enter the element to enqueue : ";
        cin>>x;
        if(head != 0){
            head = new node(x, head);
        }
        else {
        head = new node(x);
        tail = head;
        }
    }

    void addtotail(int x){
        cout<<"Enter the element to enqueue : ";
        cin>>x;
        if (tail !=0){
            tail->next = new node(x);
            tail = tail->next;
        }
        else head = tail = new node(x);
    }

    int deletefromhead(){
        if(head !=0){
            node *tmp = head;
            int elmnt = head->data;
            head = tmp->next;
            delete tmp;
            return elmnt;
        }
        else return -1;
    }

    int deletefromtail(){
        if(tail !=0){
            node *tmp = head;
            int elmnt = tail->data;
            for(tmp = head ; tmp->next != tail ;tmp= tmp->next );
            delete tail;
            tail = tmp;
            return elmnt;
        }
        else return -1;
    }

    int deletenode(int y){
        cout<<"Enter the element to delete : ";
        cin>>y;
        if(head != 0){
            node *tmp , *pred;
            int elmnt;
            for(pred = head ,tmp = head->next; tmp->data != y; pred = pred->next ,tmp = tmp->next);
            pred->next = tmp->next;
            elmnt = tmp->data;
            delete tmp;
        }
        else return -1;
    }

    void display(){
        if(head != 0){
            cout<<"The linked list is ";
            for(node *i = head; i != 0; i=i->next){
                cout<<i->data<<"->";
            }cout<<"NULL"<<endl;
        }
        else cout<<"NULL";
    }
};

int main(){
    
}