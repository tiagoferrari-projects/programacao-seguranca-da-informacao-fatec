#include<iostream>
#include<locale.h>
using namespace std;

float precoInicial, precoFinal;
int origemProduto;

int main (){
	setlocale(LC_ALL,"portuguese");
	
	cout<<"Informe preço produto R$ ";
	cin>>precoInicial;

	cout<<" Digite [1]para produto Nacional ou [2]Importado \n";
	cin>>origemProduto;
	
	if(origemProduto == 1)
		precoFinal = precoInicial + (precoInicial * 0.05);
	
	else
		precoFinal = precoInicial + (precoInicial * 0.1);
		
	cout<<"Preço Final R$ "<<precoFinal;

}
