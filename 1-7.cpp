// C++의 문자열 자료형
// C++의 string은 다른 자료형으로의 변환이 간편합니다.

#include <iostream>
#include <string>

using namespace std;

int main(void) {
	int i = 123;
	string s = to_string(i);
	cout << "정수 -> 문자열: " << s << endl;
	s = "456";
	i = stoi(s);
	cout << "문자열 -> 정수: " << i << endl;
	system("pause");
	return 0;
}