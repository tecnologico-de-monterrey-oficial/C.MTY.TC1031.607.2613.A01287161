#ifndef List_h
#define List_h

#include <vector>

template <typename T>

class List {
    private:
        vector<T> list;
        int size;
    public:
        List();
        void insert(T data);
        void removeLast();
        T getData(int pos);
        int getSize();
        T getMax();
        void print();
        void insertAt(int pos, T data);
        void removeAt(int pos);


};

template <typename T>
List<T>::List(){
    size = 0;
}

template <typename T>
void List<T>::insert(T data){
    list.push_back(data);
    size++;
}




#endif /* List_h */