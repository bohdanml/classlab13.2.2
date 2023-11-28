#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;
int main()
{
	double x, y, t;
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	t = x + y;
#if(t >= 10)

	cout << "yes" << endl;
#else
	cout << "no" << endl;
#endif
	cin.get();
	return 0;
}