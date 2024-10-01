/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftstrnlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisald <marisald@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-26 11:22:47 by marisald          #+#    #+#             */
/*   Updated: 2024-09-26 11:22:47 by marisald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	#include <stdio.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

/*int main() {
    char testStr[] = "Hello, world!";
    int length = ft_strlen(testStr);
    printf("%d", length);
    return 0;
}*/