/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marisald <marisald@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-07 16:06:34 by marisald          #+#    #+#             */
/*   Updated: 2024-10-07 16:06:34 by marisald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_isspace(int c)
{
    return (c == '\f' || c == '\n' || c == '\r' \
    || c == '\t' || c == '\v' || c == ' ');
}