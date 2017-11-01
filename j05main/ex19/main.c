#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int		main(void)
{
    char dest[100] = "abcd";
    char src[100] = "defdss";
    
    // printf("%lu\n", strlcat(dest, src, 12));
    printf("%u\n", ft_strlcpy(dest, src, 10));  
    printf("%s\n", dest);    


    char dest1[100] = "abcd";
    char src1[100] = "defdss";
    
    // printf("%lu\n", strlcat(dest, src, 12));
    printf("%lu\n", strlcpy(dest1, src1, 10));  
    printf("%s\n", dest1);    
	return (0);
}
