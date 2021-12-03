#include <iostream>

using namespace std;

double input, output;

void kmToOthers()
{
	system("clear");
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n Select a desired option: ";
	cout << "\n\t\t\t\t1. Km --> Miles : ";
	cout << "\n\t\t\t\t2. Km --> Feet : ";
	cout << "\n\t\t\t\t3. Km --> Inches : ";
	int opt;
	cin >> opt;
	switch (opt)
	{
	case 1:
		system("clear");
		cout << "\n\n\n\n\n\n\n\t\t\t\t Enter Value in Kilometers: ";
		input = opt;
		cin >> input;
		output = input * 0.62137;
		cout << "\n\n\t\t\t\t" << input << " km = " << output << " miles ";

		break;
	case 2:
		system("clear");
		cout << "\n\n\n\n\n\n\n\t\t\t\t Enter Value in Kilometers: ";
		input = opt;
		cin >> input;
		output = input * 3280.84;
		cout << "\n\n\t\t\t\t" << input << " km = " << output << " Feet ";

		break;
	case 3:
		system("clear");
		cout << "\n\n\n\n\n\n\n\t\t\t\t Enter Value in Kilometers: ";
		input = opt;
		cin >> input;
		output = input * 39370;
		cout << "\n\n\t\t\t\t" << input << " km = " << output << " Inches ";

		break;
	}
}

void milesToOthers()
{
	system("clear");
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n Select a desired option: ";
	cout << "\n\t\t\t\t1. Miles --> Km : ";
	cout << "\n\t\t\t\t2. Miles --> Feet : ";
	cout << "\n\t\t\t\t3. Miles --> Inches : ";
	int opt;
	cin >> opt;
	switch (opt)
	{
	case 1:
		system("clear");
		cout << "\n\n\n\n\n\n\n\t\t\t\t Enter Value in Miles: ";
		input = opt;
		cin >> input;
		output = input * 1.6093;
		cout << "\n\n\t\t\t\t" << input << " Miles = " << output << " Km ";

		break;
	case 2:
		system("clear");
		cout << "\n\n\n\n\n\n\n\t\t\t\t Enter Value in Miles: ";
		input = opt;
		cin >> input;
		output = input * 5280;
		cout << "\n\n\t\t\t\t" << input << " Miles = " << output << " Feet ";

		break;
	case 3:
		system("clear");
		cout << "\n\n\n\n\n\n\n\t\t\t\t Enter Value in Miles: ";
		input = opt;
		cin >> input;
		output = input * 63360;
		cout << "\n\n\t\t\t\t" << input << " Miles = " << output << " Inches ";

		break;
	}
}

void feetToOthers()
{
	system("clear");
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n Select a desired option: ";
	cout << "\n\t\t\t\t1. Feet --> Km : ";
	cout << "\n\t\t\t\t2. Feet --> Miles : ";
	cout << "\n\t\t\t\t3. Feet --> Inches : ";
	int opt;
	cin >> opt;
	switch (opt)
	{
	case 1:
		system("clear");
		cout << "\n\n\n\n\n\n\n\t\t\t\t Enter Value in Feet: ";
		input = opt;
		cin >> input;
		output = input * 0.000304;
		cout << "\n\n\t\t\t\t" << input << " Feet = " << output << " Km ";

		break;
	case 2:
		system("clear");
		cout << "\n\n\n\n\n\n\n\t\t\t\t Enter Value in Feet: ";
		input = opt;
		cin >> input;
		output = input * 0.000189;
		cout << "\n\n\t\t\t\t" << input << " Feet = " << output << " Miles ";

		break;
	case 3:
		system("clear");
		cout << "\n\n\n\n\n\n\n\t\t\t\t Enter Value in Feet: ";
		input = opt;
		cin >> input;
		output = input * 12;
		cout << "\n\n\t\t\t\t" << input << " Feet = " << output << " Inches ";

		break;
	}
}

int main()
{
start:
	cout << "\n\n\n\n\t\t\t Your Value is is :";
	cout << "\n\t\t\t\t1.Km";
	cout << "\n\t\t\t\t2.Miles";
	cout << "\n\t\t\t\t3.Feet";
	int sele;
	cin >> sele;
	switch (sele)
	{
	case 1:
		kmToOthers();
		break;
	case 2:
		milesToOthers();
		break;
	case 3:
		feetToOthers();
		break;
	}
	cout << "\n\n\t\t\t\tPress 'E' to Exit!";
	char exit;
	cin >> exit;
	if (exit == 'E' || 'e')
	{
		system("clear");
		goto start;
	}
	system("pause");
	return 0;
}
