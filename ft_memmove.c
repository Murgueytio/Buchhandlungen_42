/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscamurg <oscamurg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 14:18:58 by oscamurg          #+#    #+#             */
/*   Updated: 2024/09/22 11:00:08 by oscamurg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* MAN: The  memmove() function copies n bytes from memory area src
to memory area dest. The memory areas may overlap: copying takes place
as though the bytes in src are first copied into a temporary array
that does not overlap src or dest, and the bytes are then copied
from the temporary array to dest.
RETURN VALUE: The memmove() function returns a pointer to dest.
*/
#include "libft.h"
#include <string.h>
#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = dest;
	s = src;
	if (!dest && !src)
		return (NULL);
	if (d < s)
	{
		while (n--)
			*d++ = *s++;
	}
	else
	{
		d += n;
		s += n;
		while (n--)
			*--d = *--s;
	}
	return (dest);
}
