/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscamurg <oscamurg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 14:20:03 by oscamurg          #+#    #+#             */
/*   Updated: 2024/09/22 10:59:45 by oscamurg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] && i < (size - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = 0;
	}
	while (src[i])
		i++;
	return (i);
}
// int	main(void)
// {
// 	char d[7];
// 	const char*s = "Viajando";

// 	size_t r = ft_strlcpy(d,s,sizeof(d));

// 	printf("src=%s, dst=%s, ret=%zu\n",s,d,r);
// 	return(0);
// }
/*

Alternativa para ft_strlcpy()
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	src_len;

	src_len = ft_strlen(src);
	if (src_len + 1 < size)
		ft_memcpy(dst, src, src_len + 1);
	else if (size != 0)
	{
		ft_memcpy(dst, src, size - 1);
		dst[size - 1] = 0;
	}
	return (src_len);
}*/
/* 
Alternativa main.c con write

int main(void)
{
	char d[8];
	const char*s = "Viajando";
	
	size_t r = ft_strlcpy(d,s,sizeof(d));
	char b[50];
	int l = snprintf(b,sizeof(b),"src=%s, dst=%s, ret=%zu\n",s,d,r);
	write(1,b,l);
	return(0);
}*/