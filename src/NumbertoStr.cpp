/*
OVERVIEW: Given a float number ,Convert it into a string 

INPUTS: A Float,Final string ,How many digits after decimal has to be displayed .
Its zero for integers.


OUTPUT: No need to output anything ,Modify the str in function parameter such that it
now holds the string format of the float number specified

Example : number_to_str(345,str,0);
Should copy "345\0" in the str;
number_to_str(345.342,str,2);
Should copy "345.34" in the str;

NOTES: Don't create new string.

*/

#include <stdio.h>
#include<math.h>
int numreverse(int n)
{
	int rev = 0;
	while (n>0)
	{
		rev = rev * 10 + n % 10;
		n /= 10;
	}
	return rev;
}
void number_to_str(float number, char *str, int afterdecimal){
	int i = 0, fn, bn;
	if (number < 0)
	{
		number *= -1;
		*(str + i) = '-';
		i++;
	}
	fn = number;
	bn = (number - fn)*pow(10.0, afterdecimal);
	fn = numreverse(fn);
	bn = numreverse(bn);
	while (fn>0)
	{
		*(str + i) = fn % 10 + 48;
		fn = fn / 10;
		i++;
	}
	if (afterdecimal > 0)
	{
		*(str + i) = '.';
		i++;
		while (bn > 0)
		{
			*(str + i) = bn % 10 + 48;
			bn = bn / 10;
			i++;
		}
	}
	*(str + i) = '\0';
}

