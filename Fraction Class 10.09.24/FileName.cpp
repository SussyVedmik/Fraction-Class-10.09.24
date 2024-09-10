#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;


class Fraction
{
	int x1;
	int y1;
	int x2;
	int y2;
public:
	void Input()
	{
		setlocale(LC_ALL, "Russian");
		cout << "Введите первый числитель: ";
		cin >> x1;
		cout << "Введите первый знаменатель: ";
		cin >> y1;
		cout << "Введите второй числитель: ";
		cin >> x2;
		cout << "Введите второй знаменатель: ";
		cin >> y2;
	}
	void Show() {
		setlocale(LC_ALL, "Russian");
		cout << "Ваши данные: ";
		cout << "Первая дробь. Числитель: " << x1 << "  " << "Знаменатель: " << y1 << endl;
		cout << "Вторая дробь. Числитель: " << x2 << "  " << "Знаменатель: " << y2 << endl;
	}
	void Set(int _x1, int _x2, int _y1, int _y2)
	{
		x1 = _x1;
		x2 = _x2;
		y1 = _y1;
		y2 = _y2;
	}
	void Addition() {
		setlocale(LC_ALL, "Russian");
		int YY;
		for (int i = y1; i++;) {
			if (i % y1 == 0 && i % y2 == 0) {
				YY = i;
				int x1buf = x1 * (i / y1);
				int x2buf = x2 * (i / y2);
				int XX = x1buf + x2buf;
				cout << "Результат: \n" << XX << "\n" << "--\n" << YY << "\n";
				break;
			}
		}
		

	}
	void Substraction() {
		setlocale(LC_ALL, "Russian");
		int YY;
		for (int i = y1; i++;) {
			if (i % y1 == 0 && i % y2 == 0) {
				YY = i;
				int x1buf = x1 * (i / y1);
				int x2buf = x2 * (i / y2);
				int XX = x1buf - x2buf;
				cout << "Результат: \n" << XX << "\n" << "--\n" << YY << "\n";
				break;
			}
		}
	}
	void Multiplication() {
		setlocale(LC_ALL, "Russian");
		int x = x1 * x2;
		int y = y1 * y2;
		cout << "Результат: \n" << x << "\n" << "--\n" << y << "\n";
	}
	void Division() {
		setlocale(LC_ALL, "Russian");
		int x = x1 * y2;
		int y = y1 * x2;
		cout << "Результат: \n" << x << "\n" << "--\n" << y << "\n";
	}
};

int main()
{
	setlocale(LC_ALL, "Russian");
	int choice;
	Fraction a;
	a.Input();
	a.Show();
	while (true) {
		cout << "Выберите действие: \n 1. Сумма \n 2. Вычитание \n 3. Умножение \n 4. Деление \n 5. Сменить дроби \n 6. Exit \n";
		cin >> choice;
		switch (choice)
		{
		case 1:
			a.Addition();
			break;
		case 2:
			a.Substraction();
			break;
		case 3:
			a.Multiplication();
			break;
		case 4:
			a.Division();
			break;
		case 5:
			int x1, x2, y1, y2;
			cout << "Введите первый числитель: ";
			cin >> x1;
			cout << "\nВведите первый знаменатель: ";
			cin >> y1;
			cout << "\nВведите второй числитель: ";
			cin >> x2;
			cout << "\nВведите второй знаменатель: ";
			cin >> y2;
			a.Set(x1,x2,y1,y2);
			break;
		case 6:
			return 0;
			break;
		default:
			break;
		};
		cout << endl;
	}
}