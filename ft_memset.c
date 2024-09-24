/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscamurg <oscamurg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 14:12:54 by oscamurg          #+#    #+#             */
/*   Updated: 2024/09/22 11:00:03 by oscamurg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* MAN: The memset() function fills the first n bytes 
of the memory area pointed to by s with the constant byte c. And
returns the number of bytes in the string pointed to by s. */
#include "libft.h"
#include <string.h>
#include <stdio.h>

void    *ft_memset(void *s, int c, size_t n)
{
    unsigned char    *tmp_ptr;
    
    tmp_ptr = (unsigned char *) s;
    while (n > 0)
    {
        *(tmp_ptr++) = (unsigned char) c;
        n--;
    }
    return (s);
}