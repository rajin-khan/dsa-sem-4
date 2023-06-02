#ifndef DYNARR_H_INCLUDED
#define DYNARR_H_INCLUDED

template <class T>
class DynArr{

    private:

        T** data;
        int rows;
        int cols;

    public:

        DynArr();
        DynArr(int, int);
        ~DynArr();
        
        void setValue(int, int, T);
        T getValue(int, int);

};

#endif