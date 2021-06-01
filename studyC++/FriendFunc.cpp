#include <stdio.h>

class Date;  // Date��� Ŭ������ Time���� �ؿ� �����Ƿ� ������ ���� ������� ��
class Time {
	friend void OutToday(Date&, Time&); 
private:
	int hour, min, sec; 
public:
	Time(int h, int m, int s) { hour = h; min = m; sec = s; }
};

class Date {
	friend void OutToday(Date&, Time&);
private:
	int year, month, day;
public:
	Date(int y, int m, int d) { year = y; month = m; day = d; }
};

void OutToday(Date& d, Time& t) {
	printf("������ %d�� %d�� %d���̸�\n���� �ð��� %d:%d:%d �Դϴ�.\n",
		d.year, d.month, d.day, t.hour, t.min, t.sec); 
}

int main() 
{
	Date d(2021, 06, 01); 
	Time t(15, 23, 56); 
	OutToday(d, t); 

	return 0; 
}