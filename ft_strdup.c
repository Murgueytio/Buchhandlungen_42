/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscamurg <oscamurg@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-11 09:33:15 by oscamurg          #+#    #+#             */
/*   Updated: 2024-10-11 09:33:15 by oscamurg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* MAN: The  strdup() function returns a pointer to a new string which is a
duplicate of the string s. Memory for the new string is obtained with malloc(3),
and can be freed with free(3).
RETURN VALUE: On success, the strdup() function returns a pointer to the
duplicated string. It returns NULL  if  insufficient memory was available, with
errno set to indicate the cause of the error.
*/
#include "libft.h"

char	*ft_strdup(char *src)
{
	int		i;
	char	*dest;

	dest = malloc(sizeof(char) * (ft_strlen(src) + 1));
	i = 0;
	if (dest == 0)
		return (0);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}
// int	main(void)
// {
// 	printf("%s\n", ft_strdup("Lydia"));
// }