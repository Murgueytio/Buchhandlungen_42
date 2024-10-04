/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscamurg <oscamurg@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-04 07:58:13 by oscamurg          #+#    #+#             */
/*   Updated: 2024-10-04 07:58:13 by oscamurg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ASCII (32 - 127)
MAN: isprint(), checks for any printable character including space.
The values returned are nonzero if
the character c falls into the tested class, and zero if not.
Dec 127 = Char DELL*/
#include "libft.h"
#include <stdio.h>
//#include <ctype.h>

int	ft_isprint(int c)
{
	return (c >= 32 && c < 127);
}
/*
int main(void)
{
	printf("%d\n", ft_isprint('d'));
}*/