#pragma once
#include <iostream>
#include <iomanip>
using namespace std;

class MyTime {
	int hour, min, sec, msec;

public:
	// ��� �ʱ�ȭ ����Ʈ ������ ���
	MyTime(int h = 0, int m = 0, int s = 0, int ms = 0) {
		hour= h;
		min = m;
		sec = s;
		msec= ms;
	}
	// ��� �ʱ�ȭ ����Ʈ ����� ���
	//MyTime(int h = 0, int m = 0, int s = 0, int ms = 0) : hour(h), min(m), sec(s), msec(ms) { }

	// 2�� ����
	MyTime(double d) { convert(d); }

	void convert(double duration) {
		int total = (int)duration;
		hour = total / (60 * 60);

		total %= (60 * 60);
		min = total / 60;
		sec = total % 60;
		msec = (int)((duration - (int)duration) * 1000 + 0.5);
	}
	void print() {
		cout << fixed << setfill('0') <<
			setw(2) << hour << ":" <<
			setw(2) << min << ":" <<
			setw(2) << sec << ":" <<
			setw(3) << msec << endl;
	}

	MyTime add(MyTime t) {
		double d = (hour + t.hour) * 3600
			+ (min + t.min) * 60
			+ (sec + t.sec)
			+ (msec + t.msec) / 1000.0;

		MyTime result;
		result.convert(d);
		return result;
	}
	void read() {
		cout << "���ο� �ð��� �Է�[h m s msec] : ";
		cin >> hour >> min >> sec >> msec;
	}
};