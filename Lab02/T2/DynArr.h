#ifndef DYNARR_H_INCLUDED
#define DYNARR_H_INCLUDED

class DynArr{

    private:

        int* data;
        int size;

    public:

        DynArr();
        DynArr(int);
        ~DynArr();
        
        void setValue(int, int);
        int getValue(int);

        void allocate(int);

};

#endif