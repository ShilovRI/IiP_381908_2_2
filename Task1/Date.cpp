#include <clocale>
#include <iostream>
#include <cstdlib>
#include "ClassDate.h"

using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Russian");
	int z, z1;
	do
	{	cout << "1 - ��������� � ����\n";
		cout << "2 - ������� �� ����\n";
		cout << "3 - �������� ��� ����\n";
		cout << "0 - �����\n";
		cout << "����� �����: ";
		cin >> z;
		if (z == 1)
		{
			Date res;
			int days;
			cout << "�������� ����� ����� ����: 1-�� ������; ����� ������-�������: ";
			cin >> z1;
			if (z1 == 1)
			{
				Date DT1;
				cout << "������� ����: \n";
				cin >> DT1;
				cout << "������� ���������� ����: ";
				cin >> days;
				res = DT1+days;
				cout << "����� ����: " << res;
			}
			else
			{
				string DT1;
				Date DT2;
				cout << "������� ����: \n";
				cin >> DT1;
				DT2 = DT1;
				cout << "������� ���������� ����: ";
				cin >> days;
				res = DT2+days;
				cout << "����� ����: " << res;
			}
		}
		if (z == 2)
		{
			Date res;
			int days;
			cout << "�������� ����� ����� ����: 1-�� ������; ����� ������-�������: ";
			cin >> z1;
			if (z1 == 1)
			{
				Date DT1;
				cout << "������� ����: \n";
				cin >> DT1;
				cout << "������� ���������� ����: ";
				cin >> days;
				res = DT1-days;
				cout << "����� ����: " << res;
			}
			else
			{
				string DT1;
				Date DT2;
				cout << "������� ����: \n";
				cin >> DT1;
				DT2 = DT1;
				cout << "������� ���������� ����: ";
				cin >> days;
				res = DT2-days;
				cout << "����� ����: " << res;
			}
		}
		if (z == 3)
		{
			cout << "�������� ����� ����� ����: 1-�� ������; ����� ������-�������: ";
			cin >> z1;
			if (z1 == 1)
			{
				Date DT1,DT2;
				cout << "������� ������ � ������ ����: \n";
				cin >> DT1;
				cin >> DT2;
				if (DT1==DT2)
				{
					cout << "���� �����";
				}
				if (DT1 > DT2)
				{
					cout << "������ ���� ������";
				}
				if (DT1 < DT2)
				{
					cout << "������ ���� ������";
				}
			}
			else
			{
				string DT1,DT2;
				cout << "������� ������ � ������ ����: \n";
				cin >> DT1;
				cin >> DT2;
				if (DT1 == DT2)
				{
					cout << "���� �����";
				}
				if (DT1 > DT2)
				{
					cout << "������ ���� ������";
				}
				if (DT1 < DT2)
				{
					cout << "������ ���� ������";
				}
			}
		}
		if ((z != 1) && (z != 2) && (z != 3) && (z != 0))
		{
			cout << "������ 3: �������� �����\n";
		}
		if (z == 0)
		{
			return 0;
		}
		
		cout << "���������� ������? 0-���; ����� ������- ��\n";
		cin >> z;
		cout << "\n";
		
	} while (z != 0);
	return 0;
}