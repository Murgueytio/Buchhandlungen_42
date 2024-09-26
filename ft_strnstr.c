/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscamurg <oscamurg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 14:29:53 by oscamurg          #+#    #+#             */
/*   Updated: 2024/09/18 19:25:25 by oscamurg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* MAN: The strnstr() function locates the first occurrence of the
null-terminated string little in the string big, where not more than len
characters are searched. Characters that appear after a ‘\0’ character are not
searched. Since the strnstr() function is a FreeBSD specific API, it should
only be used when portability is not a concern.
RETURN VALUES: If little is an empty string, big is returned; if little occurs
nowhere in big, NULL is returned; otherwise a pointer to the first character of
the first occurrence of little is returned.
*/
#include "libft.h"
#include <string.h>
#include <stdio.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (little[0] == 0)
		return ((char *) big);
	while (big[i] && i < len)
	{
		while (big[i + j] == little[j] && big[i + j] && i + j < len)
		{
			j++;
			if (little[j] == 0)
				return ((char *) big + i);
		}
		i++;
		j = 0;
	}
	return (0);
}