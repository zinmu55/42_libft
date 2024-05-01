/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skohtake <skohtake@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 06:55:54 by skohtake          #+#    #+#             */
/*   Updated: 2024/05/01 07:34:49 by skohtake         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len);

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	len_s;

	len_s = ft_strlen(s);
	res = NULL;
	if (s == NULL || start > len_s)
		return (res);
	else if (start + len > len_s)
		len = len_s - start;
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	ft_strlcpy(res, s + start, len + 1);
	return (res);
}

// /* Comment out rewuired below */

// #include <string.h>

// int	main(void)
// {
// 	char			*s;
// 	unsigned int	start;
// 	size_t			len;

// 	s = strdup("Hello, 42Tokyo!");
// 	start = 100;
// 	len = 100;
// 	printf("result	:%s\n", ft_substr(s, start, len));
// 	return (0);
// }
