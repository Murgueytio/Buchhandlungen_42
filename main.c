/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscamurg <oscamurg@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-25 13:06:33 by oscamurg          #+#    #+#             */
/*   Updated: 2024-09-25 13:06:33 by oscamurg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* #include "libft.h"
#include <stdio.h>
#include <unistd.h>
#include <assert.h>
int	main()
{
	//ATOI
	{
		printf("\n\n[ft_atoi]\n");
		char *s = "--4684659";
		printf("%d", atoi(s));
	}
	//ISDIGIT
	{
		(ft_isdigit('3')) ? (printf("is digit\n")) : (printf("is not digit\n"));
		(ft_isdigit('h')) ? (printf("is digit\n")) : (printf("is not digit\n"));
	}
	//ISPRINT
	{
		printf("\n[ft_isprint]\n");
		printf("%d\n", ft_isprint('d'));
		printf("\n");
	}

	//BZERO
	{
		printf("\n[ft_bzero]\n");
		char s28[50];
		strcpy(s28, "12345678");
		ft_bzero(s28, 1);
		printf("(%s)\n", s28);
		printf("\n");
	}

	//ISALPHA
	printf("%d\n", ft_isalpha('h'));
	printf("%d\n", ft_isalpha('*'));
	//ISALNUM
	printf("[ft_isalnum]\n");
	printf("%d\n", ft_isalnum('5'));
	printf("%d\n", ft_isalnum('+'));
	printf("\n");
	//ISASCII
	printf("[ft_isascii]\n");
	printf("%d\n", ft_isascii('~'));
	printf("%d\n", ft_isascii('8'));
	printf("\n");
	
	//ITOA
	printf("[ft_itoa]\n");
	printf("%s\n", ft_itoa(198600));
	printf("\n");
	
	//MEMSET
	char	str[55];
//I have included "strcpy" because it requires me to separate statements.
//But, "strcpy" isn't in "libft.h".
	strcpy(str, "I'm Bond, James Bond");
	ft_memset(str +3, 'M', 10);
	printf("%s\n", str);
	
	//MEMCPY
	printf("[ft_memcpy]\n");
	char s30[50], s31[50];
	strcpy(s30, "blue");
	strcpy(s31, "black");
	printf("%p\n", ft_memcpy(s30, s31, 3));
	printf("\n");
	
	//MEMMOVE
	printf("[ft_memmove]\n");
	char s38[50], s39[50];
	strcpy(s38, "jupi");
	strcpy(s39, "saturn");
	printf("%p\n", ft_memmove(s38, s39, 2));
	printf("\n");

	//MEMCMP
	printf("[ft_memcmp]\n");
	char s44[50], s45[50];
	strcpy(s44, "a");
	strcpy(s45, "aaa");
	printf("%d\n", ft_memcmp(s44, s45, 2));
	printf("\n");

	//MEMCHR
	printf("[ft_memchr]\n");
	char s42[50];
	strcpy(s42, "mountain");;
	printf("%p\n", ft_memchr(s42, 'n', 4));
	printf("%s\n", s42);	
	printf("\n");

	//PUTCHAR_FD
	printf("[ft_putchar_fd]\n");
	ft_putchar_fd('g', 1);	
	printf("\n");
	
	//PUTENDL_FD
	printf("[ft_putendl_fd]\n");
	ft_putendl_fd("Thorn", 1);	
	printf("\n");
	
	//PUTSTR_FD
	printf("[ft_putstr_fd]\n");
	ft_putstr_fd("Muse", 1);	
	printf("\n");

	//PUTNBR_FD
	printf("[ft_putnbr_fd]\n");
	ft_putnbr_fd(-31416, 1);	
	printf("\n");
	
	//STRCHR
	printf("[ft_strchr]\n");
	char *p1;
	p1 = ft_strchr("yellow", 'l');
	printf("%s\n", p1);
	printf("\n");

	//STRDUP
	printf("[ft_strdup]\n");
	printf("%s\n", ft_strdup("Anthony"));
	printf("\n");

	//STRJOIN
	printf("[ft_strjoin]\n");
	char *s56;
	s56 = ft_strjoin("Jack", "son");
	printf("%s\n", s56);
	printf("%lu\n", strlen(s56));
	printf("\n");

	//STRLCAT
	printf("[ft_strlcat]\n");
	char s14[50], s15[50];
	strcpy(s14, "Mr");
	strcpy(s15, "Robot");
	printf("%zu\n", ft_strlcat(s14, s15, 4));
	printf("%s\n", s14);
	printf("\n");

	//STRLCPY
	char dst[3];
	char dst_goal[3] = { 'a', 'b', 'c' };
	char src[] = "abcdef";
	char *dst_ptr = strncpy(dst, src, sizeof(dst));
	assert(dst_ptr == dst);
	assert(memcmp(dst_goal, dst, sizeof(dst)) == 0);

	//STRLEN
	printf("%zu\n", ft_strlen("longitud"));
	printf("\n");
	
	
	//STRMAPI - en main aparte

	//STRNCMP
	printf("[ft_strncmp]\n");
	printf("%d\n", ft_strncmp("uola", "hol", 3));	
	printf("\n");

	//STRNSTR
	printf("[ft_strnstr]\n");
	char s22[50], s23[50];
	strcpy(s22, "tritricolor");
	printf("\n");

	//STRRCHR
	printf("[ft_strrchr]\n");
	char *p3;
	p3 = ft_strrchr("yellow", 'l');
	printf("%s\n", p3);
	printf("\n");

	//STRTRIM
	printf("[ft_strtrim]\n");
	char *str16 = ft_strtrim("--__-___----4-2-___---__-_-__--", "-_");
	printf("%s\n", str16);

	//SUBSTR
	printf("[ft_substr]\n");
	char *str11 = "Hello 42";
	char *str12;
	str12 = ft_substr(str11, 6, 2);
	printf("substr(\"Hello 42\", 6, 2) : %s\n", str12);
	printf("\n");

	//TOLOWER
	printf("[ft_tolower]\n");
	printf("%c\n", ft_tolower('A'));
	printf("\n");

	//TOUPPER
	printf("[ft_toupper]\n");
	printf("%c\n", ft_toupper('a'));
	printf("\n");

	//STRITERI - en main aparte
} */