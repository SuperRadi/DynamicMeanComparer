#include <iostream>
#include <cstdlib>

using namespace std;
float m,h,l;

float intoTab(){
    int ile;
    float tab[ile];
    cout<<"Ile liczb: ";
    cin>>ile;
     for (int i=0;i<ile;i++)
     {
         cout<<"Podaj "<<i+1<<" liczbe";
         cin>>tab[i];
     }
     return *tab;
}

float srednia(float tab[])
{
    float suma=0;
    int ile;
    ile=sizeof(tab)/sizeof( *tab);
    cout<<"liczb w tablicy:"<<ile<<endl;
    for(int i=0;i>=ile;i++)
    {
        suma+=tab[i];
        tab++;
    }
    cout<<"Suma: "<<suma<<endl;
    return suma/ile;
}

int main()
{

    m=srednia(intoTab());
    cout<<"Srednia: "<<m<<endl;
    return 0;
}
