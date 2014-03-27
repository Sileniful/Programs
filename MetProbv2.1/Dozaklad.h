#ifndef DOZAKLAD_H
#define DOZAKLAD_H

class Dozaklad
{

    float suma,war,sr;
    double iloczyn;
    const int a=55;
    const int b=65;
    int d;
    public:
    enum Sumowanie
     {
      s15,
      s25,
      s35,
      s45,
      s55,
      s65
     };

    void wypis(int ile, float *czas)                         //wypisywanie danych o zakladach
     {
             switch(ile)                                   //wybieranie nazwy zakladu
             {
             case 55:{
                         cout<<"Zaklad 1\n";
                         break;
                     }
             case 65:{
                         cout<<"Zaklad 2\n";
                         break;
                     };
             }
        for (int i=0; i < ile; ++i)                          //wypisywanie zakladu
         {
             if (i%5!=0)
                 cout<<czas[i]<<"   ";
             else
                 {
                     cout<<"\n";
                     cout<<czas[i]<<"   ";
                 }
         }
        cout<<"\n"
            <<"\n";
     }
       int szukanie(int ile, float *czas,int szukana)
            {
                int wynik = 0;
                for(int i = 0;i <= ile - 1; i++)
                    if (czas[i] <= szukana)
                        wynik++;
                return wynik;
            }
       void zliczanie(int ile, float *czas)                     //zlicznie elementów
     {
        cout<<"Element"<<15<<"<=: "<<szukanie(ile,czas,15)<<endl;
        cout<<"Element"<<25<<"<=: "<<szukanie(ile,czas,25)-szukanie(ile,czas,15)<<endl;
        cout<<"Element"<<35<<"<=: "<<szukanie(ile,czas,35)-szukanie(ile,czas,25)<<endl;
        cout<<"Element"<<45<<"<=: "<<szukanie(ile,czas,45)-szukanie(ile,czas,35)<<endl;
        cout<<"Element"<<55<<"<=: "<<szukanie(ile,czas,55)-szukanie(ile,czas,45)<<endl;
        cout<<"Element"<<65<<"<=: "<<szukanie(ile,czas,65)-szukanie(ile,czas,55)<<endl;
        cout<<"Lacznie elementow: "<<szukanie(ile,czas,65)<<endl;
     }
};

#endif // DOZAKLAD_H
