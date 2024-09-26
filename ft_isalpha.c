/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscamurg <oscamurg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 13:35:47 by oscamurg          #+#    #+#             */
/*   Updated: 2024/09/24 14:37:07 by oscamurg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* ASCII (65 - 90) is uppercase and (97 - 122) is lowercase
In Linux Programmer's Manual:
isalpha(), checks  for  an  alphabetic character; in the standard "C" locale,
it is equivalent to (isupper(c) || islower(c)).
The values returned are nonzero if
the character c falls into the tested class, and zero if not. */
#include <stdio.h>
/// @brief 
/// @param c 
/// @return 
int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}
/*
#include "libft.h"
#include <stdio.h>

/// @brief 
/// @param  
/// @return 
int		main(void)
{
    printf("Testing ft_isalpha:\n");
    printf("ft_isalpha('a'): %d\n", ft_isalpha('a'));
    printf("ft_isalpha('Z'): %d\n", ft_isalpha('Z'));
    printf("ft_isalpha('5'): %d\n", ft_isalpha('5'));
    printf("ft_isalpha('$'): %d\n", ft_isalpha('$'));

    return 0;
}*/
