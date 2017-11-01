#include <stdio.h>

int		nmatch(char *s1, char *s2);

int		main()
{
	int i;
	i = 0;
	char s1[] = "abcabcabc";
	char s2[] = "**abc*";
	i = nmatch(s1, s2);
	printf(" i = %d, s1 = %s, s2 = %s", i, s1, s2);	
	return 0;
}
