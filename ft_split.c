/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscamurg <oscamurg@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-22 14:08:45 by oscamurg          #+#    #+#             */
/*   Updated: 2024-09-22 14:08:45 by oscamurg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	word_count(const char *s, char c)
{
	int	i;
	int	count;
	int	flag;

	i = 0;
	count = 0;
	flag = 0;
	while (*(s + i))
	{
		if (*(s + i) == c)
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			++count;
		}
		++i;
	}
	return (count);
}

static void	free_split(char **res, int k)
{
	int	i;

	i = 0;
	while (i < k)
	{
		free(res[i]);
		i++;
	}
}

static int	fill_split(const char *s, char c, char **res)
{
	int	cont[3];

	cont[0] = 0;
	cont[2] = 0;
	while (*(s + cont[0]))
	{
		while (*(s + cont[0]) == c)
			++cont[0];
		cont[1] = 0;
		while (*(s + cont[0] + cont[1]) && *(s + cont[0] + cont[1]) != c)
			++cont[1];
		if (cont[1] > 0)
		{
			res[cont[2]] = ft_substr(s, cont[0], cont[1]);
			if (res[cont[2]] == NULL)
			{
				free_split(res, cont[2]);
				return (-1);
			}
			++cont[2];
		}
		cont[0] += cont[1];
	}
	return (0);
}

char	**ft_split(const char *s, char c)
{
	int		words;
	char	**res;

	words = word_count(s, c);
	res = (char **) malloc((words + 1) * sizeof(char *));
	if (res == NULL)
		return (NULL);
	res[words] = NULL;
	if (fill_split(s, c, res) == -1)
	{
		free(res);
		return (NULL);
	}
	return (res);
}
/* int	main(void)
{
	char	**result;
	int		i;
	char	str[] = "Es gibt nur wenige von uns, die Spuren hinterlassen.";
	char	delimiter = ' ';

	result = ft_split(str, delimiter);
	if (result == NULL)
	{
		printf("Error: Out of memory\n");
		return (1);
	}

	i = 0;
	while (result[i] != NULL)
	{
		printf("Word %d: %s\n", i, result[i]);
		free(result[i]); // Release every word
		i++;
	}
	free(result); // Free the array of pointers

	return (0);
}
For it to work main.c
cc -Wall -Wextra -Werror 
ft_split.c ft_substr.c ft_strlen.c ft_strdup.c ft_strlcpy.c 
&& ./a.out
 */