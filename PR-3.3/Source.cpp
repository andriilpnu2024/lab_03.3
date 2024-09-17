#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // вхідний аргумент
    double R; // вхідний параметр
	double y; // результат обчислення виразу
	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;

	// розгалуження в повній формі
	if (x <= -6)
		y = R;
	else
		if (-6 < x && x <= -R)
			y = (x + 6) / (6 - R) - 1;
		else
			if (-R < x && x <= 0)
				y = -sqrt(pow(R, 2) - pow((x + R), 2)) + R;
			else
				if (0 < x && x <= R)
					y = sqrt(pow(R, 2) - pow(x, 2));
				else
					y = R - x;
	cout << endl;
	cout << "y = " << y << endl;
	cin.get();
	return 0;
}