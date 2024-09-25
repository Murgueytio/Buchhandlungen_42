/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscamurg <oscamurg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 14:22:32 by oscamurg          #+#    #+#             */
/*   Updated: 2024/09/18 19:30:12 by oscamurg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* MAN: The toupper() function converts lowercase letters to uppercase.
If  c  is a lowercase letter, toupper() returns its uppercase equivalent,
if an uppercase representation exists in the current locale. Otherwise,
it returns c.
RETURN VALUE: The value returned is that of the converted letter, or c if the
conversion was not possible.
*/
#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}
