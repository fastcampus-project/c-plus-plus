// C++의 네임스페이스
// using 키워드를 이용하여 표준 라이브러리(std)를 모두 사용하도록 처리할 수 있다.

#include <iostream>
#include <string>

using namespace std;

int main(void) {
	string input;
	cin >> input;
	cout << input << endl;
	system("pause");
	return 0;
}