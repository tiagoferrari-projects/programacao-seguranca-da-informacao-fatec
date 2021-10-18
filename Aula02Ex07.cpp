#include<iostream>
#include<locale.h>
using namespace std;

float volume, raio, altura;

int main(){
	setlocale(LC_ALL,"portuguese");
	
	cout<<"Raio do cilindro: ";
	cin>>raio;
	
	cout<<"Altura do cilindro ";
	cin>>altura;
	
	volume = 3.14 * raio * raio * altura;
	
	cout<<"\nVOLUME DO CILINDRO "<<volume<<" m³";
	
}
