#include<iostream>
#include<locale.h>
using namespace std;

float velocidadeMedia,tempo,distancia;

int main(){
	setlocale(LC_ALL,"portuguese");
	
	cout<<"Dist�ncia entre as cidades em km: ";
	cin>>distancia;
	
	cout<<"Tempo gasto em horas: ";
	cin>>tempo;
	
	velocidadeMedia = distancia / tempo;
	
	cout<<"A velocidade m�dia percorrida � de : "<<velocidadeMedia<<"km/h";
	
}
