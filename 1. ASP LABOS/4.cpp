#include <iostream>
#include <cmath>
using namespace std;



int fact(int n){
    if (n==0){
        return 1;
    }
    return n*fact(n-1);
}

double exp (double x, int n, int *fakt, double *xpot){
    if (n<0){
        return 0;
    }
    return (*xpot)/(*fakt) + exp(x,n-1,fakt+1,xpot+1);
    
}



int main(){
    int n;
    double x;
    cin >> n;
    cin >> x;
    double *ixpot = new double[n];
    double *A = new double[n];
    int *ifakt = new int[n];
    
    for (int i = 0; i<n; i++){
        ifakt[i] = fact(i);
        ixpot[i] = pow(x,i);
    }

    cout << "[";
    for (int i = 0; i < n-1; i++){
        cout << ifakt[i] << ", ";
    }
    cout << ifakt[n-1] << "]" << endl;

    cout << "[";
    for (int i = 0; i < n-1; i++){
        cout << ixpot[i] << ", ";
    }
    cout << ixpot[n-1] << "]" << endl;

    for (int i = 0; i < n; i++){
        A[i] = exp(x,i,ifakt,ixpot);
    }
    cout << "[";
    for (int i = 0; i < n-1; i++){
        cout << A[i] << ", ";
    }
    cout << A[n-1] << "]" << endl;
    delete[] A;
}