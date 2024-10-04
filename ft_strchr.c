/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscamurg <oscamurg@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-22 11:52:56 by oscamurg          #+#    #+#             */
/*   Updated: 2024-09-22 11:52:56 by oscamurg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* MAN: The strchr() function returns a pointer to the first occurrence of the
character c in the string s. Here "character" means "byte"; these functions do
not work with wide or multibyte characters.
RETURN VALUE: The strchr() function returns a pointer to the matched character
or NULL if the character is not  found. The terminating null byte is considered
part of the string, so that if c is specified as '\0', these functions return a
pointer to the terminator.
*/
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;
	char			cc;

	cc = (char) c;
	i = 0;
	while (s[i])
	{
		if (s[i] == cc)
			return ((char *) &s[i]);
		i++;
	}
	if (s[i] == cc)
		return ((char *) &s[i]);
	return (NULL);
}
// int	main(void)
// {
// 	char *p;
// 	p = ft_strchr("Canchapalca Oxapampa", 'o');
// 	printf("%s\n", p);
// }