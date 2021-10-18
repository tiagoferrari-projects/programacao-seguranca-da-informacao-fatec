#include<iostream>
#include<locale.h>
using namespace std;

float valor,kw,valorFinal;

int main(){
	setlocale(LC_ALL,"portuguese");
	
	cout<<"Informe quantidade de kW consumidos: ";
	cin>>kw;
	
	valor = kw * 0.30;
	valorFinal = valor + (valor * 0.10);
	
	cout<<"Valor R$"<<valor;
	cout<<"\nValor total + Bandeira Vermelha R$"<<valorFinal;
		
}
