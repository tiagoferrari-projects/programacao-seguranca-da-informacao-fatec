#include<iostream>
#include<locale.h>
using namespace std;

float A, B;

int main (){
	setlocale(LC_ALL,"portuguese");	
	cout<<"A - "; cin>>A;
	cout<<"B - "; cin>>B;
	
	if(A > B)
	cout<<"A � maior que B";
	
	else if (B > A)
	cout<<"B � maior que A";
	
	else
	cout<<"S�o iguais";
}
