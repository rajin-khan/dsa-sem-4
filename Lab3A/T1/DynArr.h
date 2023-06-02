#ifndef DYNARR_H_INCLUDED
#define DYNARR_H_INCLUDED

template <class T>
class DynArr {

    private:

        T* data;
        T size;

    public:

        DynArr();
        DynArr(int);
        ~DynArr();
        
        void setValue(int, T);
        T getValue(int);

};

#endif