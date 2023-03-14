// #1.Zadatak

#include <iostream>

using namespace std;

template <class T> class List {
    template <class X> struct cvor {
        X element;
        cvor<T> *next;
    };
    cvor<T> *head=nullptr;

public:
    bool upis(T element) {

        cvor<T> *newElement=new (nothrow) cvor<T>;
        if(newElement==nullptr)     return false;

        newElement->element=element;
        
        cvor<T> **p;
        for(p=&head; *p && element > (*p)->element; p=&((*p)->next));
        
        newElement->next=*p;
        *p=newElement;
        
        return true;
    }

    void ispis() {
        for(cvor<T> *p=head; p; p=p->next) {
            cout<<p->element<<" ";
        }
        cout<<endl;
    }
    
};

int main() {
    int n;
    cin>>n;
    List<int> l;
    int broj;
    for(int i=0; i<n; i++) {
        cin>>broj;
        l.upis(broj);
    }
    l.ispis();
    return 0;
    
}