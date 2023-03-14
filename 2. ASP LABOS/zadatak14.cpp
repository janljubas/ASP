// 14. zadatak
#include <iostream>
#include <string.h>

using namespace std;
void Zamijeni(string &a, string &b) {
    string pom;
    pom=b;
    b=a;
    a=pom;
}
void BubbleSortPoboljsani(string A[], int n, int smjer) {
    if(smjer==0) {
        int i, j;
        bool sorted=1;
        for(i=0; sorted==1; i++) {
            sorted=0;
            for(j=0; j<n-1; j++) {
                string s1=A[j+1];
                string s2=A[j];
                if(s1[0]<s2[0]) {
                    Zamijeni(A[j], A[j+1]);
                    sorted=1;
                }
            }
        }
    }
        else {
            int i, j;
            bool sorted=1;
            for(i=0; sorted==1; i++) {
                sorted=0;
                for(j=0; j<n-1; j++) {
                    string s1=A[j+1];
                    string s2=A[j];
                    if(s1[0]>s2[0]) {
                        Zamijeni(A[j], A[j+1]);
                        sorted=1;
                    }
                }
            }
        }
    
}
int main() {
    string A[]={"Ivo", "Juraj", "Marko", "Pero", "Ana"};
    BubbleSortPoboljsani(A, 5, 0);
    for(int i=0; i<5; i++) {
        cout<<A[i]<<endl;
    }
    return 0;
}