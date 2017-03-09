#include <iostream>

using namespace std;
int main() 
{
 int n;
 cout<<"Diga o tamanho dos vetores"<<endl;
 cin>>n;
 int vet[n],v[n] , produto;
 
 
 for(int i=0; i<n ; i++){
	 cout<<"Diga o" <<i+1<<"º elementos do primeiro vetor"<<endl;
	 cin>>vet[i]; 
	 cout<<"Diga o" <<i+1<<"º elementos do segundo vetor"<<endl;
	 cin>>v[i]; 
	 
	 produto = v[i]*vet[i] + produto;
	
}
cout<<"O produto é "<<produto<<endl;
}
