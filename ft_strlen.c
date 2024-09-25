/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscamurg <oscamurg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 14:08:51 by oscamurg          #+#    #+#             */
/*   Updated: 2024/09/22 10:59:40 by oscamurg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* MAN: The strlen(), function  calculates the length of the string pointed
to by s, excluding the terminating null byte ('\0').
function returns the number of bytes in the string pointed to by s. */
#include "libft.h"
#include <string.h>
#include <stdio.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
