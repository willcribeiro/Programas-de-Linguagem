//Programa para calcular a somatoria dos elemtos do vetor

#include <iostream>
using namespace std;


int main ()
{
    int n,vetor[n]; //Vetor do tamanho definido pelo usuario
    int soma=0;

    cout<<"Entre com o tamanho do vetor"<<endl;
    cin>>n;

    if(n<=30)  //Condicao de existencia do vetor
    {
        for(int i=0; i<n; i++)   //Alocamento dos numeros em suas posicoes do vetor
        {
            cout<<"Entre com o "<<i<<" valor"<<endl;
            cin>>vetor[i];

        }

        for(int i=0; i<n;i++)  //Funcao responsavel pelo calculo da soma de suas posicoes
        {
        soma = soma+vetor[i];
        }
    }
    else
    cout<<"Tamanho superior ao permitido"<<endl;

    cout<<"A somatoria dos componentes dfo vetor será "<<soma<<endl;


}
