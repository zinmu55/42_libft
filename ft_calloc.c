/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skohtake <skohtake@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 12:46:07 by skohtake          #+#    #+#             */
/*   Updated: 2024/04/30 13:22:38 by skohtake         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size);

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}

// /* Comment out required below */

// int	main(void)
// {
// 	char	*s;
// 	s = calloc(5, sizeof(char));
// 	if (s == NULL)
// 		printf("Failed\n");
// 	else
// 	{
// 		s = "1234";
// 		printf("%s >>> SUCCESS\n", s);
// 	}
// 	return (0);
// }
