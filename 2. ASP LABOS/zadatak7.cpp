// #7.Zadatak

#include <iostream>
using namespace std;
template <class T> class Queue {
private:
    template <class Double> struct Cvor {
        Double data;
        Cvor<Double> *next;
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
    bool skini(double &data) {
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
   
};
int main(void) {
   Queue<double> q;
   int n;
   cin>>n;
   double m;
   for(int i=0; i<n; i++) {
       cin>>m;
       q.dodaj(m);
   }
   while(q.skini(m)) {
       cout<<m<<" ";
   }
   return 0;
}