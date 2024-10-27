/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisald <marisald@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-26 11:22:01 by marisald          #+#    #+#             */
/*   Updated: 2024-09-26 11:22:01 by marisald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*d;
	char	*s;

	d = (char *)dst;
	s = (char *)src;
	if (dst == src)
		return (dst);
	if (s < d)
	{
		while (len--)
			*(d + len) = *(s + len);
		return (dst);
	}
	while (len--)
		*d++ = *s++;
	return (dst);
}

#include <stdio.h>
#include <string.h>


int main() {
    char src[] = "This is a test string";
    char dst1[30];  
    char dst2[30];  

//test1
    printf("Test 1 with no overlap results:\n");
    ft_memmove(dst1, src, strlen(src) + 1);
    memmove(dst2, src, strlen(src) + 1);
    if (strcmp(dst1, dst2) == 0) {
        printf("Test 1 passed\n");
    } else {
        printf("Test 1 failed\n");
    }
    printf("dst1: %s\n", dst1);
    printf("dst2: %s\n", dst2);

// Test 2: Overlapping copy where src < dst
char overlap_src1[] = "Overlap example";
printf("\nTest 2 w overlap results:\n");

// Copy only part of the string to avoid accessing memory beyond overlap_src1's size
ft_memmove(overlap_src1 + 4, overlap_src1, 4);
char overlap_src2[] = "Overlap example";
memmove(overlap_src2 + 4, overlap_src2, 4);

if (strcmp(overlap_src1, overlap_src2) == 0) {
    printf("Test 2 passed\n");
} else {
    printf("Test 2 failed\n");
}

printf("overlap_src1: %s\n", overlap_src1);
printf("overlap_src2: %s\n", overlap_src2);

    // Test 3: Overlapping copy where dst < src
    char overlap_src3[] = "Overlap example";
    printf("\nTest 3: Overlap where dst < src\n");
    ft_memmove(overlap_src3, overlap_src3 + 4, strlen(overlap_src3 + 4) + 1);
    char overlap_src4[] = "Overlap example";
    memmove(overlap_src4, overlap_src4 + 4, strlen(overlap_src4 + 4) + 1);
    if (strcmp(overlap_src3, overlap_src4) == 0) {
        printf("Test 3 passed\n");
    } else {
        printf("Test 3 failed\n");
    }
    printf("overlap_src3: %s\n", overlap_src3);
    printf("overlap_src4: %s\n", overlap_src4);

    return 0;
}
