#include <iostream>

using namespace std;

void ispis(float polje[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        if (polje[i] < 0) {
            cout << polje[i] << endl;
            break;
        }
    }
    if (i < n) {
        ispis(polje + (i + 1), n - (i + 1));
    }
}

int main(void) {
    int n;
    do {
        cout << "Upisi velicinu polja: ";
        cin >> n;
        // if (n <= 0) {
        //     cout << "Veličina polja mora biti veća od 0!" << endl;
        // }
    } while (n <= 0);

    float *A = new float[n];
    for (int i = 0; i < n; i++) {
        cout << "Upisi vrijednost " << i << ". elementa: ";
        cin >> A[i];
    }

    // cout << "Ispis polja:" << endl;
    // cout << "[";
    // for (int i = 0; i < n - 1; i++) {
    //     cout << A[i] << ", ";
    // }
    // cout << A[n - 1] << "]" << endl;

    ispis(A, n);

    delete[] A;

    return 0;
}
