#include <iostream>

using namespace std;

class Zwierze
{
public:

    //atrybuty
    string gatunek;
    string nazwa;
    int wiek;
    //metody
    void dodaj_zwierze()
    {
        cout<<"Podaj gatunek: "<<endl;
        cin >>gatunek;
        cout<<"Podaj nazwe:  "<<endl;
        cin >>nazwa;
        cout<<"Podaj wiek:  "<<endl;
        cin >>wiek;
    }

    void daj_glos()
    {
        if (gatunek=="kot")cout<<nazwa<<"  lat"<<wiek<<" : Miau!"<<endl;
        else if (gatunek=="koza")cout<<nazwa<<"  lat"<<wiek<<" : Bee!"<<endl;
        else cout<<nazwa<<"  lat"<<wiek<<" : To jest inne zwierze"<<endl;
    }



};


int main()
{
    Zwierze z1;
    z1.dodaj_zwierze();
    Zwierze z2;
    z2.dodaj_zwierze();
    z1.daj_glos();
    z2.daj_glos();

    return 0;
}
