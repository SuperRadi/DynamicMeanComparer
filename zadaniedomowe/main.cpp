#include <iostream>

using namespace std;
float a,b,c,d,e,m,x;

float srednia(float *tab)
{
    float suma=0;
    int ile=5;
    //ile=sizeof tab / sizeof *tab;
    cout<<"liczb w tablicy:"<<ile<<endl;
    for(int i=0;i>=ile;i++)
    {
        suma+=*tab;
        tab++;
    }
    cout<<"Suma: "<<suma<<endl;
    return suma/ile;
}

int main()
{
    cout << "Podaj piec liczb po spacji: ";
    cin>>a>>b>>c>>d>>e;
    float tab[]={a,b,c,d,e};
    m=srednia(tab);
    cout<<"Srednia: "<<m<<endl;
    return 0;
}
