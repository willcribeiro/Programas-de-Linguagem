#include <iostream>
using namespace std;
int main (){
 int divisor,dividendo,edson=0;
 
  cout<<"Digite o dividendo ";
 cin>>dividendo;
 cout<<"Digite o divisor ";
 cin>>divisor;


while (dividendo>=divisor){

dividendo = dividendo-divisor;
edson++;

	
}

cout<<"o resto é "<<dividendo<<endl;
cout<<"O quociente é " <<edson<<endl;
}
