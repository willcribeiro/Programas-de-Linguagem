//Programa que calcula MMC e MDC
#include <iostream>

using namespace std;


int MDC(int x,int y) //Função que ira calcular o MDC dos valores
{
    int z=1;
    for(int i=1; i<x && i<y; i++) //COntador para calcular o MDC
    {

        if (x%i==0 && y%i==0)  //Condicao para MDC
        {
            z=i;
        }

    }
    return z;
}

int MMC (int x, int y)
{
    int MDC(int x, int y); //Retornando o MMC já calculado
    int k; //Variavel que ira receber o valor do MMC
    k=(x*y)/MDC(x,y); //Operacao que ira calcular o MMC entre os dois valores
    return k;
}

int main ()
{
    int valor1,valor2;

    cout<<"Entre com os dois valores"<<endl;
    cin>>valor1;
    cin>>valor2;

    cout<<"O MDC é "<<MDC(valor1,valor2)<<endl;   //Chamando a funcao MDC
    cout<<"O MMC é "<<MMC(valor1,valor2)<<endl;     //Chamando a funcao MMC




}
