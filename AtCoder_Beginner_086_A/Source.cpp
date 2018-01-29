/*
問題文
シカのAtCoDeerくんは二つの正整数 a,b を見つけました。 a と b の積が偶数か奇数か判定してください。
*/

#include<iostream>

int main() {
	int a, b;

	std::cin >> a >> b;

	std::cout << (a * b % 2 == 1 ? "Odd" : "Even") << std::endl;

	return 0;
}