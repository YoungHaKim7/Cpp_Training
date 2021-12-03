#include <iostream>
#include <typeinfo>

enum Color
{
	COLOR_BLACK,
	COLOR_RED,
	COLOR_BLUE,
	COLOR_Red,
	COLOR_GREEN,
	COLOR_SKYBLUE,
};

enum Feeling
{
	HAPPY,
	JOY,
	TIRED,
	BLUE,
};

int main()
{
	using namespace std;

	Color my_color = COLOR_BLACK;

	cout << my_color << " " << COLOR_BLACK << endl;

	return 0;
}
