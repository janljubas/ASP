#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double pi(int n) { //sum k=1->n od (-1)^n+1 * 1/(2n-1)
    if (n == 1) return 4;
    return 4 * pow(-1, n + 1) * (1. / (2 * n - 1)) + pi(n - 1);
}

int main(void)
{
    int n;
    do {
        cout << "Upisi zeljenu velicinu polja: ";
        cin >> n;
        // if (n <= 0) {
        //     cout << "Velicina polja mora biti veca od 0!" << endl;
        // }
    } while (n <= 0);

    double *A = new double[n];
    for (int i = 0; i < n; i++) {
        A[i] = pi(i + 1);
    }

    cout << "Ispis polja:" << endl;
    cout << "[";
    cout << fixed;
    cout << setprecision(6);
    for (int i = 0; i < n - 1; i++) {
        cout << A[i] << ", ";
    }
    cout << A[n - 1] << "]" << endl;

    delete[] A;

    return 0;
}