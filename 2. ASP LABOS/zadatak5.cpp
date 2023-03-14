// #5.Zadatak
#include <iostream>
#include <cstdlib>

using namespace std;
template <class T> class Stack {
private:
    static const int MAX=10;
    T stack[MAX];
    int top=-1;
public:
    bool push(T item) {
        if(top>=MAX) {
            return false;
        }
        stack[++top]=item;
        return true;
    }

    bool pop(T &item) {
        if(top<0) {
            return false;
        }
        item=stack[top--];
        return true;
    }

};

int main() {
    Stack<int> s;
    int broj;
    srand(time(NULL));
    for(int i=0; i<10; i++) {
        broj=rand()%11;
        s.push(broj);
    }
    
    Stack<int> pom;
    while(s.pop(broj)) pom.push(broj);

    while(pom.pop(broj))    cout<<broj<<endl; // pomocni stog

    return 0;
}