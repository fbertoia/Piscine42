
#include <stdio.h>
#include <unistd.h>

int		ft_putchar(int);
void	ft_putstr(char *str);
int		ft_strcmp(char *s1, char *s2);
int		ft_strlen(char *str);
void	ft_swap(int *a, int *b);

int main()
{
	ft_putchar('c');
	ft_putstr("yes");
	printf("%d", ft_strcmp("jean", "jeans"));
	printf("%d", ft_strlen("abc"));
}

