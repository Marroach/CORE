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
    // Create the new string with a newline
	char *str_with_newline = ft_strjoin(s, "\n");
	if (str_with_newline != NULL) {
        // Write the string to the specified file descriptor
		ft_putstr_fd(str_with_newline, fd);
        // Free the allocated memory to prevent memory leak
		free(str_with_newline);
	}
}
