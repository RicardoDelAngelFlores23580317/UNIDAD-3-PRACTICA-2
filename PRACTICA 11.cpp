#include <iostream>
#include <iomanip>
 using namespace std; 
 
 int main()
 {
 	float x,cuadrado,zeta; 
 	
 	//Resolveremos los valores de la ecuacion 
 	
 	cout<< "Se calculan los valores de la ecuacion z=x/(1+x^2) "  <<endl; 
 	
 	for(int x=1; x<=10; x++)
 	{ 
 	cuadrado= x*x; 
 	zeta= (x/(1+cuadrado));  
 	
 	cout<< x <<"  "<< cuadrado<<" "<<zeta<< "\n";    
 	
	 }
	 return 0; 
 }
