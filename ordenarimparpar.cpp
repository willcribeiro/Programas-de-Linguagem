//Programa para ordenar em ordem par e impar
#include <iostream>

using namespace std;
void ordenaPar(int v[],int t, int aj)  //Algoritomo de ordenacao
{

    for(int i=0; i<t; i+=2)  //Ordenar os pares
    {
        for(int j=i+2; j<t; j+=2)
        {
            if(v[i]<v[j])
            {
                aj=v[i];
                v[i]=v[j];
                v[j]=aj;
            }

        }

    }

    for(int i=1; i<t; i+=2)  //Ordenar os impares
    {
        for(int j=i+2; j<t; j+=2)
        {
            if(v[i]>v[j])
            {
                aj=v[i];
                v[i]=v[j];
                v[j]=aj;
            }

        }

    }

}



int main()
{
    int tamanho//Tamanho do vetor
    int aux=0; //Variavel auxiliar
    cout<<"Entre com o tamanho dos vetores"<<endl;
    cin>>tamanho;

    int vetor[tamanho];

    cout<<"Entre com os elementos do vetor"<<endl;

    for(int i=0; i<tamanho; i++)  //Algoritimo de leitura dos elementos do vetor
    {
        cin>>vetor[i];
    }

    ordenaPar(vetor,tamanho,aux);

    for (int i=0; i<tamanho; i++)  //Impressao dos elementos dos vetores
    {
        cout<<vetor[i]<<" ";
    }

    return 0;

}
