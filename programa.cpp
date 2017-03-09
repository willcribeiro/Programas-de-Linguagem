// Checar se um numero esta presente no vetor
#include <iostream>
using namespace std;


bool teste( int vetor[], int x,int numero)  //Funcao que localiza se o numero está presente no vetor
{
    bool b=false;  //Flag responsavel  pelo resultado

    for(int i=0; i<x; i++)  //ira rodar o vetor para o teste do numero
    {
        if(numero==vetor[i])
            b= true;
    }

    return b;
}
void vetor(int x[],int y)   // Ler os componentes do vetores
{

    for(int i=0; i<y; i++)
    {
        cin>>x[i];
    }
}

int main()
{
    int n,m;
    cout<<"Entre com o tamanho dos vetores"<<endl;
    cin>>n;
    cout<<"Entre os componentes dos vetores"<<endl;
    int v[n];
    vetor(v,n);
    cout<<"Entre com o valor"<<endl;
    cin>>m;

    cout<<"Sumario : 1 = Verdadeiro , 2 = Falso "<<endl;
    cout<<teste(v,n,m)<<endl;



}
