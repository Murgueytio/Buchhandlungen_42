/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscamurg <oscamurg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 14:28:53 by oscamurg          #+#    #+#             */
/*   Updated: 2024/09/20 11:19:41 by oscamurg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*MAN: The  memcmp() function compares the first n bytes (each interpreted as
unsigned char) of the memory areas s1 and s2.
RETURN VALUE: The memcmp() function returns an integer less than, equal to, or
greater than zero if the first n bytes of s1 is found, respectively, to be less
than, to match, or be greater than the first n bytes of s2.
For  a  nonzero return value, the sign is determined by the sign of the
difference between the first pair of bytes (interpreted as unsigned char) that
differ in s1 and s2.
If n is zero, the return value is zero.
*/
#include "libft.h"
#include <string.h>
#include <stdio.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    const unsigned char   *str1;
    const unsigned char   *str2;
    size_t i;
 
    str1 = (const unsigned char *)s1;
    str2 = (const unsigned char *)s2;
    i = 0;
    while (i < n)
    {
        if (str1[i] != str2[i])
            /* return the difference between both chars */
            return (str1[i] - str2[i]);
        i++;
    }
    return (0);
}