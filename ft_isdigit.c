/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscamurg <oscamurg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 13:48:46 by oscamurg          #+#    #+#             */
/*   Updated: 2024/09/24 14:27:00 by oscamurg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ASCII (48 - 57) are numbers (0 - 9)
MAN: isdigit(), checks for a digit (0 through 9).
The values returned are nonzero if
the character c falls into the tested class, and zero if not. */
#include <ctype.h>
#include <stdio.h>
#include <unistd.h>

int	ft_isdigit(int c)
{
	return ((c >= 48) && (c <= 57));
}
/*
#include <stdio.h>
#include "libft.h"

int main(void)
{
    (ft_isdigit('3')) ? (printf("is digit\n")) : (printf("is not digit\n"));
	(ft_isdigit('F')) ? (printf("is digit\n")) : (printf("is not digit\n"));
}*/
