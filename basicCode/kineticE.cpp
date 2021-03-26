#include<iostream>
#include<string>
#include<cmath>

using namespace std;

int main()
{
	float m,v;
	string s1,s2,s3;
	s1 = "KE = 1/2 * m * v^2";
	s2 = "state m";
	s3 = "state v";

	cout << s1 << endl;
	cout << s2 << endl;
	cin >> m;
	cout << s3 << endl;
	cin >> v;
	cout << 1.0/2.0 * m * pow(v,2) << endl;
        return 0;
}

       
