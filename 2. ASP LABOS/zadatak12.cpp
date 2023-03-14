// 12. zadatak

#include <iostream>

using namespace std;

class Osoba {
    private:
        string ime;
        unsigned short int dob;
    
    public:
        Osoba() { }
    
    Osoba(string ime, unsigned short int dob) {
        this->ime = ime;
        this->dob = dob;
    }

    void setIme(string Ime) {
        this->ime = ime;
        return;
    }
    string getIme() {
        return this->ime;
    }

    void setDob(int dob) {
        this->dob = dob;
        return;
    }
    unsigned short int getDob() {
        return this->dob;
    }

    bool operator<(const Osoba &o) {
        if(this->dob < o.dob)   return true;
        if(this->dob > o.dob)   return this->ime < o.ime;
        return false;
    }
};

template <typename T> void InsertionSort(T A[], int n) {
    int i, j;
    T tmp;
    for(i = 1; i < n; i++) {
        tmp = A[i];
        for (j = i; j >= 1 && tmp < A[j-1]; j--)    A[j] = A[j-1];
        A[j] = tmp;
    }
    return;
}


int main(void) {
    int n;
    cout << "Upisite n: ";
    cin >> n;

    string ime;
    unsigned short int dob;

    Osoba *A = new Osoba[n];

    for(int i = 0; i < n; i++) {
        cout << "Upisite podatke: ";
        cin >> ime;
        cin >> dob;
        Osoba o = Osoba(ime, dob);
        A[i] = o;
    }
    InsertionSort(A, n);

    for (int i = 0; i < n; i++) {
        cout << A[i].getIme() << ", " << A[i].getDob() << endl;
    }
    return 0;
}