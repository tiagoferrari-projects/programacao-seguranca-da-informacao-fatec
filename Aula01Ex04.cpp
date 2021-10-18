#include<iostream>
#include<locale.h>
using namespace std;

float preco,litros,valor;

int main(){
	setlocale(LC_ALL,"portuguese");
	
	//valor do litro do combustível
	cout<<"Valor do Litro em R$";
	cin>>preco;
	
	// quantidade abastecida
	cout<<"Quantidade abastecida: ";
	cin>>litros;
	
	valor = preco * litros;
	
	cout<<"TOTAL A PAGAR R$"<<valor;	
	
}
