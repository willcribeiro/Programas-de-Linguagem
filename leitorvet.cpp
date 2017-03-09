#include <iostream>

using namespace std;
int main() 
{
 int vet[10],j,k;
 
 for(int i=0; i<10 ; i++){
	 cin>>vet[i]; 
	 
 }
 
 cout<<"digite qual número queria saber se está no vetor"<<endl;
 cin>>j;
 
for(int i=0; i<10;i++){
	if(j==vet[i]){
		cout<<"ele está aqui"<<endl;
		k++;
	}
	
}
if (k==0){
	cout<<"ele n está aqui"<<endl;
	}


}
