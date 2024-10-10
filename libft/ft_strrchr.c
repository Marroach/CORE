/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsaldana <marsaldana@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 11:22:14 by marisald          #+#    #+#             */
/*   Updated: 2024/10/02 14:56:07 by marsaldana       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
    int     i;

    // Early return if both `s` is empty and `c` is '\0'
    if (!*s && c == 0)
        return ((char *)s);

    i = ft_strlen(s);
    if (c == 0)
        return ((char *)s + i);

    while (i >= 0)
    {
        if (s[i] == (char)c)  // Cast `c` to `char` for proper comparison
            return ((char *)s + i);
        i--;
    }
    return (NULL);
}