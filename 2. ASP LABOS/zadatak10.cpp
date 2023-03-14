// #10.Zadatak

#include <iostream>
#include <string.h>
using namespace std;

void selection2Sort(int A[], int n, char smjer) {
    if(smjer==false) {
        int i, j, min;
        for(i=0; i<n; i++) {
            min=i;
            for(j=i+1; j<n; j++) {
                if(A[j]<A[min]) {
                    min=j;
                }
            }
            swap(A[i], A[min]);
        }
    }
    else {
        int i, j, min;
        for(i=0; i<n; i++) {
            min=i;
            for(j=i+1; j<n; j++) {
                if(A[j]>A[min]) {
                    min=j;
                }
            }
            swap(A[i], A[min]);
        }
    }
}
int main() {
    int n; 
    cin>>n;
    int A[n];
    for(int i=0; i<n; i++) {
            int broj;
            cin>>broj;
            A[i]=broj;
    }
    selection2Sort(A, n, 0);
    for(int i=0; i<n; i++) {
            cout<<A[i]<<" ";
    }
    return 0;
}