/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscamurg <oscamurg@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-23 13:23:01 by oscamurg          #+#    #+#             */
/*   Updated: 2024-09-23 13:23:01 by oscamurg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* new_node = (t_list *)malloc(sizeof(t_list));
sizeof(t_list): Esto calcula el tamaño en bytes de la estructura t_list, para
asegurarse de que se reserve suficiente memoria para almacenar un nodo.

malloc(sizeof(t_list)): malloc asigna un bloque de memoria del tamaño indicado
y devuelve un puntero al inicio de ese bloque de memoria. Este puntero es de
tipo void * (genérico).

(t_list *): Como malloc devuelve un puntero genérico (void *), necesitamos
convertirlo (hacer un cast) a un puntero del tipo t_list *, que es el tipo de
nodo que estamos creando. Este cast es necesario en C para asegurar que el
tipo del puntero es el adecuado. */
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *) malloc(sizeof(t_list));
	if (new == NULL)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
// int	main(void)
// {
// 	char	*content;
// 	t_list	*new_node;

// 	content = "Hola mundo";
// 	new_node = ft_lstnew(content);
// 	if (new_node)
// 	{
// 		printf("Contenido: %s\n", (char *)new_node->content);
// 		free(new_node);
// 	}
// 	return (0);
// }
