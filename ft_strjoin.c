/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscamurg <oscamurg@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-22 14:08:34 by oscamurg          #+#    #+#             */
/*   Updated: 2024-09-22 14:08:34 by oscamurg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
I write "n_str" as such "new string"
*/
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*n_str;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (NULL);
	n_str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!n_str)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		n_str[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		n_str[i + j] = s2[j];
		j++;
	}
	n_str[i + j] = '\0';
	return (n_str);
}
// int	main(void)
// {
// 	char *s1;
// 	s1 = ft_strjoin("Ly", "dia");
// 	printf("%s\n", s1);
// 	//printf("%lu\n", strlen(s1));
// }

/* 
Para que funcione main.c
size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
} */