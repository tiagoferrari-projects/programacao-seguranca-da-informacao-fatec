#include <iostream>
#include <locale.h>
using namespace std;

// declarar vari�veis
float lado1,lado2,area,valorM2,valorTerreno;

int main (){
	setlocale(LC_ALL,"portuguese");
	
	// ler lados do terreno
	cout<<"Lado1 = ";
	cin>>lado1;
	
	cout<<"Lado2 = ";
	cin>>lado2;
	
	cout<<"Valor do m� = ";
	cin>>valorM2;
	
	// c�lcula �rea do terreno
	
	area = lado1 * lado2;
	
	cout<< "�rea do terreno = "<<area<<"m�";
	
	valorTerreno = area * valorM2;
	
	cout<<endl<<"Valor do Terreno R$ "<<valorTerreno;
}
