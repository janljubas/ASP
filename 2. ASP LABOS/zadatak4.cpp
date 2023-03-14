// #4.Zadatak 

#include <iostream>
#include <cstdlib>
using namespace std;

template <class T> class Stack {
    template <class X> struct StackElement {
        X item;
        StackElement<X> *next; 
    };
    StackElement<T> *top=nullptr;
    
public:
    bool push(T item) {
        StackElement<T> *newElement=new (nothrow) StackElement<T>;
        if(newElement==nullptr) {
            return false;
        }
        newElement->item=item;
        newElement->next=top;
        top=newElement;
        return true;
    }

    bool pop(T &item) {
        if(top==nullptr)    return false;
        item=top->item;
        StackElement<T> *pom=top;
        top=top->next;
        
        delete pom;
        
        return true;
    }

};

int main() {
    Stack<int> s;
    int g;
    srand(time(NULL));

    for(int i=0; i<101; i++) {
        int broj=rand()%100;
        s.push(broj);
    }

    while(s.pop(g)) {cout<<g<<endl;}  
    
    return 0;
}