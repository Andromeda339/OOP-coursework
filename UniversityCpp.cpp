#include "DatabaseContext.h"

bool menu()
{
	string mode = "light mode";
	cout << "=====================================" << endl;
	cout << "     University Management System    " << endl;
	cout << "=====================================" << endl;
	cout << ".0.Exit.............................." << endl;
	cout << "-1-Show list of students-------------" << endl;
	cout << "-2-Show list of teachers-------------" << endl;
	cout << "-3-Show list of courses--------------" << endl;
	cout << "-4-Show list of faculties------------" << endl;
	cout << "-5-Show list of departments----------" << endl;
	cout << "-6-Show list of deaneries------------" << endl;
	cout << "-7-Show rules of the university------" << endl;
	cout << "-8-Add new rule----------------------" << endl;
	cout << "-9-Delete a rule---------------------" << endl;
	cout << "-10-Switch to " + DatabaseContext::getMode() + "-------------" << endl;
	cout << "-------------------------------------" << endl;
	cout << "---------------Choose a task to do: ";

	int cases = -1;
	cout << "";
	cin >> cases;
	system("cls");
	switch (cases)
	{
	case 0:
		return false;
	case 1:
		DatabaseContext::ExecuteTask1();
		system("pause");
		break;
	case 2:
		DatabaseContext::ExecuteTask2();
		system("pause");
		break;
	case 3:
		DatabaseContext::ExecuteTask3();
		system("pause");
		break;
	case 4:
		DatabaseContext::ExecuteTask4();
		system("pause");
		break;
	case 5:
		DatabaseContext::ExecuteTask5();
		system("pause");
		break;
	case 6:
		DatabaseContext::ExecuteTask6();
		system("pause");
		break;
	case 7:
		DatabaseContext::ExecuteTask7();
		system("pause");
		break;
	case 8:
		DatabaseContext::ExecuteTask8();
		system("pause");
		break;
	case 9:
		DatabaseContext::ExecuteTask9();
		system("pause");
		break;
	case 10:
		DatabaseContext::ExecuteTask10();
		break;
	}
	system("cls");
	return true;
}

void PrintLogo()
{
	fstream logo;
	string text;
	logo.open("logo.txt");
	cout << "\n\n\n\n\n";
	while (getline(logo, text))
	{
		cout << text << endl;
		Sleep(100);
	}
	system("pause");
	system("cls");
}

int main()
{
	DatabaseContext::initialize();
	PrintLogo();
	while (menu());
}