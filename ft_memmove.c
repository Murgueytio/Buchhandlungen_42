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
#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*temp_dest;
	const unsigned char	*temp_src;

	temp_dest = (unsigned char *) dest;
	temp_src = (const unsigned char *) src;
	if (!dest && !src)
		return (NULL);
	if (dest < src)
	{
		while (n--)
			*temp_dest++ = *temp_src++;
	}
	else
	{
		temp_dest += n;
		temp_src += n;
		while (n--)
			*--temp_dest = *--temp_src;
	}
	return (dest);
}
// int	main(void)
// {
// 	char src1[50], src2[50];
// 	strcpy(src1, "Lydia");
// 	strcpy(src2, "Oscar");

// 	ft_memmove(src1, src2, 1);
// 	printf("%s\n", src1);
// 	return (0);
// }
