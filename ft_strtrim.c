/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skohtake <skohtake@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 07:52:59 by skohtake          #+#    #+#             */
/*   Updated: 2024/05/01 11:45:32 by skohtake         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set);

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	size_t	start;
	size_t	end;

	res = 0;
	start = 0;
	end = 0;
	end = ft_strlen(s1) - ft_strlen(set);
	while (set[start] && s1[end])
	{
		if (s1[end++] != set[start++])
			end = ft_strlen(s1);
		else if (set[start] == '\0')
			end = ft_strlen(s1) - ft_strlen(set);
	}
	start = 0;
	while (s1[start] == set[start])
		start++;
	res = (char *)malloc(sizeof(char) * (end - start + 1));
	if (res == NULL)
		return (NULL);
	(void)ft_strlcpy(res, s1 + start, end - start + 1);
	return (res);
}

// /* commen out required below */

// #include <string.h>

// int	main(void)
// {
// 	char	*s1;
// 	char	*set;

// 	s1 = strdup("+-+Hello+-+");
// 	set = strdup("-+");
// 	printf("res	:%s\n", ft_strtrim(s1, set));
// 	free(s1);
// 	free(set);
// 	return (0);
// }
