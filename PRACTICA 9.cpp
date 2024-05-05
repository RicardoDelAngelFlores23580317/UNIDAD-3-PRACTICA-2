#include <iostream>
using namespace std; 
int main() 
{
	float num; 
	float factorial=1;  
	//Se pide el numero factorial a calcular
	cout<< "Por favor ingrese numero a calcular: "; 
	
	//Se le asigna valor a num
	cin>> num; 
	
	for(
	int i =1; i<=num; i++
	) {
		factorial *=i; 
	}
	
	cout<< "El facorial de "  <<num<<   " es "  <<factorial<< "\n"; 
	return 0; 

}
