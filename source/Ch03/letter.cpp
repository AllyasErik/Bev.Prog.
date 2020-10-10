#include "std_lib_facilities.h"

int main()
{
	string my_name,first_name, friend_name;
	char friend_sex = 0;
	int age;

	cout << "\nPlease give your name: ";
	cin >> my_name;
	cout << "\nEnter the name of the person you want to write to: "; 
	cin >> first_name;
	cout << "\nEnter the other friend's name: ";
	cin >> friend_name;
	cout << "\nPlease, depending on your friend's sex, type f(for female) or m(for male): ";
	cin >> friend_sex;
	cout << "\nPlease, write down the recipient's age: ";
	cin >> age;

	cout << "\nDear "<<first_name<<",\n"; 
	cout << "How are you? I am fine. I miss you. We have not seen each other for a long time. We should meet. There is a good restaurant nearby. We should try it out.\n";
	cout << "Have you seen "<<friend_name<<" lately? ";

	if(friend_sex=='m')
		cout << "If you see "<<friend_name<< " please ask him to call me. ";
	else 
		if(friend_sex=='f')
			cout << "If you see "<<friend_name<< " please ask her to call me. ";
	if(age <= 0 || age >= 100)
		simple_error("\nYou're kidding!");
	else
	{	
		cout << "I hear you just had a birthday and you are "<<age<< " years old. ";
		if(age <= 12)
			cout << "Next year you will be "<<age+1<<". ";
		else
			if(age == 17)
				cout << "Next year you will be able to vote. ";
			else 
				if(age >= 70)
					cout << "I hope you are enjoying retirement. ";
	}
	cout << "\n\nYours sincerely,\n\n\n";
	cout << my_name << "\n";


}