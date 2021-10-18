#include <iostream>
#include <locale.h>
using namespace std;

float numeroDias,valorPintor,valorAuxiliar, total;

int main (){
	setlocale(LC_ALL,"portuguese");
	
	cout<<"Número de dias Trabalhados: ";
	cin>>numeroDias;
	
	valorPintor = numeroDias * 100.00;
	valorAuxiliar = numeroDias * 70.00;
	
	cout<<endl<<"Pagamento do Pintor R$ "<<valorPintor;
	cout<<"\nPagamento do Auxiliar R$ "<<valorAuxiliar;
	
	total = valorPintor + valorAuxiliar;
	cout<<"\nTotal a pagar R$ "<<total;
	
}
