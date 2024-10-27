/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisald <marisald@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-10 12:38:53 by marisald          #+#    #+#             */
/*   Updated: 2024-10-10 12:38:53 by marisald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int		i;

	i = -1;
	if (s && f)
		while (*(s + ++i))
			f(i, s + i);
}

// #include <stdio.h>

// void convert_to_uppercase(unsigned int i, char *c) {
//     (void)i; // Silence unused variable warning if needed
//     *c = ft_toupper(*c);
// }
// // Convert to lowercase
// void convert_to_lowercase(unsigned int i, char *c) {
//     (void)i; // Silence unused variable warning if needed
//     *c = ft_tolower(*c);
// }

// int main() {
//     char test1[] = "hello World!";
//     char test2[] = "HELLO WORLD!";
//     char test3[] = "";  // Empty string case

//     // Test 1: Convert to Uppercase
//     printf("Test 1 - Convert to Uppercase:\n");
//     printf("Original: %s\n", test1);
//     ft_striteri(test1, convert_to_uppercase);
//     printf("Modified: %s\n\n", test1);

//     // Test 2: Convert to Lowercase
//     printf("Test 2 - Convert to Lowercase:\n");
//     printf("Original: %s\n", test2);
//     ft_striteri(test2, convert_to_lowercase);
//     printf("Modified: %s\n\n", test2);

//     // Test 3: Empty String (Should remain unchanged)
//     printf("Test 3 - Empty String:\n");
//     printf("Original: %s\n", test3);
//     ft_striteri(test3, convert_to_lowercase);
//     printf("Modified: %s\n", test3);

//     return 0;
// }

