#include<iostream>
#include<locale.h>
using namespace std;

float lado,area;

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	//ler dados
	cout<<"Lado (em m) = ";
	cin>>lado;
	
	//calcula a �rea do quadrado
	area = lado * lado;
	
	// mostrar resultado
	cout<<"�rea do quadrado = "<<area<<"m�";
}
