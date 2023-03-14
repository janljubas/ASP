// 13. zadatak

#include <iostream>
using namespace std;

class Vozilo {
    private:
        string model;
        int godina;
    
    public:
        Vozilo() {}
        Vozilo(string model, int godina) {
            this->model = model;
            this->godina = godina;
        }

        void setModel(string model) {
            this->model = model;
        }
        string getModel() {
            return this->model;
        }

        void setDob(int godina) {
            this->godina = godina;
        }
        int getDob() {
            return this->godina;
        }

        bool operator<(const Vozilo &v) {
            if(this->model < v.model)   return true;
            if(this->model > v.model)   return this->godina > v.godina;
            return false;
        }
};

void zamijeni(Vozilo &prvi, Vozilo &drugi) {
    Vozilo pomocna;
    pomocna = prvi;
    prvi = drugi;
    drugi = pomocna;
}

template <typename T> void SelectionSort(T A[], int n) {
    for(int i = 0; i < n; i++) {
        int min = i;
        for (int j = i + 1; j < n; j++) {
            if (A[j] < A[min])  min = j;
        }
    }
}

int main(void) {
    int n;
    cout << "upisite n: ";
    cin >> n;
    
    string model;
    int godina;
    Vozilo *A = new Vozilo[n]; // lista vozila
    
    for(int i = 0; i < n; i++) {
        cout << "Upisite model: ";
        cin >> model;
        cout << "Upisite godinu: ";
        cin >> godina;

        Vozilo v = Vozilo(model, godina);
        A[i] = v;
    }

    SelectionSort(A, n);
    
    for (int i = 0; i < n; i++) {
        cout << A[i].getModel() << ", " << A[i].getDob() << endl;
    }
    
    return 0;
}