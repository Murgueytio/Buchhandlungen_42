/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscamurg <oscamurg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 14:26:51 by oscamurg          #+#    #+#             */
/*   Updated: 2024/09/18 19:02:56 by oscamurg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* MAN: Compare two strings. The comparison is done using unsigned characters.
It compares only the first (at most) n bytes of s1 and s2.
RETURN VALUE: If the two strings are the same, the returned result will be 0
since there is no difference.
If there is a difference, and the first different character in s2 is greater
than the character at the same place in s1, the returned result will be negative.
If there is a difference, and the first different character in s2 is less than
the character at the same place in s1, the returned result will be positive.
*/
#include "libft.h"
#include <string.h>
#include <stdio.h>

int     ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;
    
    i = 0;
    while ((s1[i] || s2[i]) && i < n)
    {
        if ((unsigned char) s1[i] != (unsigned char) s2[i])
            return ((unsigned char) s1[i] - (unsigned char) s2[i]);
        i++;
    }
    return (0);
}