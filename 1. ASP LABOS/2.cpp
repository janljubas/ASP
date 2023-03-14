#include <iostream>
using namespace std;
#include<cmath>
#include<ctime>

int zbrojiKvadrate (int polje[], int n){
    
    if (n > 0){
 
        if ((int)sqrt(polje[n-1])*sqrt(polje[n-1])==polje[n-1]){
            return zbrojiKvadrate(polje,n-1) + polje[n-1];
        }else{   
            return zbrojiKvadrate(polje,n-1);
                
        }
    }else{
        return 0;
    }
        

}

int main(){
    int n;
    do{
        cout << "Upisite zeljenu velicinu polja: " << endl;
        cin >> n;
        if (n <=0){
            cout << "Velicina polja mora biti veca od 0." << endl;
        }
    }while(n <= 0);
    int *A = new int[n];
    srand(time(NULL));
    int max = 10;
    int min = 1;
    for (int i = 0; i < n; i++){
        A[i] = rand()%max + min;
    }
    cout << "Polje: "<< endl;
    cout << "[";
    for (int i = 0; i < n-1; i++){
        cout << A[i] << ", ";
    }
    cout << A[n-1] << "]" << endl;
    cout << "Zbroj kvadrata prirodnih brojeva: " << zbrojiKvadrate(A,n) << endl;
    delete[] A;
    return 0;

    


}