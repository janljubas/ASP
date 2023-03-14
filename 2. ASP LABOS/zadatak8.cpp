// #8.Zadatak

#include <iostream>
using namespace std;

template <class T> class Queue {
private:
    template <class Int> struct Cvor {
        int data;
        Cvor<int> *next;
    };
    Cvor<T> *read=nullptr;
    Cvor<T> *write=nullptr;

public:
    bool dodaj(double data) {
        Cvor<T> *newElement=new (nothrow) Cvor<T>;
        if(newElement==nullptr) {
            return false;
        }
        newElement->next=nullptr;
        newElement->data=data;
        if(write==nullptr) {
            read=newElement;
        }
        else {
            write->next=newElement;
        }
        write=newElement;
        return true;
    }

    bool skini(T &data) {
        if(read==nullptr) {
            return false;
        }
        data=read->data;
        Cvor<T> *pom=read;
        read=read->next;
        if(read==nullptr) {
            write=nullptr;
        }
        delete pom;
        return true;
    }

    bool poljeURed(int polje[], int n) {
        if((n-1)<0) {
            return false;
        }
        else {
            if(this->dodaj(polje[n-1])) {
                cout<<"Dodajemo: "<<polje[n-1]<<endl;
                poljeURed(polje, n-1);
            }
            return false;
        }
        
    }
    
};


int main() {
    int polje[10];
    for(int i=0; i<10; i++) {
        int broj=rand()%11;
        polje[i]=broj;
    }
    
    int m;
    Queue<int> red;
    red.poljeURed(polje, 10);
    
    while(red.skini(m)) cout<<m<<" ";
    
    return 0;
}