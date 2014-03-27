#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;
#include "Zaklad.h"
#include "Zaklad2.h"
#include "Mierniki.h"
#include "Dozaklad.h"



int main()
{
    const int a=55;
    const int b=65;
    Mierniki x;
    Zaklad z1;
    Zaklad2 z2;
    Dozaklad y;

    //Zaklad 1
    //-------------------------------------
    y.wypis(a,z1.czas);
    cout<<"Srednia artmetyczna wynosi: "
        <<x.srednia(a,z1.czas)<<"\n";
    cout<<"Srednia harmoniczna: "
        <<x.sredniah(a,z1.czas)<<"\n";
    cout<<"Srednia geometryczna wynosi: "
        <<x.sredniag(a,z1.czas)<<"\n";
    cout<<"Wariancja wynosi: "
        <<x.wariancja(a,z1.czas)<<"\n";
    cout<<"Modalna wynosi: "
        <<x.modalna(a, z1.czas)<<"\n";
    cout<<"Mediana wunosi: "
        <<x.mediana(a, z1.czas)<<"\n";
    cout<<"Odchylenie standardowe wynosi: "
        <<x.odchyleniestd(a,z1.czas)<<"\n";
    cout<<"Odchylenie od sredniej wynosi: "
        <<x.odchylenieodsr(a,z1.czas)<<"\n";
    cout<<"Maksimum wynosi: "
        <<x.maks(a,z1.czas)<<"\n";
    cout<<"Minimum wynosi: "
        <<x.min(a,z1.czas)<<"\n";
    y.zliczanie(a,z1.czas);

    system("pause");
    //Zaklad 2
    //-------------------------------------

    y.wypis(b,z2.czas);
    cout<<"Srednia artmetyczna wynosi: "
        <<x.srednia(b,z2.czas)<<"\n";
    cout<<"Srednia harmoniczna: "
        <<x.sredniah(b,z2.czas)<<"\n";
    cout<<"Srednia geometryczna wynosi: "
        <<x.sredniag(b,z2.czas)<<"\n";
    cout<<"Wariancja wynosi: "
        <<x.wariancja(b,z2.czas)<<"\n";
    cout<<"Modalna wynosi: "
        <<x.modalna(b, z2.czas)<<"\n";
    cout<<"Mediana wunosi: "
        <<x.mediana(b, z2.czas)<<"\n";
    cout<<"Odchylenie standardowe wynosi: "
        <<x.odchyleniestd(b,z2.czas)<<"\n";
    cout<<"Odchylenie od sredniej wynosi: "
        <<x.odchylenieodsr(b,z2.czas)<<"\n";
    cout<<"Maksimum wynosi: "
        <<x.maks(b,z2.czas)<<"\n";
    cout<<"Minimum wynosi: "
        <<x.min(b,z2.czas)<<"\n";
    y.zliczanie(b,z2.czas);

    return 0;
}
