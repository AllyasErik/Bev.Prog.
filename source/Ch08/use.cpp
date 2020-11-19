#include "std_lib_facilities.h"
#include "my.h"
int foo;

int swap_v(int a, int b)
{
	int temp; temp = a; a=b; b=temp;
	cout << "swap_v :" << a << ' ' << b << endl;	
}

int swap_r(int& a, int& b)
{
	int temp; temp = a; a=b; b=temp;
	cout << "swap_r :" << a << ' ' << b << endl;
}

int swap_cr(int& a, int& b)
{
	int temp; temp = a; a=b; b=temp;
	cout << "swap_cr :" << a << ' ' << b << endl;
}

int main()
{
	/*
	foo=7;
	print_foo();
	print(99);

	int x = 7;
	int y = 9;
	swap_v(x,y);
	swap_v(7,9);

	const int cx = 7;
	const int cy = 9;
	swap_r(cx,cy);
	swap_r(7.7,9.9);
	
	double dx = 7.7;
	double dy = 9.9;
	swap_cr(dx,dy);
	swap_cr(7.7,9.9);
*/
	int x1=7;
	int y1=9;
	int x2=7;
	int y2=9;
	cout << "1. ";
	cout << "mainben: " << x1 << ' ' << y1 << '\n';
	swap_v(x1,y1);
	swap_cr(x1,y1);

	cout << "\n\n";
	cout << "2. ";
	cout << "\nmainben: " << x2 << ' ' << y2 << '\n';
	swap_r(x2,y2);

	cout << "\n\n";
	cout << "3. ";
	cout << "mainben: " << '7' << ' ' << '9' << '\n';
	swap_v(7,9);
	//swap_r(7,9); //nem fut le

	
	cout << "\n\n";
	const int cx1=7;
	const int cy1=9;
	cout << "4. ";
	cout << "mainben: " << cx1 << ' ' << cy1 << '\n';
	swap_v(cx1,cy1);
	const int cx2=7;
	const int cy2=9;
	//swap_r(cx2,cy2); //nem mukodik, mert egy const erteket nem lehet referencianak atadni


	cout << "\n\n";
	cout << "5. ";
	cout << "mainben: " << "7.7" << ' ' << "9.9" << '\n';
	swap_v(7.7,9.9); // egeszkent veszi es nem doublekent

	cout << "\n\n";
	double dx1 = 7.7;
	double dy1 = 9.9;
	double dx2 = 7.7;
	double dy2 = 9.9;
	cout << "6. ";
	cout << "mainben: " << dx1 << ' ' << dy1 << '\n';
	swap_v(dx1,dy1);
	//swap_r(dx2,dy2); //nem fut le


	cout << "\n\n";
	cout << "7. ";
		cout << "mainben: " << "7.7" << ' ' << "9.9" << '\n';
	swap_v(7.7,9.9);
	//swap_r(7.7,9.9);
	//cout << "swap_r mainben: " << x << ' ' << y << '\n';

	return 0;
}
