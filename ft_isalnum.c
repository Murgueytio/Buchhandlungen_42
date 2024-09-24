/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscamurg <oscamurg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 13:58:36 by oscamurg          #+#    #+#             */
/*   Updated: 2024/09/20 14:07:12 by oscamurg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* MAN: isalnum(), checks for an alphanumeric character;
it is equivalent to (isalpha(c) || isdigit(c)).
The values returned are nonzero if
the character c falls into the tested class, and zero if not. */
#include "libft.h"
#include <ctype.h>

int ft_isalnum(int c)
{
    if (ft_isalpha(c) || ft_isdigit(c))
        return (1);
    return (0);
}