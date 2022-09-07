// ǥ�� ����� cout, cin
/*
	C++������ iostream�̶�� ��ü������̺귯���� ����� ��� ����
	����� cout ��Ʈ�� ����, �Է��� cin ��Ʈ�� ���۸� ����ؼ� �����
	��Ʈ��(�帣��)�̶�� �ǹ̿� �°� FIFO(first in first out)������ ����
	cout�� cin�� �Լ��� �ƴϸ� <<, >>�� �Լ��̴�.

	cin�� cout�� stdǥ�� namespace�� ���ԵǾ� ����
	using namespace std �� �̿��� namespace�� ������� ���� �� �ִ�

	cin�� �Է¹��۸� �����ϰ� ������ chaining���¸� ����� �������� �Է��� �� �ִ�
	�̶� �����ڴ� space �Ǵ� enter�� ����Ѵ�
	cin >> ����1 >> ����2 >> ����3 >> ....

	��� �� ������ �Ϸ��� ���ڿ� ����� ���๮�� \n�� �����ϴ� ����� ������
	std namespace�� ���Ե� endl�� cout �Ǹ������� �����ϸ� �ȴ�.
*/
// namespace
/*
	C++������ ������, �Լ���, ����ü�� �� ���� �� �浹�� �߻��� �� �ִ� ��츦
	�����ϱ� ���� '�Ҽ�'�� ������ namespace�� ����
	
	namespace [���ӽ����̽���]
	{
		�Լ�, ����ü, ����, Ŭ���� ���
	}

	ȣ�� �� namespace��::��� �� ���·� ȣ���Ѵ�

	�Ź� namespace��:: �� �ٿ����� �ʱ� ���� using namespace��� ����� ����
	using namespace namespace�� -> namespace��:: �� ������� �ʰ� ����� �̸����θ� ��� ����
	Ư�� ��Ҹ� namespace�� ������� �������� using namespace��::��� �� ���

*/
#include <iostream>
using namespace std;

namespace A {
	void printAll(const char* p) {
		cout << "A�� cout\n" << p << endl;
	}
}

namespace B {
	void printAll(const char* p) {
		cout << "B�� cout\n" << p << endl;
	}
}

int main()
{
	int num1, num2, num3;
	cout << "3���� ���� ���� �Է�" << endl;
	cin >> num1 >> num2 >> num3;
	cout << num1 << num2 << num3 << endl;

	cout << "namespace�� Ȱ���� ������ �Լ����� �Լ����" << endl;
	A::printAll("A");
	B::printAll("B");

	return 0;
}