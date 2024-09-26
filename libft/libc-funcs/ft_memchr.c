/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisald <marisald@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-26 11:21:55 by marisald          #+#    #+#             */
/*   Updated: 2024-09-26 11:21:55 by marisald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>

int main()
{
	char  *str = "abcdef";
if (memchr(str, 'a', 5) != NULL)
{
printf("Character found");
}

}
// ft 

// 