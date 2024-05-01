/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skohtake <skohtake@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 07:36:32 by skohtake          #+#    #+#             */
/*   Updated: 2024/05/01 07:51:08 by skohtake         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2);

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;

	res = NULL;
	if (s1 == NULL || s2 == NULL) // check required
		return (NULL);
	res = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (res == NULL)
		return (NULL);
	(void)ft_strlcat(res, s1, ft_strlen(s1) + 1);
	(void)ft_strlcat(res, s2, ft_strlen(s1) + ft_strlen(s2) + 1);
	return (res);
}

// /* Commen out required below */

// #include <string.h>

// int	main(void)
// {
// 	char	*s1;
// 	char	*s2;
// 	char	*res;

// 	s1 = strdup("abc");
// 	s2 = strdup("def");
// 	res = ft_strjoin(s1, s2);
// 	printf("res	:%s\n", res);
// 	free(s1);
// 	free(s2);
// 	free(res);
// 	return (0);
// }
