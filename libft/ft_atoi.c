/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsaldana <marsaldana@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 11:21:18 by marisald          #+#    #+#             */
/*   Updated: 2024/10/02 14:15:35 by marsaldana       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_atoi(const char *str)

{
	int	num;
	int	sign;

	num = 0;
	sign = 1;
	while (ft_isspace(*str))
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
		num = num * 10 + *str++ - '0';
	return (num * sign);
}

// void check_type(int value) {

//     typeof(value) test_var; 
//     printf("The type of the variable is: %s\n", (sizeof(test_var) == sizeof(int) ? "int" : "unknown"));
// }

// int main() {
//     char *s = "12345";

//     int result = ft_atoi(s);
//     printf("ft_atoi(\"%s\") = %d\n", s, result);

//     check_type(result);

//     return 0;
// }