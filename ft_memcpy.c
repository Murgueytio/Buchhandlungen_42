/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscamurg <oscamurg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 14:17:20 by oscamurg          #+#    #+#             */
/*   Updated: 2024/09/22 11:00:12 by oscamurg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* MAN: The  memcpy()  function  copies n bytes from memory area src
to memory area dest. The memory areas must not overlap.
Use memmove(3) if the memory areas do overlap.
RETURN VALUE: The memcpy() function returns a pointer to dest.
*/
#include "libft.h"
#include <string.h>
#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*tmp_dest;
	unsigned char	*tmp_src;

	if (dest == 0 && src == 0)
		return (dest);
	tmp_dest = (unsigned char *) dest;
	tmp_src = (unsigned char *) src;
	while (n > 0)
	{
		*(tmp_dest++) = *(tmp_src++);
		n--;
	}
	return (dest);
}
// int	main(void)
// {
// 	char src1[12], src2[11];
// 	strcpy(src1, "Lydia");
// 	strcpy(src2, "Oscar");

// 	ft_memcpy(src1, src2, 2);
// 	printf("%s\n", src1);
// 	return (0);
// }
