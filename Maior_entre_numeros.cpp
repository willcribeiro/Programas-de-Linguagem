//calculo do maior entre tres numero

#include <iostream>
using namespace std;

int calcMaior(int x, int y, int z)   //Função que realizará a verificação do maior valor
{
    int maior=x;

    if(y>maior)
    {
        maior=y;
    }

    if(z>maior)
    {
        maior=z;
    }

    return maior;



}


int main()
{
    int numero1,numero2,numero3,maior; //valor dos 3 numeros que ira ver o maior numero

    cout<<"Entre com as 3 numeros inteiros "<<endl;
    cin>>numero1;
    cin>>numero2;
    cin>>numero3;

    maior=calcMaior(numero1,numero2,numero3); //Chama a função que realizará o cálulo do maior

    cout<<maior;

    return 0;
}
