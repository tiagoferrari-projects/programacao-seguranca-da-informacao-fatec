#include<iostream>
#include<locale.h>
using namespace std;

float peso, altura,imc;

int main(){
	setlocale(LC_ALL,"portuguese");
	
	cout<<"CÁLCULO IMC";
	
	cout<<"Informe seu peso em kg: ";
	cin>>peso;
	
	cout<<"Sua altura em metros: ";
	cin>>altura;
	
	imc = peso/(altura * altura);
	
	cout<<"\nVALOR IMC = "<<imc;
	
}
