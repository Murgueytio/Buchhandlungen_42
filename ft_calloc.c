/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscamurg <oscamurg@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-04 07:57:31 by oscamurg          #+#    #+#             */
/*   Updated: 2024-10-04 07:57:31 by oscamurg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* MAN: The malloc() function allocates size bytes and returns a pointer to the
allocated memory.  The memory is not initialized. If size is 0, then malloc()
returns either NULL, or a unique pointer value that can later be successfully
passed to free().
The  calloc()  function  allocates  memory  for  an array of nmemb elements of
size bytes each and returns a pointer to the allocated memory.  The memory is
set to zero. If nmemb or size is 0, then calloc() returns either NULL, or a
unique pointer value that can later be successfully passed to free(). If the
multiplication of nmemb and size would result in integer overflow, then calloc()
returns an error. By contrast, an integer overflow would not be detected in the
following call to malloc(), with the result that an incorrectly sized block of
memory would be allocated: malloc(nmemb * size);
RETURN VALUE: The malloc() and calloc() functions return a pointer to the
allocated memory, which is suitably aligned for any built-in type. On error,
these functions return NULL.  NULL may also be returned by a successful call
to malloc() with a size of zero, or by a successful call to calloc() with nmemb
or size equal to zero.

*/
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*result;

	result = malloc(count * size);
	if (!result)
		return (NULL);
	else
		ft_bzero(result, (count * size));
	return (result);
}
