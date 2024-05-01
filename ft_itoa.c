/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skohtake <skohtake@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 13:02:27 by skohtake          #+#    #+#             */
/*   Updated: 2024/05/01 15:03:38 by skohtake         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n);

char	*ft_itoa(int n)
{
	long long int	ln;
	int				digits;
	char			*res;

	ln = (long long int)n;
	digits = 1;
	res = 0;
	while (ln /= 10)
		digits++;
	ln = (long long int)n;
	if (ln < 0)
		res = (char *)malloc(sizeof(char) * digits + 2);
	else
		res = (char *)malloc(sizeof(char) * digits + 1);
	if (res == NULL)
		return (NULL);
	if (ln < 0)
	{
		res[0] = '-';
		ln = -ln;
	}
	while (digits > 0)
	{
		res[digits - 1] = (ln % 10) + '0';
		ln /= 10;
		digits--;
	}
	return (res);
}

// /* comment out required below */

// int	main(void)
// {
// 	int	input;

// 	input = 123;
// 	(void)printf("input	:%d\n", input);
// 	(void)printf("res	:%s\n", ft_itoa(input));
// 	return (0);
// }
