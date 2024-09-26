/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscamurg <oscamurg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 14:20:03 by oscamurg          #+#    #+#             */
/*   Updated: 2024/09/22 10:59:45 by oscamurg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* MAN: The strlcpy() and strlcat() functions copy and concatenate strings
respectively. They are designed to be safer, more consistent, and less error
prone replacements for strncpy(3) and strncat(3). Unlike those functions,
strlcpy() and strlcat() take the full size of the buffer (not just the length)
and guarantee to NUL-terminate the result (as long as size is larger than 0 or,
in the case of strlcat(), as long as there is at least one byte free in dst).
Note that a byte for the NUL should be included in size. Also note that
strlcpy() and strlcat() only operate on true “C” strings. This means that
for strlcpy() src must be NUL-terminated and for strlcat() both src and dst
must be NUL-terminated.
The strlcpy() function copies up to size - 1 characters from the NUL-terminated
string src to dst, NUL-terminating the result.
RETURN VALUES: The strlcpy() and strlcat() functions return the total length of
the string they tried to create. For strlcpy() that means the length of src.
For strlcat() that means the initial length of dst plus the length of src.
While this may seem somewhat confusing, it was done to make truncation
detection simple.
*/
#include "libft.h"
#include <string.h>
#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	src_len;

	src_len = ft_strlen(src);
	if (src_len + 1 < size)
		ft_memcpy(dst, src, src_len + 1);
	else if (size != 0)
	{
		ft_memcpy(dst, src, size - 1);
		dst[size - 1] = 0;
	}
	return (src_len);
}
