#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");

	cout << "������� � 2." << endl;
	cout << "�������� ��������� ���������� 20000 ��� + ������� �� ������, ������� �� 50000 ��� - 3 %, �� 50000 �� 100000 - 5 %, ����� 100000 - 8 % ." << endl;
	cout << "������������ ������ � ���������� ������� ������ ��� ���� ����������." << endl;
	cout << "���������� �� ��������, ����������� ������� ���������, ��������� ��� ������ 20000, ������� ����� �� �����." << endl;
	cout << "����������: ������� ������ � ���� ���� ���������� ������." << endl;

	double zp_manager_1 = 20000.;
	double zp_manager_2 = 20000.;
	double zp_manager_3 = 20000.;

	double revenue_1 = 0; // ������� �� �����
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

	cout << "������� ������� ��������� �1: "; cin >> revenue_1;
	cout << "������� ������� ��������� �2: "; cin >> revenue_2;
	cout << "������� ������� ��������� �3: "; cin >> revenue_3;

	if (revenue_1 > 0 && revenue_1 < 50000)
	{
		percent_1 = revenue_1 * 0.03;
		cout << "������� �� ������ ��� ��������� �1 - " << percent_1 << endl;

		zp_1 = zp_manager_1 + percent_1;
		cout << "�������� ����� ��� ��������� �1 � ������ �������� �� ������ - " << zp_1 << endl;
		cout << endl;
	}

	if (revenue_1 >= 50000 && revenue_1 < 100000)

	{
		percent_1 = revenue_1 * 0.05;
		cout << "������� �� ������ ��� ��������� �1 - " << percent_1 << endl;

		zp_1 = zp_manager_1 + percent_1;
		cout << "�������� ����� ��� ��������� �1 � ������ �������� �� ������ - " << zp_1 << endl;
		cout << endl;
	}

	if (revenue_1 >= 100000)

	{
		percent_1 = revenue_1 * 0.08;
		cout << "������� �� ������ ��� ��������� �1 - " << percent_1 << endl;

		zp_1 = zp_manager_1 + percent_1;
		cout << "�������� ����� ��� ��������� �1 � ������ �������� �� ������ - - " << zp_1 << endl;
		cout << endl;
	}

	if (revenue_2 > 0 && revenue_2 < 50000)
	{
		percent_2 = revenue_2 * 0.03;
		cout << "������� �� ������ ��� ��������� �2 - " << percent_2 << endl;

		zp_2 = zp_manager_2 + percent_2;
		cout << "�������� ����� ��� ��������� �2 � ������ �������� �� ������ - " << zp_2 << endl;
		cout << endl;
	}

	if (revenue_2 >= 50000 && revenue_2 < 100000)
	{
		percent_2 = revenue_2 * 0.05;
		cout << "������� �� ������ ��� ��������� �2 - " << percent_2 << endl;

		zp_2 = zp_manager_2 + percent_2;
		cout << "�������� ����� ��� ��������� �2 � ������ �������� �� ������ - " << zp_2 << endl;
		cout << endl;
	}

	if (revenue_2 >= 100000)
	{
		percent_2 = revenue_2 * 0.08;
		cout << "������� �� ������ ��� ��������� �2 - " << percent_2 << endl;

		zp_2 = zp_manager_2 + percent_2;
		cout << "�������� ����� ��� ��������� �2 � ������ �������� �� ������ - " << zp_2 << endl;
		cout << endl;
	}

	if (revenue_3 > 0 && revenue_3 < 50000)
	{
		percent_3 = revenue_3 * 0.03;
		cout << "������� �� ������ ��� ��������� �3 - " << percent_3 << endl;

		zp_3 = zp_manager_3 + percent_3;
		cout << "�������� ����� ��� ��������� �3 � ������ �������� �� ������ - " << zp_3 << endl;
		cout << endl;
	}

	if (revenue_3 >= 50000 && revenue_3 < 100000)
	{
		percent_3 = revenue_3 * 0.05;
		cout << "������� �� ������ ��� ��������� �3 - " << percent_3 << endl;

		zp_3 = zp_manager_3 + percent_3;
		cout << "�������� ����� ��� ��������� �3 � ������ �������� �� ������ - " << zp_3 << endl;
		cout << endl;
	}

	if (revenue_3 >= 100000)
	{
		percent_3 = revenue_3 * 0.08;
		cout << "������� �� ������ ��� ��������� �3 - " << percent_3 << endl;

		zp_3 = zp_manager_3 + percent_3;
		cout << "�������� ����� ��� ��������� �3 � ������ �������� �� ������ - " << zp_3 << endl;
		cout << endl;
	}

	if (zp_1 > zp_2 && zp_1 > zp_3)
	{
		zp_max = zp_1;

		cout << endl;
		cout << endl;
		cout << "������ �������� - � 1." << endl;
		cout << "�������������� ������ � ������� ������ - 20000 ������." << endl;

		zp = zp_1 + 20000;
		cout << "����� �� ����� ��������� � 1 ��������� - " << zp << endl;
		cout << endl;
	}

	if (zp_2 > zp_1 && zp_2 > zp_3)
	{
		zp_max = zp_2;

		cout << endl;
		cout << endl;
		cout << "������ �������� - � 2." << endl;
		cout << "�������������� ������ � ������� ������ - 20000 ������." << endl;

		zp = zp_2 + 20000;
		cout << "����� �� ����� ��������� � 2 ��������� - " << zp << endl;
	}

	if (zp_3 > zp_1 && zp_3 > zp_2)
	{
		zp_max = zp_3;

		cout << endl;
		cout << endl;
		cout << "������ ��������  - � 3." << endl;
		cout << "�������������� ������ � ������� ������ - 20000 ������." << endl;

		zp = zp_3 + 20000;

		cout << "����� �� ����� ��������� � 3 ��������� - " << zp << endl;
		cout << endl;
		cout << endl;
	}

	system("pause");
	system("cls");



	return 0;
}