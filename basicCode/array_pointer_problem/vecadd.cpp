#include<iostream>
#include<cmath>
#include<string>
using namespace std;

double vec_add(double veca[3][1], double vecb[3][1]);


int main()
{
	double vec1[3][1], vec2[3][1];
	
	cout << "vec1 x" << endl;
	cin >> vec1[0][0];

	cout << "vec1 y" << endl;
	cin >> vec1[1][0];

	cout << "vec1 z" << endl;
	cin >> vec1[2][0];


	cout << "vec2 x" << endl;
	cin >> vec2[0][0];

	cout << "vec2 y" << endl;
	cin >> vec2[1][0];

	cout << "vec2 z" << endl;
	cin >> vec2[2][0];

	double addresult = vec_add(vec1,vec2);
	cout << addresult << endl;

	return 0;
}

double vec_add(double veca[3][1], double vecb[3][1])
{
	double result[3][1];
	
	for (int i = 0; i <= 3; i++)
	{
		result[i][0] = veca[i][0] + vecb[i][0];
	}

	return **result;
}
