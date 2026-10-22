#include <iostream>
#include <math.h>
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

/*int i = 0;
while (2137) {
	cout << i << endl;
	i++;
}
	return 0;
}*/

//Zad.6

	/*char opcja, kontynuacja;
	float a, b, c;
	kontynuacja = 'y';
	while (kontynuacja == 'y') {
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
			cout << "Czy chcesz kontynuowac? (y/n): ";
			cin >> kontynuacja;
			if (kontynuacja != 'y' && kontynuacja != 'n') {
				printf("Niepoprawna opcja, zakonczenie programu\n");
				return 0;
			}
			else if (kontynuacja == 'n') {
				printf("Zakonczenie programu\n");
				return 0;
			} else
				printf("Kontynuacja programu\n");
			break;
		case '-':
			printf("Wybrales/-as odejmowanie\n");
			c = a - b;
			cout << a << " - " << b << " = " << c << endl;
			cout << "Czy chcesz kontynuowac? (y/n): ";
			cin >> kontynuacja;
			if (kontynuacja != 'y' && kontynuacja != 'n') {
				printf("Niepoprawna opcja, zakonczenie programu\n");
				kontynuacja = 'n';
				return 0;
			}
			else if (kontynuacja == 'n') {
				printf("Zakonczenie programu\n");
				return 0;
			}
			else
				printf("Kontynuacja programu\n");
			break;
		case '*':
			printf("Wybrales/-as mnozenie\n");
			c = a * b;
			cout << a << " * " << b << " = " << c << endl;
			cout << "Czy chcesz kontynuowac? (y/n): ";
			cin >> kontynuacja;
			if (kontynuacja != 'y' && kontynuacja != 'n') {
				printf("Niepoprawna opcja, zakonczenie programu\n");
				kontynuacja = 'n';
				return 0;
			}
			else if (kontynuacja == 'n') {
				printf("Zakonczenie programu\n");
				return 0;
			}
			else
				printf("Kontynuacja programu\n");
			break;
		case '/':
			printf("Wybrales/-as dzielenie\n");
			if (b == 0) {
				printf("Nie mozna dzielic przez 0\n");
				cout << "Czy chcesz kontynuowac? (y/n): ";
				cin >> kontynuacja;
				if (kontynuacja != 'y' && kontynuacja != 'n') {
					printf("Niepoprawna opcja, zakonczenie programu\n");
					kontynuacja = 'n';
					return 0;
				}
				else if (kontynuacja == 'n') {
					printf("Zakonczenie programu\n");
					return 0;
				}
				else
					printf("Kontynuacja programu\n");
			}
			else {
				c = a / b;
				cout << a << " / " << b << " = " << c << endl;
				cout << "Czy chcesz kontynuowac? (y/n): ";
				cin >> kontynuacja;
				if (kontynuacja != 'y' && kontynuacja != 'n') {
					printf("Niepoprawna opcja, zakonczenie programu\n");
					kontynuacja = 'n';
					return 0;
				}
				else if (kontynuacja == 'n') {
					printf("Zakonczenie programu\n");
					return 0;
				}
				else
					printf("Kontynuacja programu\n");
			}
			break;
		default:
			printf("Nie podano poprawnego dzialania\n");
			break;
		}
	}
	return 0;
}*/

//Zad.7

/*int i = 0;
while (1) {
	if (i == 200) {
		break;
	}
	if (i%2 == 0) {
		i++;
		continue;
	}
	cout << i << endl;
	i++;
}
return 0;
}*/

//Zad.8

/*int n;
cout << "Podaj dodatnia liczbe naturalna n: ";
cin >> n;
if (n <= 0) {
	cout << "Podana liczba nie jest naturalna :c" << endl;
	return 0;
}
double granica = sqrt(n);
bool znaleziono_dzielnik = false;
for (int i = 2; i <= granica; i++) {
	if (n % i == 0) {
		cout << "Znaleziono dzielnik: " << i << endl;
		znaleziono_dzielnik = true;
		break;
	}
}
if (!znaleziono_dzielnik) {
	cout << "Brak dzielnikow w przedziale [2, " << granica << "]" << endl;
}
return 0;
}*/

//Zad.9

/*float t;
cout << "Podaj temperature w stopniach Celsjusza: ";
cin >> t;
if (t < 0.0) {
	cout << "Mroz" << endl;
}
else if (t >= 0.0 && t < 10.0) {
	cout << "Zimno" << endl;
}
else if (t >= 10.0 && t < 20.0) {
	cout << "Umiarkowanie" << endl;
}
else if (t >= 20.0 && t < 30.0) {
	cout << "Cieplo" << endl;
}
else
	cout << "Goraco" << endl;
return 0;
}*/

//Zad.10

	/*int a, b, c;
	cout << "Podaj liczbe calkowita a: ";
	cin >> a;
	cout << "Podaj liczbe calkowita b: ";
	cin >> b;
	cout << "Podaj liczbe calkowita c: ";
	cin >> c;
	if (a == b && a == c) {
		cout << a << " = " << b << " = " << c << endl;
	}
	else if (a > b && a > c) {
		cout << a << " jest najwieksze" << endl;
	}
	else if (b > a && b > c) {
		cout << b << " jest najwieksze" << endl;
	}
	else if (c > a && c > b) {
		cout << c << " jest najwieksze" << endl;
	}
	else if (a == b && a > c) {
		cout << a << " i " << b << " sa najwieksze" << endl;
	}
	else if (a == c && a > b) {
		cout << a << " i " << c << " sa najwieksze" << endl;
	}
	else if (b == c && b > a) {
		cout << b << " i " << c << " sa najwieksze" << endl;
	}
	else {
		cout << "Niepoprawne dane" << endl;
	}
	return 0;
}*/

