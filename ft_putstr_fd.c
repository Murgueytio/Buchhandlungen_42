/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscamurg <oscamurg@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-22 14:20:16 by oscamurg          #+#    #+#             */
/*   Updated: 2024-09-22 14:20:16 by oscamurg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
}
// int	main(void)
// {
// 	ft_putstr_fd("Lydia", 1);
// 	printf("\n");
// }
/* Para que funcione main.c

ft_strlen

*/