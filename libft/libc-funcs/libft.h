/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisald <marisald@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-28 09:57:57 by marisald          #+#    #+#             */
/*   Updated: 2024-09-28 09:57:57 by marisald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <unistd.h>
# include <stdlib.h>

// Function prototypes
int ft_strlen(const char *s);
char *ft_strcpy(char *dst, const char *src);
void *ft_memset(void *b, int c, size_t len);
int     ft_islower(int c);
int     ft_isupper(int c);



#endif // LIBFT_H