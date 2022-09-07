// Data Types
/*
	C���� �ٸ��� bool type�� �����ϸ� 1byte ũ�⿡ �ش�ȴ�.
	bool type�� ����ϸ� true�� 1, false�� 0���� ���, 0�� ������ ��� ���� true
	-> cast ������ (bool)�� ���� ����ȯ ���ָ� true�� ������ 1�� ����� �ȴ�.

	C���� ���������� �ڵ� ����ȯ�� �����ؾ� �Ѵ�. 
	- ������ ���Խ� Rvalue�� ������ Lvalue�� type�� �°� ��ȯ��
	- ���� �� ũ�Ⱑ ū type�� ���缭 ����ȯ�� ex) float + int => float(float�� int�� �� �� 4byte�̱� ������ �Ǽ����� float�� ũ�Ⱑ �� ũ��)
	- cast�����ڸ� �̿��� ���� ����ȯ�� �� �� �ִ�
		- (double), (int)�� ���� ����ϰų� static_cast<double>, static_cast<int>�� ���

	�������� �⺻���� int�̰� �Ǽ����� �⺻���� double�̴�.

	const Ű���带 ����ؼ� ����� ���� �� �ִ�.
*/
// AND / OR ������
/*
	AND , OR������ ��� �� ������ ��
	������ ����Ǵ� ������ ��Ȯ�� �˾ƾ��Ѵ�.

*/
#include <iostream>
using namespace std;

int main()
{
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);

	// 1�� �ƴ� ���� bool type ���� ����ȯ
	cout << (bool)2 << false << endl;

	// AND ������ ����
	int y = 0;
	true && y++;
	cout << y << endl;
	false && y++;
	cout << y << endl;

	// OR ������ ����
	int x = 0;
	true || x++;
	cout << x << endl;
	false || x++;
	cout << x << endl;

	return 0;
}