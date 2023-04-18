#include <iostream>
using namespace std;
class Factorial{
public:
	int n;
public:
	int factorial(int n){
		int factorial = 1;
		for(int i = 1; i <= n; i++){
			factorial = factorial * i;
		}
		return factorial;
	}
};
int main()
{
	int fac;
	Factorial p1;
	cout<<"Ingrese el numero del cual desea calcular su Factorial"<<endl;
	cin>>p1.n;
	fac = p1.factorial(p1.n);
	cout<<"El Factorial de "<<p1.n<<" es: "<<fac<<endl;
	return 0;
}
