/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscamurg <oscamurg@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-22 10:44:21 by oscamurg          #+#    #+#             */
/*   Updated: 2024-09-22 10:44:21 by oscamurg         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

/* MAN: The memchr() function scans the initial n bytes of the memory area
pointed to by s for the first instance of c. Both c and the bytes of the memory
area pointed to by s are interpreted as unsigned char.
RETURN VALUE: The memchr() function returns a pointer to the matching byte or
NULL if the character does not occur in the given memory area.
memchr() works with byte string (void *) where strchr() works with 'litteral'
strings (char *).
*/
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;
	unsigned char	uc;

	str = (unsigned char *) s;
	uc = (unsigned char) c;
	i = 0;
	while (i < n)
	{
		if (str[i] == uc)
			return ((void *) &str[i]);
		i++;
	}
	return (NULL);
}
// int	main(void)
// {
// 	char s[50];
// 	strcpy(s, "Lydia y Oscar");;
// 	printf("%p\n", ft_memchr(s, 'd', 3));
// 	printf("%s\n", s);
// }