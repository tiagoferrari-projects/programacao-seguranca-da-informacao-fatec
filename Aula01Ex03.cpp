#include<iostream>
#include<locale.h>
using namespace std;

float media, nota1,nota2,nota3;
	
int main(){
	setlocale(LC_ALL,"portuguese");
	cout<<"Nota 01: ";
	cin>>nota1;
	cout<<"Nota 02: ";
	cin>>nota2;
	cout<<"Nota 03: ";
	cin>>nota3;
	
	media = (nota1 + nota2 + nota3) / 3.0;
	
	cout<< "Média = "<<media;
	
}

