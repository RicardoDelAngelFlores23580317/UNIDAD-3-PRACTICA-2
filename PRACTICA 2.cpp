#include  <iostream>
using namespace std;

int main()
{
	float f_num,total=0.0;
	do{
		cout<< "Introduce un numero: ";
		cin>> f_num;
		total += f_num;
	}
	while (f_num !=0.0);
	cout<< "Total: " << total;
	
	return 0;
}
