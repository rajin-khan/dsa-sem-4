#ifndef LINKEDLIST_H_INCLUDED
#define LINKEDLIST_H_INCLUDED

template <class T>
class linkedList {

    struct node{ //node structure created

        T data; //the info stored
        node* next; //the "next" pointer
    };

    public: 

        linkedList(); //constructor

        void insertAtHead(T); //insertion at beginning
        void insertAtTail(T); //insertion at the end

        void deleteAtHead(); //deletion at beginning
        void deleteAtTail(); //deletion at end

        void displayList();
        bool search(T);
    
    private:

        node* head;
};

#endif