//Zad.11

/*int l;
cout << "Podaj rok: ";
cin >> l;
if (l % 4 == 0 && l % 100 != 0) {
	cout << l << " jest rokiem przestepnym" << endl;
}
else if (l % 400 == 0) {
	cout << l << " jest rokiem przestepnym" << endl;
}
else {
	cout << l << " nie jest rokiem przestepnym" << endl;
}
return 0;
}*/

//Zad.12

/*int i;
cout << "Wybierz opcje:\n1 - Start\n2 - Ustawienia\n3 - Pomoc\n4 - Koniec\n";
cin >> i;
switch (i)
{
case 1:
	printf("Wybrales/-as Start\n");
	break;
case 2:
	printf("Wybrales/-as Ustawienia\n");
	break;
case 3:
	printf("Wybrales/-as Pomoc\n");
	break;
case 4:
	printf("Wybrales/-as Koniec\n");
	break;
default:
	printf("Nieprawidlowy wybor\n");
	break;
}
return 0;
}*/

//Zad.13

/*int i;
cout << "Jaka ocene dostal student?:\n";
cin >> i;
switch (i)
{
case 1:
	printf("Student dostal ocene niedostateczna\n");
	break;
case 2:
	printf("Student dostal ocene dopuszczajaca\n");
	break;
case 3:
	printf("Student dostal ocene dostateczna\n");
	break;
case 4:
	printf("Student dostal ocene dobra\n");
	break;
case 5:
	printf("Student dostal ocene bardzo dobra\n");
	break;
default:
	printf("Numer z poza zakresu ocen\n");
	break;
}
return 0;
}*/

//Zad.14

	/*int suma = 0;
	for (int i = 0; i <= 100; ++i) {
		if (i % 3 == 0) {
			continue;
		}
		suma += i;
	}
	cout << "Suma liczb od 1 do 100 niepodzielnych przez 3 wynosi: " << suma << endl;
	return 0;
}*/

//Zad.15

	/*for (int i = 1; i++;) {
		if (i > 50 && i % 7 == 0) {
			cout << "Pierwsza liczba wieksza od 50 podzielna przez 7 to: " << i << endl;
			break;
		}
	}
	return 0;
}*/ //Nie trzeba sprawdzać do 1000, ponieważ pierwsza liczba większa od 50 podzielna przez 7 to 56, więc pętla zakończy się wcześniej.

//Zad.16

	/*for (int i = 1; i <= 10; ++i) {
		for (int j = 1; j <= 10; ++j) {
			cout << i * j << "\t";
		}
		cout << "\n";
	}

	return 0;
}*/

//Zad.17

/*int i;
cout << "Podaj nieujemna liczbe calkowita: ";
cin >> i;
if (i < 0) {
	cout << "Liczba nie jest nieujemna :c" << endl;
	return 1;
}
int r = 0;
if (i == 0) {
	r = 1;
}
else {
	while (i > 0) {
		i = i / 10;
		r++;
	}
}
cout << "Liczba cyfr: " << r << endl;
return 0;
}*/		//Ponieważ while (i > 0) nie wykona się dla i = 0, więc trzeba dodać warunek if (i == 0) r = 1; aby poprawnie policzyć liczbę cyfr w liczbie 0.

//Zad.18

	/*int n;
	cout << "Podaj liczbe calkowita : ";
	cin >> n;
	if (n == 0 || n == 1) {
		cout << "Liczba " << n << " nie jest ani pierwsza ani zlozona" << endl;
	}
	else {
		bool pierwsza = true;
		for (int i = 2; i <= sqrt(n); ++i) {
			if (n % i == 0) {
				pierwsza = false;
				break;
			}
		}
		if (pierwsza) {
			cout << "Liczba " << n << " jest liczba pierwsza" << endl;
		}
		else {
			cout << "Liczba " << n << " jest liczba zlozona" << endl;
		}
	}
}*/

//Zad.19

/*int i;
do {
	cout << "Wybierz opcje:\n1 - Start\n2 - Ustawienia\n3 - Pomoc\n4 - Koniec\n";
	cin >> i;
	switch (i)
	{
	case 1:
		printf("Wybrales/-as Start\n");
		break;
	case 2:
		printf("Wybrales/-as Ustawienia\n");
		break;
	case 3:
		printf("Wybrales/-as Pomoc\n");
		break;
	case 4:
		printf("Wybrales/-as Koniec\n");
		printf("Zakonczenie programu\n");
		return 0;
	default:
		printf("Nieprawidlowy wybor\n");
		break;
	}
} while (2137);
return 0;
}*/		//Przy wyborze konca programu trzeba dac return 0 zamiast break, bo break przerwie tylko switch, a nie caly program.

//Zad.20

/*float s = 0.0;
int i = 0;
while (s < 10.0) {
	s += 0.1;
	i++;
	cout << "Aktualna suma = " << s << "\n" << endl;
}
cout << "Koncowa wartosc sumy: " << s << "\n" << endl;
cout << "Liczba wykonanych iteracji: " << i << "\n" << endl;
return 0;
}*/		//Trzeba sprawdzac czy s <10.0, a nie s != 10.0, ponieważ liczby zminnoprzecinkowe są niedokładne i mogą nigdy nie osiągnąć dokładnie 10.0, co spowodowałoby nieskończoną pętlę.