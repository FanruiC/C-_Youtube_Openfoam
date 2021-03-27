#include<iostream>
#include<cmath>
#include<string>
using namespace std;

double vector_length(double x, double y, double z);

int main()
{
	double x, y, z, len;
	
	cout << "input x" << endl;
	cin >> x;

	cout << "y" << endl;
	cin >> y;
	
	cout << "z" << endl;
	cin >> z;
	
	cout << "The length is" << endl;
	
	len = vector_length(x,y,z);
	cout << len << endl;
	return 0;
}

double vector_length(double x, double y, double z)
{
	double l;
	l = sqrt(pow(x,2.0) + pow(y,2.0) + pow(z,2.0));
	return l;
}

