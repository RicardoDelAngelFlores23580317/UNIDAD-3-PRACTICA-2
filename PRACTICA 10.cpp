#include <iostream>
#include <iomanip>
 using namespace std; 
 
 int main()
 {
 	float num,cuadrado,cubo,zeta; 
 	
 	//Resolveremos los valores de la ecuacion 
 	
 	cout<< "Se calculan los valores de la ecuacion z=x^2 +x^3 "  <<endl; 
 	
 	for(int x=1; x<=5; x++)
 	{ 
 	cuadrado= x*x;
 	cubo= x*x*x; 
 	zeta=cuadrado+cubo; 
 	
 	cout<< x <<"  "<< cuadrado<<" "<< cubo<<" "<<zeta<< "\n";    
 	
	 }
	 return 0; 
 }
