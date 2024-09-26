/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisald <marisald@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-26 11:21:47 by marisald          #+#    #+#             */
/*   Updated: 2024-09-26 11:21:47 by marisald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include <ctype.h>


int		ft_islower(int c)
{
	return (c <= 'z' && c >= 'a');
}

int		ft_isupper(int c)
{
	return (c <= 'Z' && c >= 'A');
}

int		ft_isalpha(int c)
{
	return (ft_islower(c) || ft_isupper(c));
}

// Test function to compare ft_isalpha with isalpha
void test_isalpha(int c) {
        int ft_result = ft_isalpha(c);
    int std_result = isalpha(c);

    printf("Character: '%c' (ASCII: %d)\n", c, c);
    printf("ft_isalpha: %d, isalpha: %d\n", ft_result, std_result);
    printf("-----\n");
}

int main() {
    test_isalpha('a');
    test_isalpha('z');
    

    test_isalpha('A');
    test_isalpha('Z');
    

    test_isalpha('0');
    test_isalpha('9');

    test_isalpha('@');
    test_isalpha('[');
    

    test_isalpha(10);  // Newline
    test_isalpha(32);  // Space
    
    return 0;
}