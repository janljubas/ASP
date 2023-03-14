#include <iostream>
#include <cmath>

using namespace std; 

double f (double z, int k)
{
    if(k < 0)
        return 0;

    if(k == 0)
        return z;
    
    return (-1 * pow(z, 2) * f(z, k - 1)) / (((2 * k) + 1) * (2 * k));
}

int main(void)
{
    double z = 0.5;
    while(true) {
        int k;
        cout << "Upišite željenu vrijednost za k ili broj 42069 za prekid rada programa: ";
        cin >> k;
        
        if(k == 42069)
        {
            break;
        }

        if(k < 0)
        {
            cout << "Molim upišite broj >= 0!";
            continue;
        }

        cout << "f = " << f(z, k) << endl; 
    }
    
    return 0;
}