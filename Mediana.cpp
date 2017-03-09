/*/
    Calcular a mediana de um vetor

/*/

#include <iostream>
using namespace std;

void ordenar(int v[],int t,int aj)  //Algorito mara ordenar os elementos do vetor
{
    for(int i=0; i<t; i++)
    {
        for(int j=i; j<t; j++)
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
    int tamanho,aux=0,mediana;
    float resultado;  //Onde sera armazenado o valor da mediana de ordem par
    cout<<"Entre com o tamanho dos vetores"<<endl;
    cin>>tamanho;  //Tamanho do vetor

    int vetor[tamanho];
    cout<<"Entre com os elementos do vetor"<<endl;
    for(int i=0; i<tamanho; i++)  //Algoritimo de leitura dos elementos do vetor
    {
        cin>>vetor[i];
    }
    ordenar(vetor,tamanho,aux);

    /*/for (int i=0; i<tamanho; i++)
    {
        cout<<vetor[i]<<" ";
    }/*/

    if(tamanho%2==0)  //Teste de mediana de ordem PAR
    {
        mediana = (tamanho/2)-1;
        resultado = (vetor[mediana] + vetor[mediana+1])/2.0;  //Calculo da mediana PAR


        cout<<"A mediana é "<<resultado<<endl;
    }

    else  //Teste de mediana de ordem IMPAR
    {
        mediana = (tamanho/2); //Calculo da mediana IMPAR
        cout<<"A mediana é "<<vetor[mediana]<<endl;

    }
    return 0;
}


