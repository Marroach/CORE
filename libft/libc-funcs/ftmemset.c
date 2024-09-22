#include <stdio.h>
#include <string.h>
//*b is A pointer to the block of memory that you want to fill
// int c: The byte value you want to set in the memory block 
// char, as only one byte will be used from this value.
// size_t len: The number of bytes to fill, indicating how large the memory block is.

void	*ft_memset(void *b, int c, size_t len)
{
	char	*ptr;
	size_t	i;

	ptr = b;
	i = 0;
	while (i < len)
		*(ptr + i++) = c;
	return (b);
}

int main()
{
    char str[30] = "ABCD EFGH";

    printf("before memset => %s", str);

    ft_memset(str,'x',3);

    printf("\n After memset => %s \n", str);
    printf("size of the string %lu\n", sizeof(str));
    return 0;
}