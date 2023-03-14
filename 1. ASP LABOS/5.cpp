#include <iostream>

using namespace std;

template <typename T>
int binarnoTrazi(T polje[], int n, T x)
{
    bool found = false;
    int left = 0;
    int right = n - 1;
    int index = -1;
    while (true) {
        int middle = (left + right) / 2;
        if (polje[middle] == x)
        {
            found = true;
            index = middle;
            break;
        }
        else if (left >= right)
        {
            break;
        }
        else if (polje[middle] < x)
            {
                left = middle + 1;
            }
        else
        {
            right = middle - 1;
        }
    }

    return index;
}

int main(void) {
    int n;
    cout << "Upišite željenu veličinu polja: ";
    cin >> n;

    float x;
    cout << "Upišite realni broj x: ";
    cin >> x;

    float *A = new float[n];
    cout << "Ispis polja:" << endl;
    cout << "[";
    for (int i = 0; i < n; i++)
    {
        A[i] = i * 1.1;
        if (i == (n - 1))
        {
            cout << A[i] << "]" << endl;
        }
        else
        {
            cout << A[i] << ", ";
        }
    }

    int indexOfX = binarnoTrazi(A, n, x);
    if (indexOfX == -1)
    {
        cout << "Broj se ne nalazi u polju." << endl;
    }
    else
    {
        cout << "Index traženog broja x u polju: " << indexOfX << endl;
    }

    delete[] A;

    return 0;
}