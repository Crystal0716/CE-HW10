#include<iostream>
#include<stdio.h>
using namespace std ; 
#include<iomanip>
int main()
{
	int a , b , c , d , e ;
	b = 0 ;
	c = 0 ;
	d = 0 ;
	e = 0 ;
	do 
	{
		cout << "Enter an integer , 99 to end 1: " ;
		cin >> a ;
		if ( a % 2 == 1 && a !=99)
		{
			cout << "The number is : " << a << endl ;
			c = c + 1 ;
			b = b + a ;
		}
		else if ( a % 2 == 0 && a !=  99 )
		{
			cout << "The number is : " << a << endl ;
			d = d + 1 ;
			e = e + a;
		}
		else 
		{
			c = c + 0 ;
			b = b + 0 ;
			d = d + 0 ;
			e = e + 0 ;
		}
	}
	while ( a != 99 );
	{
	if ( d == 0)
		cout << "No even number entered "<< endl;
	else 
		cout << "Total " << d << " even numbers , sum = " << e << endl;
	if ( b == 0)
		cout << "No odd number entered " << endl ;
	else 
		cout << "Total " << c << " odd numbers , sum = " << b << endl ;
	}
cout << "Thank you ";
return(0);

}