// C++의 문자열 자료형
// C++에서 공백을 포함하여 한 줄을 모두 문자열 형태로 입력 받고자 한다면 getline() 함수를 사용할 수 있습니다.

#include <iostream>
#include <string>

using namespace std;

int main(void) {
	string input;
	getline(cin, input);
	for (int i = 0; i < input.size(); i++) {
		cout << input[i] << '\n';
	}
	system("pause");
	return 0;
}