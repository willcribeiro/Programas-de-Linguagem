#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
   float raio; //raio dado pelo usuario//
    float peri,area,volume; //variaveis do programa//

    cout<<"Digite o valor referente ao raio"<<endl;
    cin>>raio;

    peri = 2*M_PI*raio; //Calculo do perimetro do circulo//

    area = M_PI*pow(raio,2); //Calculo da área do circulo//

    volume= (4.0/3)*M_PI*pow(raio,3); //Calculo do volume do circulo//

    cout<<"O Perimetro do circulo é "<<peri<<endl;  //exibição dos resultados dos cálculo//
    cout<<"A área  do circulo é "<<area<<endl;
    cout<<"O Volume do circulo é "<<volume<<endl;


}


