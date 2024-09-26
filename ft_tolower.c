/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscamurg <oscamurg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 14:23:43 by oscamurg          #+#    #+#             */
/*   Updated: 2024/09/18 19:30:06 by oscamurg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* MAN: The tolower() function converts uppercase letters to lowercase.
If  c  is an uppercase letter, tolower() returns its lowercase equivalent,
if a lowercase representation exists in the current locale. Otherwise,
it returns c.
RETURN VALUE: The value returned is that of the converted letter, or c if the
conversion was not possible.
*/
#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}
