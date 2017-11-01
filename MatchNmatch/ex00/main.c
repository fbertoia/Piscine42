#include <stdio.h>

int		match(char *s1, char *s2);

int		main()
{
	int i;
	i = 0;
	char s1[] = " abcabc";
	char s2[] = " ***abc***abdc";
	i = match(s1, s2);
	printf("%d", i);	
	return 0;
}
