#include "std_lib_facilities.h"

int main()
try
{
	int birth_year = 2001;
	int a,b,c,d;


	cout << showbase
	<< birth_year << "\tDecimal\n"
	<< hex << birth_year << "\tHexadecimal\n" 
	<< oct << birth_year << "\tOctal\n";

	cout << '\n';

	cout << noshowbase << dec << 19 << "\n\n";

	cin >> a >>oct >> b >> hex >> c >> d;
	cout << a << '\t' << b << '\t' << c << '\t' << d << "\n\n" ;

	cout  << defaultfloat
	<< 1234567.89 << "\tdefaultfloat\n"
	<< fixed << 1234567.89 << "\tfixed\n"
	<< scientific << 1234567.89 << "\tscientific\n";
	cout << '\n';

	cout << '|' << setw(11) << "Vasarhelyi" << '|' << setw(8) << "Erik" << '|' << setw(9) << "52081723" << '|' << setw(26) << "erik.vasarhelyi@yahoo.com"<< endl;
	cout << '|' << setw(11) << "Todoroki" << '|' << setw(8) << "Jason" << '|' << setw(9) << "52973845" << '|' << setw(26) << "tjason@yahoo.com" << endl;
	cout << '|' << setw(11) << "Uzumaki" << '|' << setw(8) << "Shon" << '|' << setw(9) << "52982451" << '|' << setw(26) << "uzushon1999@gmail.com" << endl;
	cout << '|' << setw(11) << "Louise" << '|' << setw(8) << "Brandon" << '|' << setw(9) << "52786425" << '|' << setw(26) << "LBran85@gmail.com" << endl;
	cout << '|' << setw(11) << "Stark" << '|' << setw(8) << "Jhon" << '|' << setw(9) << "52987234" << '|' << setw(26) << "JStark79@gmail.com" << endl;
	cout << '|' << setw(11) << "Jaeger" << '|' << setw(8) << "Eren" << '|' << setw(9) << "52083496" << '|' << setw(26) << "Jaeger.E@gmail.com" << endl;



	return 0;
}
catch(exception& e)
{
	cerr << e.what() << endl;
	return 1;
}
catch(...)
{
	cerr << "Something unexpected happened." << endl;
	return 2;
}