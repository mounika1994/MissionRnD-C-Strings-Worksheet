/*
OVERVIEW: Given a string, return the letter at Kth index from the end of the string.
E.g.: Input: "qwertyui", 3. Output: 't' (index starting from zero).

INPUTS: A string and value of K.

OUTPUT: Return the letter at Kth index from the end of the string (index starting from zero).

ERROR CASES: Return '\0' for invalid inputs

NOTES:
*/
int leng(char *a)
{
	int i, j = 0;
	for (i = 0; *(a + i) != '\0'; i++)
		j++;
	return j;
}
char KthIndexFromEnd(char *str, int K) {
	int i;
	if (str == '\0' || str == " " || K<0)
		return '\0';
	if (K>leng(str))
		return '\0';
	for (i = 0; *(str + i) != '\0'; i++)
	{
		if (*(str + i + K + 1) == '\0')
			return *(str + i);
	}
}