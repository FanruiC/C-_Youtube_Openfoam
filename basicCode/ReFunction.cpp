#include<iostream>
#include<cmath>
#include<string>
using namespace std;

double Reynolds_calc(double rho, double U, double D, double mu);

int main()
{
	double rho,U,D,mu,Re;
	// caluclate reynold Re
	cout << "input density" << endl;
	cin >> rho;

	cout << "input velocity" << endl;
	cin >> U;
	
	cout << "input characteristic length in m" << endl;
	cin >> D;
	
	cout << "input mu" << endl;
	cin >> mu;
	
	Re = Reynolds_calc(rho,U,D,mu);
	cout << Re << endl;
	return 0;
}

double Reynolds_calc(double rho,double U,double D,double mu)
{
	double Re;
	Re = rho*U*D/mu;
	return Re;
}

