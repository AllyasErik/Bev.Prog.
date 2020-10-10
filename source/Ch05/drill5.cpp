#include "std_lib_facilities.h"

int main()
try {
	//1. Helytelen : 	Cout << " Success!\n " ;
		//Helyes megoldas:
			//cout << " Success!\n " ;

	//2. Helytelen : 	cout << " Success!\n;;
		//Helyes megoldas:
			//cout << " Success!\n";

	//3. Helytelen : 	cout << " Success " << !\n ";
		//Helyes megoldas:
			//cout << " Success! " << "\n ";

	//4. Helytelen : 	cout << success << '\n';
		//Helyes megoldas:
			//cout << "Success "<< '\n';

	//5. Helytelen : 	string res = 7; vector<int> v(10); v[5] = res; cout << " Success!\n " ;
		//Helyes megoldas:
			//int res = 7; vector<int> v(10); v[5] = res; cout << " Success!\n " ;

	//6. Helytelen : 	vector<int> v(10); v(5) = 7; if (v(5)!=7) cout << " Success!\n " ;
		//Helyes megoldas:
			//vector<int> v(10); v[5] = 7; if (v[5]==7) cout << " Success!\n " ;

	//7. Helytelen : 	if (cond) cout << " Success!\n " ; else cout << " Fail!\n " ;
		//Helyes megoldas:
			//bool cond=true; if (cond) cout << " Success!\n " ; else cout << " Fail!\n " ;

	//8. Helytelen : 	bool c = false; if (c) cout << " Success!\n " ; else cout << " Fail!\n " ;
		//Helyes megoldas:
			//bool c = true; if (c) cout << " Success!\n " ; else cout << " Fail!\n " ;
	//9. Helytelen : 	string s = " ape " ; boo c = " fool " <s; if (c) cout << " Success!\n " ;
		//Helyes megoldas:
			//string s = " ape " ; bool c = " fool " <s; if (!c) cout << " Success!\n " ;

	//10. Helytelen : 	string s = " ape " ; if (s== " fool " ) cout << " Success!\n " ;
		//Helyes megoldas:
			//string s = " ape " ; if (s!= " fool " ) cout << " Success!\n " ;

	//11. Helytelen : 	string s = " ape " ; if (s== " fool " ) cout < " Success!\n " ;
		//Helyes megoldas:
			//string s = " ape " ; if (s!= " fool " ) cout << " Success!\n " ;

	//12. Helytelen : 	string s = " ape " ; if (s+ " fool " ) cout < " Success!\n " ;
		//Helyes megoldas:
			//string s = " ape " ; if (s!=" fool " ) cout << " Success!\n " ;

	//13. Helytelen : 	vector<char> v(5); for (int i=0; 0<v.size(); ++i) ; cout << " Success!\n " ;
		//Helyes megoldas:
			//vector<char> v(5); for (int i=0; i<v.size(); ++i) ; cout << " Success!\n " ;

	//14. Helytelen : 	vector<char> v(5); for (int i=0; i<=v.size(); ++i) ; cout << " Success!\n " ;
		//Helyes megoldas:
			//vector<char> v(5); for (int i=0; i<=v.size(); ++i) ; cout << " Success!\n " ;

	//15. Helytelen : 	string s = " Success!\n " ; for (int i=0; i<6; ++i) cout << s[i];
		//Helyes megoldas:
			//string s = " Success!\n " ; for (int i=0; i<s.size(); ++i) cout << s[i];

	//16. Helytelen : 	if (true) then cout << " Success!\n " ; else cout << " Fail!\n " ;
		//Helyes megoldas:
			//if (true) cout << " Success!\n " ; else cout << " Fail!\n " ;

	//17. Helytelen : 	int x = 2000; char c = x; if (c==2000) cout << " Success!\n " ;
		//Helyes megoldas:
			//int x = 2000; int c = x; if (c==2000) cout << " Success!\n " ;

	//18. Helytelen : 	string s = " Success!\n " ; for (int i=0; i<10; ++i) cout << s[i];
		//Helyes megoldas:
			//string s = " Success!\n " ; for (int i=0; i<s.size(); ++i) cout << s[i];

	//19. Helytelen : 	vector v(5); for (int i=0; i<=v.size(); ++i) ; cout << " Success!\n " ;
		//Helyes megoldas:
			//vector <int> v(5); for (int i=0; i<=v.size(); ++i) ; cout << " Success!\n " ;

	//20. Helytelen : 	int i=0; int j = 9; while (i<10) ++j; if (j<i) cout << " Success!\n " ;
		//Helyes megoldas:
			//int i=0; int j = 9; while (i<10) ++i; if (j<i) cout << " Success!\n " ;

	//21. Helytelen : 	int x = 2; double d = 5/(x – 2); if (d==2*x+0.5) cout << " Success!\n " ;
		//Helyes megoldas:
			//int x = 2; double d = 5/x; if (d!=2*x+0.5) cout << " Success!\n " ;

	//22. Helytelen : 	string<char> s = " Success!\n " ; for (int i=0; i<=10; ++i) cout << s[i];
		//Helyes megoldas:
			//string s = " Success!\n " ; for (int i=0; i<=s.size(); ++i) cout << s[i];

	//23. Helytelen : 	int i=0; while (i<10) ++j; if (j<i) cout << " Success!\n " ;
		//Helyes megoldas:
			//int i=0, j=9; while (i<10) ++i; if (j<i) cout << " Success!\n " ;

	//24. Helytelen : 	int x = 4; double d = 5/(x – 2); if (d=2*x+0.5) cout << " Success!\n " ;
		//Helyes megoldas:
			//int x = 4; double d = 5/(x-2); if (d!=2*x+0.5) cout << " Success!\n " ;

	//25. Helytelen : 	cin << " Success!\n " ;
		//Helyes megoldas:
			//cout << " Success!\n " ;

	return 0;
}

catch (exception& e) 
{
	cerr << "error: " << e.what() << '\n';
	keep_window_open();
	return 1;
}
catch (...) 
{
	cerr << "Oops: unknown exception!\n";
	keep_window_open();
	return 2;
}