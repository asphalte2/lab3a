#include<iostream>
using namespace std;

int natural(const string& prompt) {
	int value;
	while (true) {
		cout << prompt;
		if (cin >> value && value >= 1 && value <= 12) {
			return value;
		}
		else
		{
			cout << "ощибка ввода,азмер вектора должен быть в диапазоне от 1 до 12" << endl;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
	}

}


int main()
{
setlocale(LC_ALL, "ru_RU.UTF-8");

	cout << "**создание одномерного массива на основе массива, введенного пользователем**" << endl;
	int n= natural("водите знчение вектора :"), i=0,j=0, k=0;
	double* X= new double[n] ;
	double* B = new double[n];
	double m = 0;
	for (i = 0;i < n; i++)
	{
		cout << "водите елемент[" << i + 1 << "]:", '\t';
		cin >> X[i];
	}
	double Minx = X[0];
	double Maxx = X[0];
	for (i = 0;i < n; i++) {
		if (X[i] < Minx) { Minx = X[i]; }
		if (X[i] > Maxx) { Maxx = X[i]; }
		
	}

	m = (Minx + Maxx) / 2.0;
	for (j= 0; j< n; j++) {
		if (X[j] > m && k < n) {
			B[k] = X[j];
			k++;
		}
	}
	for (i = 0;i < k; i++) {
		cout << B[i] << '\n';
	}
	cout << endl;

	return 0;
}