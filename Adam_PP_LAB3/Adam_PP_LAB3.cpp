#include <iostream>
using namespace std;

int main() {

	//Zad.1
		/*int a, b;
		cout << "Podaj liczbe calkowita a: ";
		cin >> a;
		cout << "Podaj liczbe calkowita b: ";
		cin >> b;
		if (a == b) {
			cout << a << " = " << b << endl;
		} else if (a < b) {
			cout << a << " < " << b << endl;
		} else {
			cout << a << " > " << b << endl;
		}
		return 0;
	}*/

	//Zad.2
	/*int a, b;
	cout << "Podaj liczbe calkowita a: ";
	cin >> a;
	cout << "Podaj liczbe calkowita b: ";
	cin >> b;
	if (a == b) {
		cout << a << " = " << b << endl;
	}
	else {
		if (a < b) {
			cout << a << " < " << b << endl;
		}
		else {
			cout << a << " > " << b << endl;
		}
	}
	return 0;
}*/

//Zad.3
	/*float r;
	cout << "Podaj wspolczynnik r: ";
	cin >> r;
	if (r >= 0.7 && r <= 1.0) {
		cout << "Bardzo silna korelacja dodatnia" << endl;
	}
	else if (r >= 0.5 && r < 0.7) {
		cout << "Silna korelacja dodatnia" << endl;
	}
	else if (r >= 0.3 && r < 0.5) {
		cout << "Umiarkowana korelacja dodatnia" << endl;
	}
	else if (r >= 0.2 && r < 0.3) {
		cout << "Slaba korelacja dodatnia" << endl;
	}
	else if (r >= 0.0 && r < 0.2) {
		cout << "Brak korelacji" << endl;
	}
	else {
		cout << "Niepoprawna wartosc wspolczynnika r :c" << endl;
	}
}*/

//Zad.4
	/*char opcja;
	float a, b, c;
	printf("Pierwsza liczba dzialania:\n");
	cin >> a;
	printf("Druga liczba dzialania:\n");
	cin >> b;
	printf("Podaj jaki rachunek chcesz zrobic:\n");
	cin >> opcja;

	switch (opcja)
	{
	case '+':
		printf("Wybrales/-as dodawanie\n");
		c = a + b;
		cout << a << " + " << b << " = " << c << endl;
		break;
	case '-':
		printf("Wybrales/-as odejmowanie\n");
		c = a - b;
		cout << a << " - " << b << " = " << c << endl;
		break;
	case '*':
		printf("Wybrales/-as mnozenie\n");
		c = a * b;
		cout << a << " * " << b << " = " << c << endl;
		break;
	case '/':
		printf("Wybrales/-as dzielenie\n");
		if (b == 0) {
			printf("Nie mozna dzielic przez 0\n");
		}
		else {
			c = a / b;
			cout << a << " / " << b << " = " << c << endl;
		}
		break;
	default:
		printf("Nie podano poprawnego dzialania\n");
		break;
	}
	return 0;
}*/

//Zad.5

	for (int i = 0; ; i++) {
		cout << i;
	}
	return 0;
}