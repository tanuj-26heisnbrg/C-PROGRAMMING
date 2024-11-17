#include <iostream>
using namespace std ;

class node {
    public :
        int data ;
        node *next ;
        node(int d){
            data=d ;
            next=NULL ;
            }
};

class Lnklst{
    public :
     node * start ;

  // Constructor to initialize the linked list
    Lnklst() {
        start = NULL;
    }
     
     //insertion at begining 
     void insert_beg(int data){
         node * N = new node (data);
         N->next=start ;
         start=N;
     }
     //insertion at end 
     void insert_end (int d){
         node*n = new node(d);
         node * T ;
         for(T=start ; T->next!=NULL ; T=T->next);
         T -> next = n ;
     }
     
     //display linked list
     
    void display (){
        node * t;
        for(t=start ; t!=NULL ; t=t->next)
              cout<<t->data ;
              
    }
};

int main() {

        Lnklst obj1;

    obj1.insert_beg(90);
    obj1.insert_beg(70);
    obj1.insert_end(100);

    obj1.display();
}
