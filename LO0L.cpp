#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
int main() 
{
srand (time(NULL));

 const int TAM_VETOR = 10;
 int vet[TAM_VETOR], soma=0,j=0,maior=0, menor=11;
 float media=0;
 for(int i=0; i<10;i++){
   vet[i]=  rand()%10;
   soma = soma + vet[i];
    if(vet[i] >=7){
   j++;
  }
	if(vet[i]>maior){
	maior = vet[i];
	}
	if(vet[i]<menor){
	menor = vet[i];
	}

}
media = soma/10;
cout<<"A média das notas é "<<media<<endl;
cout<<"A quantidade de alunos que tiraram acima de 7 é  "<<j<<endl;
cout<<"A maior nota é  "<<maior<<endl;
cout<<"A menor nota é  "<<menor<<endl;


}
