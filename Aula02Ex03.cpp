#include<iostream>
#include<locale.h>
using namespace std;

float conta, carlos, andre, felipe;

int main(){
	setlocale(LC_ALL,"portuguese");
	
	cout<<"Valor da conta R$ ";
	cin>>conta;
	
	carlos = 0.25 * conta;
	andre = 0.35 * conta;
	felipe = 0.40 * conta;
	
	cout<<"\n Carlos ir� pagar R$ "<<carlos;
	cout<<"\n Andr� ir� pagar R$ "<<andre;
	cout<<"\n Felipe ir� pagar R$ "<<felipe;
}
