
#ifndef MIERNIKI_H_INCLUDED
#define MIERNIKI_H_INCLUDED

class Mierniki
{

 public:
 Zaklad z1;
 Zaklad2 z2;
 float suma,war,sr;
 double iloczyn;
 const int a=55;
 const int b=65;
   float srednia(int ile, float *czas);                      //srednia artmetyczna
//******************************************************************************************
   float sredniah(int ile, float *czas);                     //srednia harmoniczna
//******************************************************************************************
   float sredniag(int ile, float *czas);                     //srednia geometryczna
//******************************************************************************************
   float wariancja(int ile,float *czas);                     //wariancja
//******************************************************************************************
   void sortowanie(int ilosc, float *tablica);               //sortowanie do modalnej
//******************************************************************************************
   int modalna(int ile, float *czas);                        //modalna
//******************************************************************************************
   int mediana(int ile, float *czas);                        //mediana
//******************************************************************************************
   float odchyleniestd(int ile, float *czas);                //odchylenie standardowe
//******************************************************************************************
   float odchylenieodsr(int ile, float *czas);               //odchylenie od sredniej
//******************************************************************************************
   int maks(int ile, float *czas);                           //maksimum
//******************************************************************************************
   int min(int ile, float *czas);                            //minimum
};

#endif // MIERNIKI_H_INCLUDED
