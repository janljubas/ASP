#include <iostream>
#include <cmath>
#include <ctime>

using namespace std;

int *randomSquares(int polje[], int n)
{
    int *randomSquaredArray = new int[n];
    bool usedIndexes[n] = {};
    for (int i = 0; i < n; i++)
    {
        int index;
        do
        {
            index = rand() % n;
        } while (usedIndexes[index]);

        randomSquaredArray[i] = pow(polje[index], 2);
        usedIndexes[index] = true;
    }

    return randomSquaredArray;
}

int main(void)
{
    srand(time(NULL));

    int n;
    cout << "Upišite željenu veličinu polja: ";
    cin >> n;

    int *polje = new int[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Upišite vrijednost " << i << ". elementa: ";
        cin >> polje[i];
    }

    cout << "Ispis polja:" << endl;
    cout << "[";
    for (int i = 0; i < n; i++)
    {
        if (i == (n - 1))
        {
            cout << polje[i] << "]" << endl;
        }
        else
        {
            cout << polje[i] << ", ";
        }
    }

    int *randomSquaredArray = randomSquares(polje, n);
    cout << "Nasumično kvadrirano polje:";
    cout << "[";
    for (int i = 0; i < n; i++)
    {
        if (i == (n - 1))
        {
            cout << randomSquaredArray[i] << "]" << endl;
        }
        else
        {
            cout << randomSquaredArray[i] << ", ";
        }
    }

    delete[] polje;
    delete[] randomSquaredArray;

    return 0;
}