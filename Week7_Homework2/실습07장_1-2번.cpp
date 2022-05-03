#include "MyTime.h"

void main()
{
	MyTime t1(1,2, 3, 4), t2(5,6,7,8), t3, t4(123456.789);

	t1.print();
	t2.print();
	t3.print();
	t3 = t1.add(t2);
	t3.print();
	t4.print();
}