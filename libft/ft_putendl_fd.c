/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisald <marisald@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-10 12:38:21 by marisald          #+#    #+#             */
/*   Updated: 2024-10-10 12:38:21 by marisald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
	char	*newstr;

	newstr = ft_strjoin(s, "\n");
	if (newstr != NULL)
	{
		ft_putstr_fd(newstr, fd);
		free(newstr);
	}
}
