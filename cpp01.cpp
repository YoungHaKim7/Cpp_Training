#include <iostream>
#include "std_lib_facilities.h"
using namespace std;
int main()
{
	cout << "성과 이름을 입력하세요\n ";
	string first;
	string second;
	cin >> first >> second;
	string name = first + ' ' + second;
	cout << "안녕하세요, " << name << '\n';
}
