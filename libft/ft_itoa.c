/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisald <marisald@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-07 16:12:18 by marisald          #+#    #+#             */
/*   Updated: 2024-10-07 16:12:18 by marisald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_estim(long n)
{
	size_t	estim;

	estim = 0;
	if (n < 0)
	{
		estim++;
		n = -n;
	}
	while (n >= 1)
	{
		estim++;
		n /= 10;
	}
	return (estim);
}

static char	*ft_gen(char *rtn, long nbr, int len, int isneg2)
{
	if (nbr != 0)
		rtn = malloc(sizeof(char) * (len + 1));
	else
		return (rtn = ft_strdup("0"));
	if (!rtn)
		return (0);
	isneg2 = 0;
	if (nbr < 0)
	{
		isneg2++;
		nbr = -nbr;
	}
	rtn[len] = '\0';
	while (--len)
	{
		rtn[len] = (nbr % 10) + '0';
		nbr /= 10;
	}
	if (isneg2 == 1)
		rtn[0] = '-';
	else
		rtn[0] = (nbr % 10) + '0';
	return (rtn);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*rtn;
	long	nbr;
	int		isneg3;

	nbr = n;
	len = ft_estim(nbr);
	rtn = 0;
	isneg3 = 0;
	rtn = ft_gen(rtn, nbr, len, isneg3);
	if (!rtn)
		return (0);
	return (rtn);	
}

// #include <stdio.h>

// 	void check_type(char value) {

//     typeof(value) test_var; 
//     printf("The type of the variable is: %s\n", (sizeof(test_var) == sizeof(char) ? "char" : "unknown"));
// 	}
// int main() {


//     char *result;


//     result = ft_itoa(123);
//     printf("ft_itoa(123) = %s\n", result);
// 	check_type(*result);
//     free(result); 

//     result = ft_itoa(-456);
//     printf("ft_itoa(-456) = %s\n", result);
// 	check_type(*result);
//     free(result);

//     result = ft_itoa(0);
//     printf("ft_itoa(0) = %s\n", result);
// 	check_type(*result);
//     free(result);

//     result = ft_itoa(789);
//     printf("ft_itoa(789) = %s\n", result);
// 	check_type(*result);
//     free(result);

//     result = ft_itoa(-321);
//     printf("ft_itoa(-321) = %s\n", result);
// 	check_type(*result);
//     free(result);

//     return 0;
}