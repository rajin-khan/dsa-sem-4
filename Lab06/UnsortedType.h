#ifndef UNSORTEDTYPE_H_INCLUDED
#define UNSORTEDTYPE_H_INCLUDED

template <class ItemType>
class UnsortedType {

    struct NodeType {

        ItemType info;
        NodeType* next;
    };

    public:

        UnsortedType(); //constructor
        ~UnsortedType(); //destructor

        bool IsFull();
        int LengthIs();

        void InsertItem(ItemType);
        void DeleteItem(ItemType);

        void RetrieveItem(ItemType&, bool&);
        void MakeEmpty();

        void ResetList();
        void GetNextItem(ItemType&);

    private:

        NodeType* listData; //head
        int length;
        NodeType* currentPos;
};

#endif