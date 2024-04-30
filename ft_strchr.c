/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skohtake <skohtake@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 10:49:20 by skohtake          #+#    #+#             */
/*   Updated: 2024/04/30 07:47:47 by skohtake         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c);

char	*ft_strchr(const char *s, int c)
{
	char	*res;

	res = (char *)s;
	while (*res)
	{
		if (*res == c)
			return (res);
		res++;
	}
	if (c == '\0')
		return (res);
	return (0);
}

// /*Comment out required below*/

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	*s;
// 	int		c;

// 	// s = "Hello, World!";
// 	s = "";
// 	c = '\0';
// 	printf("Expected\n");
// 	printf("input <<< s:%s, c:%c\n", s, c);
// 	printf("result	:%s\n", strchr(s, c));
// 	printf("Actual\n");
// 	printf("input <<< s:%s, c:%c\n", s, c);
// 	printf("result	:%s\n", ft_strchr(s, c));
// 	return (0);
// }
