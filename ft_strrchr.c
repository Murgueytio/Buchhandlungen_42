/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscamurg <oscamurg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 14:25:42 by oscamurg          #+#    #+#             */
/*   Updated: 2024/09/18 18:51:09 by oscamurg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* MAN: The strrchr() function returns a pointer to the last occurrence of the
character c in the string s.
RETURN VALUE: The strrchr() function returns a pointer to the matched character
or NULL if the character is not  found. The terminating null byte is considered
part of the string, so that if c is specified as '\0', these functions return a
pointer to the terminator.
*/
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*last = NULL;
	size_t		i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			last = &s[i];
		i++;
	}
	if ((char)c == '\0')
		return ((char *)&s[i]);
	return ((char *)last);
}
// int	main(void)
// {
// 	char *p;
// 	p = ft_strrchr("Barranca", 'o');
// 	printf("%s\n", p);
// }