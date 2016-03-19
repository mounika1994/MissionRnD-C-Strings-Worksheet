/*
OVERVIEW: Given a string, remove all spaces in it.
E.g.: Input: "abd scd". Output: "abdscd"

INPUTS: A string.

OUTPUT: Return string after removing spaces.

ERROR CASES: Return '\0' for invalid inputs.

NOTES: Don't create new string.
*/

char* removeSpaces(char *str) {
	int c = 0;
	if (str == " " || str == '\0')
		return '\0';
	for (int i = 0; str[i] != '\0'; i++)
	if (str[i] != ' ')
		str[c++] = str[i];
	str[c] = '\0';
	return str;
	
}