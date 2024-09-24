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
#include <string.h>
#include <stdio.h>

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    char    *c_src;
    char    *c_dest;
    size_t    i;
    
    if (!dest && !src)
        return (NULL);
    c_src = (char *) src;
    c_dest = (char *) dest;
    i = 0;
    if (c_dest > c_src)
        while (n-- > 0)
            c_dest[n] = c_src[n];
    else
    {
        while (i++ < n)
            c_dest[i] = c_src[i];
    }
    return (dest);
}