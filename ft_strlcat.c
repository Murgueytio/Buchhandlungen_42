/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscamurg <oscamurg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 14:21:11 by oscamurg          #+#    #+#             */
/*   Updated: 2024/09/22 10:59:51 by oscamurg         ###   ########.fr       */
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
The strlcat() function appends the NUL-terminated string src to the end of dst.
It will append at most size -strlen(dst) - 1 bytes, NUL-terminating the result.
RETURN VALUES: The strlcpy() and strlcat() functions return the total length of
the string they tried to create. For strlcpy() that means the length of src.
For strlcat() that means the initial length of dst plus the length of src.
While this may seem somewhat confusing, it was done to make truncation
detection simple.
Note, however, that if strlcat() traverses size characters without finding a
NUL, the length of the string is considered to be size and the destination
string will not be NUL-terminated (since there was no space for the NUL).
The check exists to prevent potential security problems in incorrect code.
*/
#include "libft.h"
#include <string.h>
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t    src_len;
    size_t    dst_len;
    
    src_len = ft_strlen(src);
    dst_len = ft_strlen(dst);
    if (dst_len >= size)
        dst_len = size;
    if (dst_len == size)
        return (size + src_len);
    if (src_len < size - dst_len)
        ft_memcpy(dst + dst_len, src, src_len + 1);
    else
    {
        ft_memcpy(dst + dst_len, src, size - dst_len - 1);
        dst[size - 1] = '\0';
    }
    return (dst_len + src_len);
}