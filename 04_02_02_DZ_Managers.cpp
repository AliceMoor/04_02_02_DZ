#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");

	cout << "Задание № 2." << endl;
	cout << "Зарплата менеджера составляет 20000 руб + процент от продаж, продажи до 50000 руб - 3 %, от 50000 до 100000 - 5 %, свыше 100000 - 8 % ." << endl;
	cout << "Пользователь вводит с клавиатуры уровень продаж для трех менеджеров." << endl;
	cout << "Определить их зарплату, отпределить лучшего менеджера, начислить ему премию 20000, вывести итоги на экран." << endl;
	cout << "Примечание: уровень продаж у всех трех менеджеров разный." << endl;

	double zp_manager_1 = 20000.;
	double zp_manager_2 = 20000.;
	double zp_manager_3 = 20000.;

	double revenue_1 = 0; // выручка за месяц
	double revenue_2 = 0;
	double revenue_3 = 0;
	double revenue = 0;


	double percent_1 = 0;
	double percent_2 = 0;
	double percent_3 = 0;

	double zp_1 = 0;
	double zp_2 = 0;
	double zp_3 = 0;

	double zp_max = 0;
	double zp = 0;

	cout << "Введите выручку менеджера №1: "; cin >> revenue_1;
	cout << "Введите выручку менеджера №2: "; cin >> revenue_2;
	cout << "Введите выручку менеджера №3: "; cin >> revenue_3;

	if (revenue_1 > 0 && revenue_1 < 50000)
	{
		percent_1 = revenue_1 * 0.03;
		cout << "Процент от продаж для менеджера №1 - " << percent_1 << endl;

		zp_1 = zp_manager_1 + percent_1;
		cout << "Итоговая сумма для менеджера №1 с учетом процента от продаж - " << zp_1 << endl;
		cout << endl;
	}

	if (revenue_1 >= 50000 && revenue_1 < 100000)

	{
		percent_1 = revenue_1 * 0.05;
		cout << "Процент от продаж для менеджера №1 - " << percent_1 << endl;

		zp_1 = zp_manager_1 + percent_1;
		cout << "Итоговая сумма для менеджера №1 с учетом процента от продаж - " << zp_1 << endl;
		cout << endl;
	}

	if (revenue_1 >= 100000)

	{
		percent_1 = revenue_1 * 0.08;
		cout << "Процент от продаж для менеджера №1 - " << percent_1 << endl;

		zp_1 = zp_manager_1 + percent_1;
		cout << "Итоговая сумма для менеджера №1 с учетом процента от продаж - - " << zp_1 << endl;
		cout << endl;
	}

	if (revenue_2 > 0 && revenue_2 < 50000)
	{
		percent_2 = revenue_2 * 0.03;
		cout << "Процент от продаж для менеджера №2 - " << percent_2 << endl;

		zp_2 = zp_manager_2 + percent_2;
		cout << "Итоговая сумма для менеджера №2 с учетом процента от продаж - " << zp_2 << endl;
		cout << endl;
	}

	if (revenue_2 >= 50000 && revenue_2 < 100000)
	{
		percent_2 = revenue_2 * 0.05;
		cout << "Процент от продаж для менеджера №2 - " << percent_2 << endl;

		zp_2 = zp_manager_2 + percent_2;
		cout << "Итоговая сумма для менеджера №2 с учетом процента от продаж - " << zp_2 << endl;
		cout << endl;
	}

	if (revenue_2 >= 100000)
	{
		percent_2 = revenue_2 * 0.08;
		cout << "Процент от продаж для менеджера №2 - " << percent_2 << endl;

		zp_2 = zp_manager_2 + percent_2;
		cout << "Итоговая сумма для менеджера №2 с учетом процента от продаж - " << zp_2 << endl;
		cout << endl;
	}

	if (revenue_3 > 0 && revenue_3 < 50000)
	{
		percent_3 = revenue_3 * 0.03;
		cout << "Процент от продаж для менеджера №3 - " << percent_3 << endl;

		zp_3 = zp_manager_3 + percent_3;
		cout << "Итоговая сумма для менеджера №3 с учетом процента от продаж - " << zp_3 << endl;
		cout << endl;
	}

	if (revenue_3 >= 50000 && revenue_3 < 100000)
	{
		percent_3 = revenue_3 * 0.05;
		cout << "Процент от продаж для менеджера №3 - " << percent_3 << endl;

		zp_3 = zp_manager_3 + percent_3;
		cout << "Итоговая сумма для менеджера №3 с учетом процента от продаж - " << zp_3 << endl;
		cout << endl;
	}

	if (revenue_3 >= 100000)
	{
		percent_3 = revenue_3 * 0.08;
		cout << "Процент от продаж для менеджера №3 - " << percent_3 << endl;

		zp_3 = zp_manager_3 + percent_3;
		cout << "Итоговая сумма для менеджера №3 с учетом процента от продаж - " << zp_3 << endl;
		cout << endl;
	}

	if (zp_1 > zp_2 && zp_1 > zp_3)
	{
		zp_max = zp_1;

		cout << endl;
		cout << endl;
		cout << "Лучший менеджер - № 1." << endl;
		cout << "Дополнительная премия в размере оклада - 20000 рублей." << endl;

		zp = zp_1 + 20000;
		cout << "Итого за месяц менеджеру № 1 начислено - " << zp << endl;
		cout << endl;
	}

	if (zp_2 > zp_1 && zp_2 > zp_3)
	{
		zp_max = zp_2;

		cout << endl;
		cout << endl;
		cout << "Лучший менеджер - № 2." << endl;
		cout << "Дополнительная премия в размере оклада - 20000 рублей." << endl;

		zp = zp_2 + 20000;
		cout << "Итого за месяц менеджеру № 2 начислено - " << zp << endl;
	}

	if (zp_3 > zp_1 && zp_3 > zp_2)
	{
		zp_max = zp_3;

		cout << endl;
		cout << endl;
		cout << "Лучший менеджер  - № 3." << endl;
		cout << "Дополнительная премия в размере оклада - 20000 рублей." << endl;

		zp = zp_3 + 20000;

		cout << "Итого за месяц менеджеру № 3 начислено - " << zp << endl;
		cout << endl;
		cout << endl;
	}

	system("pause");
	system("cls");



	return 0;
}