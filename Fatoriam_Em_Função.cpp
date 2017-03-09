//
#include <iostream>
using namespace std ;
//Funcao que calcula o fatorial de um numero inteiro dado
int fatorial ( int x )
{
    int fat =1;//
    for (int i=1; i<= x; i ++) //contador que ira resultar no fatorial
        fat *= i;
    return fat;
}

int main ()
{
    int numero;//
    cout<<"Entre com um numero inteiro"<<endl;
    cin>>numero;

    cout<<"O fatorial de "<<numero<<" é " <<fatorial (numero)<<endl; //Chama a função que realizara o fatorial
    return 0;
}
