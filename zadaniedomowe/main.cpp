#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;
int ile;
float m;

float *intoTab(int ile)
{
    float* tab;
    tab = new float[ile];
    for (int i = 0; i < ile; i++)
    {
        cout << "Podaj " << i + 1 << " liczbe: ";
        cin >> tab[i];
    }
    return tab;
}

float srednia(float *tab)
{
    float suma=0;
    for(int i=0;i<ile;i++)
    {
        suma+=tab[i];
    }
    return suma/ile;
}
void comp(float m, float *tab)
{
    float l=abs(m-tab[0]);
    float fam[ile];
    for(int n=0;n<=ile;n++)
    {
        fam[n]=abs(m-tab[n]);
        if(l>=fam[n]) l=fam[n];
    }
    for(int n=0;n<=ile;n++)
    {
        if (fam[n] == l)
        {
            cout <<"Najblizej sredniej jest: "<< tab[n]<<endl;
        }
    }
}

int main()
{
    float* x;
    cout << "Ile liczb: ";
    cin >> ile;
    x=intoTab(ile);
    m=srednia(x);
    cout<<endl<<"Srednia: "<<m<<endl;
    comp(m,x);
    return 0;
}
