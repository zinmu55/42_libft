/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skohtake <skohtake@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 07:12:25 by skohtake          #+#    #+#             */
/*   Updated: 2024/04/29 07:38:34 by skohtake         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strrchr(const char *s, int c);

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	size_t	len;

	str = (char *)s;
	len = 0;
	while (str[len] != '\0')
		len++;
	while (len > 0)
	{
		if (str[len] == c)
			return (&str[len]);
		len--;
	}
	if (*str == c)
		return (str);
	return (0);
}

// /*Comment out required below*/

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	*s;
// 	int		c;

// 	s = "Hello,42Tokyo!";
// 	c = 'o';
// 	printf("Expected	:%s\n", strrchr(s, c));
// 	printf("Actual		:%s\n", ft_strrchr(s, c));
// 	return (0);
// }
