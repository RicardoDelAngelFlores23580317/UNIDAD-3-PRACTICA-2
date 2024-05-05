#include <iostream>
using namespace std;
int main()
{
	int n, count=0, limit; 
	cout<< "Introduce un valor numerico para concer su tabla de multiplicar: "; 
	cin>> n; 
	cout<< "Introduce el limite ded la tabla de multiplicar: "; 
	cin>> limit;
	do
	{
		cout<< n << "*" << count << "=" << n*count << endl;
		count++;
	}
	while (count <= limit); 
	return 0;
}
