#include <iostream>
#include <cmath>

using namespace std; 

void f (int polje[], int n, int m)
{
    if(n == 0)
    {
        return;
    }

    polje[n - 1] = pow(m, (n - 1));
    f(polje, n - 1, m);
}

int main(void)
{
    int n;
    cout << "Upišite željenu veličinu polja: ";
    cin >> n;

    int m;
    cout << "Upišite željenu vrijednost za m: ";
    cin >> m;

    int* polje = new int[n];
    f(polje, n, m);
    
    cout << "Ispis polja: " << endl;
    cout << "[";
    for(int i = 0; i < n; i++)
    {
        if(i == (n - 1))
        {
            cout << polje[i] << "]" << endl;
        }
        else
        {
            cout << polje[i] << ", ";
        }
    }

    delete[] polje;

    return 0;
}