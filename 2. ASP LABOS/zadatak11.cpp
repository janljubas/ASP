// #11.Zadatak

#include <iostream>
#include <string.h>
using namespace std;

struct Zapis {
    int sifra;
    string jelo;
};

void obicanBubbleSort(Zapis A[], int n, char smjer) {
    if(smjer==false) {
        int i, j;
        for(i=0; i<n-1; i++) {
            for(j=0; j<n-1-i; j++) {
                if(A[j+1].sifra<A[j].sifra) {
                    swap(A[j], A[j+1]);
                }
            }
        }
    }
    else {
        int i, j;
        for(i=0; i<n-1; i++) {
            for(j=0; j<n-1-i; j++) {
                if(A[j+1].sifra>A[j].sifra) {
                    swap(A[j], A[j+1]);
                }
            }
        }
    }
}

int main() {
    int n;
    cin>>n;
    Zapis A[n];
    int s;
    string j;
    for(int i=0; i<n; i++) {
        cin>>s;
        cin>>j;
        A[i].sifra=s;
        A[i].jelo=j;
    }
    obicanBubbleSort(A, n, 0);
    for(int i=0; i<n; i++) {
        cout<<A[i].sifra<<" "<<A[i].jelo<<endl;   
    }
    return 0;
}
