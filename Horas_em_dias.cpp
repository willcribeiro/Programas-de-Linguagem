#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
    int horas , //Quantidade de horas informada pelo usuario//
    dias;
    float ValHor; //onde será calculada as horas que sobraram

    cout<<"Entre com a quantidade de horas"<<endl;
    cin>>horas;

    dias = horas/24;   //Calculo dos dias
    ValHor =horas%24;   //Calculo do resto das  horas

    cout<<dias<<" Dias "<<endl;
    cout<<ValHor<< " Horas "<<endl;


    return 0;

}



