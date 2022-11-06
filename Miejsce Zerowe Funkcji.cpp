#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	int a;
	int b;
	int wynik1, wynik2;
	int delta;
	
	cout << "Program do obliczania miejsca zerowego" << endl;
	cout << "Podaj a:" << endl;
	cin >> a;
	cout << "Podaj b:" << endl;
	cin >> b;
	cout <<"Postac twojej funkcji to: " << endl;
	cout << a <<"x+" << b << endl;

	delta = b;
	wynik1 = (-b - delta)/(2*a);
	wynik2 = (-b+delta)/(2*a);
	
	
	cout << "Miejsce zerowe funkcji to: " << endl;
	cout << wynik1 << endl;
	cout << wynik2 << endl;
	
	return 0;
}
