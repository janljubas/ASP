#include <iostream>
#include <string.h>

using namespace std;

char *ostaviSlova(string ulaz)
{
    int charCount = 0;
    for (char& c : ulaz)
    {
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        {
            charCount++;
        }
    }

    char* noviNiz = new char[charCount+1];
    int i = 0;
    for(char& c : ulaz)
    {
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        {
            noviNiz[i] = c;
            i++;
        }
    }
    noviNiz[i] = '\0';

    return noviNiz;
}

int main(void)
{
    string ulaz = "asp12_i_ASP13";
    char* niz = ostaviSlova(ulaz);
    for(int i = 0; i < strlen(niz); i++)
    {
        cout << niz[i];
    }

    delete[] niz;

    return 0;
}