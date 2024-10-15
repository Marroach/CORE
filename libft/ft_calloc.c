/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisald <marisald@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-07 15:58:52 by marisald          #+#    #+#             */
/*   Updated: 2024-10-07 15:58:52 by marisald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h> // For malloc, free
#include <stdio.h> // For size_t
#include <stddef.h> // For size_t
#include <limits.h> // For INT_MAX, INT_MIN



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

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (nmemb == 0 || size == 0)
	{
		ptr = malloc(1);
		return ptr ? ptr : NULL;
	}

	if (nmemb > SIZE_MAX / size)
	{
		return NULL;
	}

	ptr = malloc(nmemb * size);
	if (!ptr)
	{
		return NULL;
	}

	ft_bzero(ptr, nmemb * size); 
	return ptr;
}


void test_ft_calloc() {
    // Test case 1: Normal allocation
    char *p1 = ft_calloc(2, sizeof(char)); // Allocate space for 2 chars
    if (p1) {
        printf("Test 1 passed\n");
    } else {
        printf("Test 1 failed\n");
    }
    free(p1); // Don't forget to free!

    // Test case 2: Zero allocation
    char *p2 = ft_calloc(0, sizeof(char)); // Should return a pointer (usually NULL)
    if (p2) {
        printf("Test 2 passed\n");
    } else {
        printf("Test 2 failed\n");
    }
    free(p2); // Free if allocated

    // Test case 3: Large allocation
    char *p3 = ft_calloc(SIZE_MAX, sizeof(char)); // Check behavior on large allocation
    if (p3) {
        printf("Test 3 failed\n"); // This should normally fail
    } else {
        printf("Test 3 passed\n");
    }
    // No need to free since it should be NULL

    // More tests...
}

int main() {
    test_ft_calloc();
    return 0;
}