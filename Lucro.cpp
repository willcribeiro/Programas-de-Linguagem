#include <iostream>
using namespace std;

int main ()
{
    int a=0,b=0,c=0, tam=3;  //Contadores para saber quantso produtos estao entre determinados valores
    float porcentagem,compra[tam],venda[tam],lucro;

    for(int i=0; i<tam; i++)
    {
        cout<<"entre com o valor de compra"<<endl;
        cin>>compra[i];
        cout<<"Entre com  o valor de venda"<<endl;
        cin>>venda[i];
        lucro = venda[i]-compra[i];  //formula para o calculo do lucro em cima de cada produto
        porcentagem = (lucro/compra[i])*100;  //valor em porcentagem que dirá quantos porcento foi o lucro

         if(porcentagem<10)
        {
            a++; //contador para valores menor que 10
        }

       else if( porcentagem<20)
        {
            b++;  //contador para valores entre 10 e 20
        }
        else
        {
            c++; //contador para valores maior que 20
        }
    }
    cout<<"Existe "<<a<<" produtos com lucro menor que 10"<<endl;
    cout<<"Existe "<<b<<" produtos com lucro entre 10 e 20"<<endl;
    cout<<"Existe "<<c<<" produtos com lucro maior que 20"<<endl;
}
