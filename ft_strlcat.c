/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscamurg <oscamurg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 14:21:11 by oscamurg          #+#    #+#             */
/*   Updated: 2024/09/22 10:59:51 by oscamurg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* En primer while encuentra el final de la cadena dst sin exceder el tamaño 
size. Si dst es mayor o igual al tamaño del buffer, i será igual a size.
El segundo while calcula la longitud de src, recorriendo la cadena hasta que
encuentra el carácter nulo.
El tercer while copia caracteres de src al final de dst, asegurándose de no
exceder el tamaño total size - 1, para que siempre quede espacio para el
carácter nulo al final.


*/
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	src_len;

	i = 0;
	j = 0;
	src_len = 0;
	while (dst[i] && i < size)
		i++;
	while (src[src_len])
		src_len++;
	while (src[j] && (i + j + 1) < size)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i < size)
		dst[i + j] = '\0';
	return (i + src_len);
}
// int	main(void)
// {
// 	char d[12] = "Lydia and";
// 	const char*s = " Oscar";

// 	size_t r = ft_strlcat(d,s,sizeof(d));

// 	printf("src=%s, dst=%s, ret=%zu\n",s,d,r);
// 	return(0);
// }
