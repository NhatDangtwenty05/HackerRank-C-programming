#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main()
{
	char c[] = "T1 3roibe~o";
	int lower = 0, upper = 0, digit = 0, alpha = 0;

	for(int i = 0;i < strlen(c);i++)
	{
		if(islower(c[i]))
			lower++;
		else if(isupper(c[i]))
			upper++;
		else if(isdigit(c[i]))
			digit++;
		else if(isalpha(c[i]))
			alpha++;
	}
	printf("lower: %d\nupper: %d\ndigit: %d\nalpha: %d\n", lower, upper, digit, alpha);

	char character[100];
	fgets(character, sizeof(character), stdin);

	for(int i = 0;i < strlen(character);i++)	// char * temp = strupr(character);		>>> *pointer
		character[i] = toupper(character[i]);	//or 	strupr(character);
	printf("%s\n", character);

	for(int i = 0;i < strlen(character);i++)	//	char * temp = strlwr(character);	>>> *pointer
		character[i] = tolower(character[i]);	//or 	strlws(character);
	printf("%s\n", character);

	char a[10], b[10];
	gets(a);
	gets(b);
	int compare = strcmp(a, b);	//	a > b return 1,		a == b return 0, 	a < b return -1	 by value(ascII), ex:	asc(a[1]) = a = 97 < asc(b[1]) = b = 98 >>> return -1 
	if(compare == 0)
		printf("they are same\n");
	else
		printf("thay are not same\n");

	strcat(a, b);	//concatenation >>>	a = a + b, 	b = b
	printf("%s\n", a);
	strcpy(a, b);	//coppy a = b,	b = b
	printf("%s\n", a);
	strrev(a); 	//reverse a = abc >>> a = cbq
	printf("%s\n", a);
	char * pos = strstr(a, b); // if( b belong a ) return firt_position[b] belong a 	else return NULL
	if(pos != NULL)
		printf("%s\n", pos);
	char ch[10];
	gets(ch);
	memset(ch, -1, sizeof(ch)); // just -1 or 0 >>> c[] = -1 -1 -1 -1 ... -1
	memset(c, 0, sizeof(ch)); // >>> c[] = 0 0 0 0 ... 0

	int n = atoi(ch); // string >>> value(number) int 		"number != character"
	printf("%d\n", n);
	int l = atoll(ch); // string >>> value(number) long long 
	printf("%lld", l);
	return 0;
}