// #9.Zadatak

#include <iostream>
#include <string.h>
using namespace std;

struct Zapis {
    int p;
    string m;
};

//sortiranje prema poštanskom broju

void insertionSort(Zapis A[], int n, char smjer) {
    if(smjer==false) {
        int i, j;
        Zapis pom;
        for(i=1; i<n; i++) {
            pom=A[i];
            for(j=i; j>=1 && A[j-1].p>pom.p; j--) {
                A[j]=A[j-1];
                
            }
            A[j]=pom;
            
        }
    }
    else {
        int i, j;
        Zapis pom;
        for(i=1; i<n; i++) {
            pom=A[i];
            
            for(j=i; j>=1 && A[j-1].p<pom.p; j--) {
                A[j]=A[j-1];
                
            }
            A[j]=pom;
           
        }
    }
   
}


int main() {
    int n;
    cin>>n;
    Zapis A[n];
    string m;
    int p;
    for(int i=0; i<n; i++) {
        cin>>p;
        cin>>m;
        A[i].p=p;
        A[i].m=m;
    }

    insertionSort(A, n, 0);
    
    for(int i=0; i<n; i++) {
        cout<<A[i].p<<" "<<A[i].m<<endl;
    }

    return 0;
}