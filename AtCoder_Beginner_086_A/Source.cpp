/*
��蕶
�V�J��AtCoDeer����͓�̐����� a,b �������܂����B a �� b �̐ς�������������肵�Ă��������B
*/

#include<iostream>

int main() {
	int a, b;

	std::cin >> a >> b;

	std::cout << (a * b % 2 == 1 ? "Odd" : "Even") << std::endl;

	return 0;
}