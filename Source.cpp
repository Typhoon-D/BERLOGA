#include <iostream>
#include <cmath>
#include <string>
#include <windows.h>
using namespace std;
int main()
{
int i, j;
double P, Px, Py, x[9], y[9], teta[9], f[9][2], n[9], nx[9], ny[9], fx[9], fy[9];
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "Введите Px:";
	cin >> Px;
	cout << "Введите Py:";
	cin >> Py;
	cout << endl;
P = sqrt(pow(Px, 2) + pow(Py, 2));
	x[0] = 0; y[0] = -10.5;
	x[1] = 4.04; y[1] = -9.67;
	x[2] = 7.4; y[2] = -7.4;
	x[3] = 9.67; y[3] = -4.01;
	x[4] = 10.5; y[4] = 0;
	x[5] = 9.67; y[5] = 4.01;
	x[6] = 7.4; y[6] = 7.4;
	x[7] = 4.04; y[7] = 9.67;
	x[8] = 0; y[8] = 10.5;
for (i = 0; i < 9; i++)
	{
		teta[i] = atan(y[i] / x[i]);
		nx[i] = cos(teta[i]);
		ny[i] = sin(teta[i]);
	}
for (i = 0; i < 9; i++)
	{
		fx[i] = P*nx[i];
		fy[i] = P*ny[i];
	}
	cout << "Векторы fxi и fyi:" << endl;
for (i = 0; i < 9; i++)
		cout << "fx[" << i << "]=" << fx[i] << " " << "fy[" << i << "]=" << fy[i] << endl;
	cout << "Сравнение:" << endl;
for (i = 0; i < 9; i++)
	{
		if (fx[i] < Px)
			cout << "fx[" << i << "]<Px" << " ";
		else {
			if (fx[i] > Px)
				cout << "fx[" << i << "]>Px" << " ";
			else{
				if (fx[i] == Px)
					cout << "fx[" << i << "]=Px" << " ";
			}
		}
		if (fy[i]<Py)
			cout << "fy[" << i << "]<Py" << endl;
		else{
			if (fy[i]>Py)
				cout << "fy[" << i << "]>Py" << endl;
			else{
				if (fy[i] == Py)
					cout << "fy[" << i << "]=Py" << endl;
			}
		}
	}
system("pause");
}




