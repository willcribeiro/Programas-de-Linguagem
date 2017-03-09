#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
    int ValMinu, //
    minutos,horas, dias;

    cout<<"Digite o valor em minutos"<<endl;
    cin>>ValMinu;

    dias = ValMinu/1440;
    minutos =ValMinu%1440;

    horas = minutos/60;
    minutos = minutos%60;

    minutos = ValMinu%60;

    cout<<dias<<endl;
    cout<<horas<<endl;
    cout<<minutos<<endl;


    return 0;

}




