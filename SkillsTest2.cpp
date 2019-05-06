#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int a,b,c;

	cout<<"Enter First Number: ";
	cin>>a;
	cout<<"Enter Second Number: ";
	cin>>b;
	cout<<"Enter Third Number: ";
	cin>>c;

	if (a> b && a > c)
		cout<< "\nThe LARGEST of the three numbers is: "<<a<<endl;
	else if (b > a && b>c)
		cout<<"\nThe LARGEST of the three numbers is: "<<b<<endl;
	else 
		cout<<"\nThe LARGEST of the three numbers is: "<<c<<endl;

getch();
return 0;

}

	