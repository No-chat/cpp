// 표준 입출력 cout, cin
/*
	C++에서는 iostream이라는 객체지향라이브러리로 입출력 기능 제공
	출력은 cout 스트림 버퍼, 입력은 cin 스트림 버퍼를 사용해서 입출력
	스트림(흐르다)이라는 의미에 맞게 FIFO(first in first out)구조를 따름
	cout과 cin은 함수가 아니며 <<, >>가 함수이다.

	cin과 cout은 std표준 namespace에 포함되어 있음
	using namespace std 를 이용해 namespace를 사용하지 않을 수 있다

	cin은 입력버퍼를 내장하고 있으며 chaining형태를 사용해 여러값을 입력할 수 있다
	이때 구분자는 space 또는 enter를 사용한다
	cin >> 변수1 >> 변수2 >> 변수3 >> ....

	출력 시 개행을 하려면 문자열 상수에 개행문자 \n을 포함하는 방법도 있으나
	std namespace에 포함된 endl을 cout 맨마지막에 포함하면 된다.
*/
// namespace
/*
	C++에서는 변수명, 함수명, 구조체명 등 같을 때 충돌이 발생할 수 있는 경우를
	방지하기 위해 '소속'의 개념인 namespace를 제공
	
	namespace [네임스페이스명]
	{
		함수, 구조체, 변수, 클래스 등등
	}

	호출 시 namespace명::요소 의 형태로 호출한다

	매번 namespace명:: 을 붙여주지 않기 위해 using namespace라는 기능을 제공
	using namespace namespace명 -> namespace명:: 을 사용하지 않고 요소의 이름으로만 사용 가능
	특정 요소만 namespace를 사용하지 않으려면 using namespace명::요소 로 사용

*/
#include <iostream>
using namespace std;

namespace A {
	void printAll(const char* p) {
		cout << "A의 cout\n" << p << endl;
	}
}

namespace B {
	void printAll(const char* p) {
		cout << "B의 cout\n" << p << endl;
	}
}

int main()
{
	int num1, num2, num3;
	cout << "3개의 변수 동시 입력" << endl;
	cin >> num1 >> num2 >> num3;
	cout << num1 << num2 << num3 << endl;

	cout << "namespace를 활용한 동일한 함수명의 함수출력" << endl;
	A::printAll("A");
	B::printAll("B");

	return 0;
}