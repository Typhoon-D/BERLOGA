#include <iostream>
#include <string>
#include <cmath>
#include <windows.h>

using namespace std;

int main()
{
	int i, j, n, m;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	//создание массива
	cout << "¬ведите число уравнений:";
	cin >> n;
	cout << "¬ведите число перемещений:";
	cin >> m;
	m += 1;
	float** matrix = new float*[n];
	for (i = 0; i < n; i++)
		matrix[i] = new float[m];

	//инициализаци€
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			cout << "Ёлемент [" << i + 1 << "," << j + 1 << "]:";
			cin >> matrix[i][j];
		}
	}

	//вывод массива
	cout << "matrix:" << endl;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;


	//метод √аусса
	//переход к треугольному виду
	float tmp, xx[1];
	int k;

	for (i = 0; i < n; i++)
	{
		tmp = matrix[i][j];
		for (j = n; j >= i; j--)
		{
			matrix[i][j] /= tmp; //на паре было
		}
		for (j = i + 1; j < n; j++)
		{
			tmp = matrix[j][i];
				for (k = n; k >= i; k--)
				{
					matrix[j][k] -= tmp * matrix[i][k];
				}
		}
	}

	//обратный ход
	xx[n - 1] = matrix[n - 1][n];
	for (i = n - 2; i >= 0; i--)
	{
		xx[i] = matrix[i][n];
		for (j = i + 1; j < n; j++)
		{
			xx[i] = -matrix[i][j] * xx[j];
		}
	}

	//вывод решений
	for (i = 0; i < n; i++)
		cout << xx[i] << " ";
	cout << endl;

	delete[] matrix;
	system("pause");
	return 0;
}
