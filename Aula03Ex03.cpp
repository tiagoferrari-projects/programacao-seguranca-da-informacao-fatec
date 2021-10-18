#include<iostream>
#include<locale.h>
using namespace std;

float consumo, precoFinal;
int tipoEstab;

int main (){
	setlocale(LC_ALL,"portuguese");
	
	cout<<"Consumo em litros no mês "; 
	cin>>consumo;
	
	cout<<"Tipo de Estabelecimento\n [1]Residência [2]Comercial\n";
	cin>>tipoEstab;
	
	if(tipoEstab ==1)
		precoFinal = consumo*0.03;
	
	else
		precoFinal = consumo * 0.05;
	
	cout<<"Total a pagar R$ "<<precoFinal;
}
