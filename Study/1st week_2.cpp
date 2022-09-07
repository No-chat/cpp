// Data Types
/*
	C언어와 다르게 bool type이 존재하며 1byte 크기에 해당된다.
	bool type을 출력하면 true는 1, false는 0으로 출력, 0을 제외한 모든 수는 true
	-> cast 연산자 (bool)로 강제 형변환 해주면 true는 무조건 1로 출력이 된다.

	C언어와 마찬가지로 자동 형변환에 유의해야 한다. 
	- 변수에 대입시 Rvalue는 무조건 Lvalue의 type에 맞게 변환됨
	- 연산 시 크기가 큰 type에 맞춰서 형변환됨 ex) float + int => float(float와 int는 둘 다 4byte이긴 하지만 실수형인 float의 크기가 더 크다)
	- cast연산자를 이용해 강제 형변환을 할 수 있다
		- (double), (int)와 같이 사용하거나 static_cast<double>, static_cast<int>로 사용

	정수형의 기본형은 int이고 실수형의 기본형은 double이다.

	const 키워드를 사용해서 상수를 만들 수 있다.
*/
// AND / OR 연산자
/*
	AND , OR연산자 사용 시 주의할 점
	조건이 연산되는 범위를 정확히 알아야한다.

*/
#include <iostream>
using namespace std;

int main()
{
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);

	// 1이 아닌 수의 bool type 강제 형변환
	cout << (bool)2 << false << endl;

	// AND 연산자 예제
	int y = 0;
	true && y++;
	cout << y << endl;
	false && y++;
	cout << y << endl;

	// OR 연산자 예제
	int x = 0;
	true || x++;
	cout << x << endl;
	false || x++;
	cout << x << endl;

	return 0;
}