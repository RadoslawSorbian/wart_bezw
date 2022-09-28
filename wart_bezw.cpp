#include <iostream>
using namespace std;

int main()
{
	double x;						//deklaracja zmiennej typu double
	cout << "Podaj libczbe, z ktorej chcesz obliczyc wartosc bezwzgledna: ";
	cin >> x;						//wczytanie z klawaitury
	cout << "|" << x << "| = ";
	if (x >= 0)					//sprawdzenie czy liczba jest wieksza badz rowna zero
		cout << x << endl;
	else
		cout << x * (-1) << endl;
	return 0;
}

