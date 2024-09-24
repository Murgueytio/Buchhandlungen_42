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

static size_t	count_words(char const *s, char c)
{
	size_t	count;
	int		in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

static char	*get_next_word(char const **s, char c)
{
	char const	*word_start;
	char		*word;
	size_t		len;

	while (**s == c)
		(*s)++;
	word_start = *s;
	while (**s && **s != c)
		(*s)++;
	len = *s - word_start;
	word = (char *)malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	ft_strlcpy(word, word_start, len + 1);
	return (word);
}

static void	free_split(char **split, size_t count)
{
	size_t	i;

	i = 0;
	while (i < count)
	{
		free(split[i]);
		i++;
	}
	free(split);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	word_count;
	size_t	i;

	if (!s)
		return (NULL);
	word_count = count_words(s, c);
	split = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (!split)
		return (NULL);
	i = 0;
	while (i < word_count)
	{
		split[i] = get_next_word(&s, c);
		if (!split[i])
		{
			free_split(split, i);
			return (NULL);
		}
		i++;
	}
	split[word_count] = NULL;
	return (split);
}