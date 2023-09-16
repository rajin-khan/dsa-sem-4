#ifndef DYNARR_H_INCLUDED
#define DYNARR_H_INCLUDED

class DynArr{

    private:

        int** data;
        int rows;
        int cols;

    public:

        DynArr();
        DynArr(int, int);
        ~DynArr();
        
        void setValue(int, int, int);
        int getValue(int, int);

};

#endif