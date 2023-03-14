// #2.Zadatak
#include <iostream>

using namespace std;

template <class T> class List {
    template <class X> struct cvor {
        string element;
        cvor<string> *next;
        cvor<string> *prev;
    };
    cvor<T> *head=nullptr;
    cvor<T> *tail=nullptr;
public:
    bool upis(string element) {
        cvor<T> *newElement=new cvor<T>;
        if(newElement==nullptr) {
            return false;
        }
        newElement->element=element;
        newElement->next=nullptr;
        newElement->prev=tail;
        
        if(tail==nullptr)   head=newElement;
        
        else    tail->next=newElement;
        
        tail=newElement;
        
        return true;
    }

    void ispis() {
        for(cvor<T> *p=head; p; p=p->next)  cout<<p->element<<" ";
        cout<<endl;
    }
};
int main() {
    int n;
    cin>>n;
    string s;
    List<string> l;
    for(int i=0; i<n; i++) {
        cin>>s;
        l.upis(s);
    }
    l.ispis();
    return 0;
}