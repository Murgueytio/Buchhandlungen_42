/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscamurg <oscamurg@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-04 07:56:53 by oscamurg          #+#    #+#             */
/*   Updated: 2024-10-04 07:56:53 by oscamurg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* MAN: The memset() function fills the first n bytes
of the memory area pointed to by s with the constant byte c. And
returns the number of bytes in the string pointed to by s. */
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*tmp_ptr;

	tmp_ptr = (unsigned char *) s;
	while (n > 0)
	{
		*(tmp_ptr++) = (unsigned char) c;
		n--;
	}
	return (s);
}
/*
int	main(void)
{
	char	s[55];
//I have included "strcpy" because it requires me to separate statements.
//But, "strcpy" isn't in "libft.h".
	strcpy(s, "I'm Bond, James Bond");
	ft_memset(s +3, 'M', 10);
	printf("%s\n", s);
}*/