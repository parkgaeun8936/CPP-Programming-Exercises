#include "MyTime.h"

// (5) 하나의 함수를 inline이 아니라 외부에서 구현하는 경우
void MyTime::read()
{
	cout << "새로운 시간을 입력[h m s msec] : ";
	cin >> hour >> min >> sec >> msec;
}
