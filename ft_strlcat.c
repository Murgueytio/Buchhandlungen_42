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
	size_t	len_d;
	size_t	len_s;
	size_t	i;

	len_d = ft_strlen(dst);
	len_s = ft_strlen(src);
	if (size <= len_d)
		return (len_s + size);
	i = 0;
	while (src[i] && (len_d + i) < (size - 1))
	{
		dst[len_d + i] = src[i];
		i++;
	}
	dst[len_d + i] = 0;
	return (len_d + len_s);
}
// int	main(void)
// {
// 	char d[12] = "Lydia and";
// 	const char*s = " Oscar";

// 	size_t r = ft_strlcat(d,s,sizeof(d));

// 	printf("src=%s, dst=%s, ret=%zu\n",s,d,r);
// 	return(0);
// }
