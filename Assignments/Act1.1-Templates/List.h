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

template <typename T>
void List<T>::removeLast(){
    if(size > 0 ){
        cout << list[size -1] << endl;
        list.pop_back(data);
        size--;
    }
    else(){
        cout << "No hay elementos" << endl;
    }
}

template <typename T>
T List<T>::getData(int pos){
    return list[pos];
}

template <typename T>
int List<T>::getSize(){
    return size;
}

template <typename T>
T List<T>::getMax(){
    T maxVal = list[0];
    for (int i = 0; i < size; i++){
        if(list[i] > maxVal){
            maxVal = list[i];
        }
    }
    return maxVal;
    
}





#endif /* List_h */