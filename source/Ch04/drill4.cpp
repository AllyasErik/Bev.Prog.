#include "std_lib_facilities.h"

int main()
{
	double sum=0;
	vector <double> v;
	double number;
	double min = 0, max = 0;
	string me;

	while(cout << "\nEnter the number: " && cin >> number)
	{
		cout << "Please give the lenght(cm, m, in, ft): ";
		cin >> me;


		if(min == 0 && max == 0)
		{
        	min = max = number;
        	cout << "\t\nIt's the smallest and the largest at the moment\n";
		}
        if(number > max)
		{
			max=number;
			cout << "\t\nIt's the largest so far\n";
		}
		if(number < min)
		{
			min=number;
			cout << "\t\nIt's the smallest so far\n";
        }


		if (me == "m") 
		{
			cout << number << me;
			v.push_back(number);
		}
		else
	        if (me == "cm") 
	        {
	        	cout << number << me << " = " << number/100 << "m\n";
	        	number= number/100;
	       		v.push_back(number);
	       	}
	   		else 
	   			if (me == "in") 
	        	{
	        		cout << number << me << " = " << number*0.0254 << "m\n";
	        		number= number*0.0254;
	        		v.push_back(number);
	        	}
	        	else
			        if(me == "ft")
			        {
			        	cout << number << me << " = " << number*0.3048 << "m\n";
			        	number= number*0.3048;
			        	v.push_back(number);
			        }
			        else error("You have entered an illegal representation os unit.\n");
		sort(v);
	}
	cout << "Number of values entered: " << v.size()<< "\n";
	cout << "Values converted into meter in increasing order: \n";

    for(int i=0; i < v.size(); ++i)
   	{
   		cout << v[i] << "  ";
    	sum = sum + v[i];
    }

    cout << "\nSum of values in meter: " << sum << "\n";
   	cout << "Smallest value: " << min << "\n";
   	cout << "Largest value: " <<max<< "\n";
	return 0;
}