#include <iostream>
#include <Windows.h>

void f012()
{
	std::cout << "  ����� ����� ������ ����� ����� �� �����, ����� ������ � ����������, ��� ������� ��� �������. ����� �����...��������? ������ �� ��� ������� ���� �� ����� � ����� �� ���� �������. ������ ������ �������� ����� ��������, ��� ��������� �����. �� �� ��������, �� ��������� ��� � ����� ������� ��� ���, ������ ������ � ������ ��������� ����� �������. � ���..  ������ ������ ��� ��� ���� ��������. �� ��� � ����� � ������� ������. ���? �������, ��� ��� �������� ��� � ������. \n\n ���� ������ ������ ������ � ������ � ���� ����� �����. \n\n ������ �� ������ ����, �������. >:(  ";
	system("pause");
}

void f011()
{
	std::cout << "  \n\n ������ ������������� ����������. ��� ����� �� ����� ����� ��� ������ ������. ��� ������� �� ����� � ������� � ���� �����. ����� ����� �� �������?! ��� �������, �� �� ����� ��� �� ��� ��� ������! ������ ������ � ��� �� ������� ���� ������� ������� � ����� ��� ���������� ��� ��������, �������� ������ �� ��� ��������. \n\n  ���� ������ ������������ ��� ������ ���� ������������� �����. ������? ��! ������ �������� �������� � �� ����� ������ �� ����� ������. ������ ��������� � ������� � ������ �������. ������ ������ ��� ������ ������ ���� ���� � �������� �e ��������� � ������� ����.\n\n  ������ �� ����� �������� ���� �������� � ���� ������ �������. �������, �� ������ ������� �����!!)";
	system("pause");
}

void f00()
{
	std::cout << "  ������-�������� ������. ������ �������� ��� ���, ������ ��� �� ��� ����� �����. \n ������ ����� ���� �� ������, ������� ������� ������. ������ ������ ����� �� ������� �������, �� ����� � ������ ��������� �� ������. �������� ��� ������ � ����� � ������, �� ���� ����������� ���� �����. \n ������ �� �������, ����� �� ��� ������� ����� � ��������� ��� ������� ���������.";
	std::cout << " ��� ��� �� �� ��������, ������� �� ����� ��� ��������� ������� � �������� ����� ����� ������� �������?\n\n 1-�� ����� 2-���� ������� ������\n\n �����:";
	int a;
	std::cin >> a;
	if (a==1)
	{
		std::cout << "  ����� �� ������)\n\n ������ ����� � ������ � ������� ��� �� ���� �����. ������ ����� ���. ����� ���� ��������� ����?  ";
		system("pause");
		f011();
	}
	else if (a==2)
	{
		std::cout << "  ��..�� �����������?\n\n ������ ������������ � ������ ������� � ������� �������, ��� ���� ����� ����� ������ �����. ��� ������� � ������� � ������� �������� ����, ������� ���� ������� ��� �������. �� ���? ���� �� ������.  ";
		system("pause");
		f012();
	}
}

void StartGame()
{
	std::cout << "���� ���� �� ����� ������� \n\n";
	system("pause");
	f00();
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	StartGame();
}