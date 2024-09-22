#include <stdio.h>
#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	char	*ptr;
	size_t	i;

	if (!n)
		return ;
	ptr = s;
	i = 0;
	while (i < n)
		*(ptr + i++) = 0;
}

int main()
{
    char bugger[10] = "XXXXXX";    
    printf("Before bzero %s\n", bugger);
    ft_bzero(bugger, 1);

    printf("After bzero %s\n", bugger);

    return 0;
}
//turns everything to 000 not just the size_t