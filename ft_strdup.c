/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscamurg <oscamurg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 14:34:18 by oscamurg          #+#    #+#             */
/*   Updated: 2024/09/18 20:01:27 by oscamurg         ###   ########.fr       */
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
#include <string.h>
#include <stdio.h>

char    *ft_strdup(const char *s)
{
    char *dest;
    size_t i;
    
    dest = (char *) malloc(ft_strlen(s) + 1);
    if (!dest)
        return (NULL);
    i = 0;
    while (s[i])
    {
        dest[i] = s[i];
        i++;
    }
    dest[i] = 0;
    return (dest);
}