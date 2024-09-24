/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscamurg <oscamurg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 14:16:05 by oscamurg          #+#    #+#             */
/*   Updated: 2024/09/18 18:15:23 by oscamurg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* MAN: The  bzero() function erases the data in the n bytes of the memory
starting at the location pointed to by s, by writing zeros
(bytes containing '\0') to that area.
This function works the same way as the memset() function, except you don't
have to specify what character to write, it'll always be 0 (NUL character).
RETURN VALUE: None.*/
#include "libft.h"
// #include <string.h>
#include <strings.h> // Checking it's working without <string.h>
/*<strings.h> contains some additional non-standard functions, 
many of which are obsolete versions of functions that are now in; 
comes from the BSD branch of Unix evolution and is not standard in C*/

void    ft_bzero(void *s, size_t n)
{
    char    *tmp_ptr;
    
    tmp_ptr = (char *) s;
    while (n > 0)
    {
        *(tmp_ptr++) = 0;
         n--;
    }
}