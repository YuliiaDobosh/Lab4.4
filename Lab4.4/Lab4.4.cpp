#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double R, x, xk, xp, dx, y;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "R = "; cin >> R;
	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(10) << "x" << " |"
		<< setw(10) << "y" << " |" << endl;
	cout << "---------------------------" << endl;
	x = xp;
	while (x <= xk)
	{
		if (x <= -R)
			y = R;
		else
			if (-R < x && x <= R)
				y = R - sqrt(R * R - x * x);
			else
				if (R < x && x <= 6)
					y = R + ((R + 3) / (R - 6)) * (x - R);
				else
					y = x - 9;
		cout << "|" << setw(10) << setprecision(3) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;
	return 0;
}







