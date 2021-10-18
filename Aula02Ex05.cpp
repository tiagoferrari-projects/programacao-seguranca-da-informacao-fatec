#include<iostream>
#include<locale.h>
using namespace std;

float precoFinal,precoFabrica,comissaoRevenda,valorImpostos;

int main(){
	setlocale(LC_ALL,"portuguese");
	
	cout<<"Informe o preço de fábrica do Automóvel: ";
	cin>>precoFabrica;
	
	valorImpostos = precoFabrica * 0.45;
	comissaoRevenda = precoFabrica * 0.28;
	precoFinal = precoFabrica + comissaoRevenda + valorImpostos;
	
	cout<<"\nValor dos Impostos R$ "<<valorImpostos;
	cout<<"\nComissão para revenda R$ "<<comissaoRevenda;	
	cout<<"\n\nPREÇO FINAL R$ "<<precoFinal;
	
}
