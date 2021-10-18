#include <iostream>
#include <locale.h>
using namespace std;

// declarar variáveis
float lado1,lado2,area,valorM2,valorTerreno;

int main (){
	setlocale(LC_ALL,"portuguese");
	
	// ler lados do terreno
	cout<<"Lado1 = ";
	cin>>lado1;
	
	cout<<"Lado2 = ";
	cin>>lado2;
	
	cout<<"Valor do m² = ";
	cin>>valorM2;
	
	// cálcula área do terreno
	
	area = lado1 * lado2;
	
	cout<< "Área do terreno = "<<area<<"m²";
	
	valorTerreno = area * valorM2;
	
	cout<<endl<<"Valor do Terreno R$ "<<valorTerreno;
}
