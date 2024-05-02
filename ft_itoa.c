/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skohtake <skohtake@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 13:02:27 by skohtake          #+#    #+#             */
/*   Updated: 2024/05/03 07:47:34 by skohtake         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n);

char	*ft_itoa(int n)
{
	long long int	ln;
	int				digits;
	char			*res;

	if (n == 0)
		return (ft_strdup("0"));
	ln = (long long int)n;
	digits = 1;
	res = 0;
	while (ln /= 10)
		digits++;
	ln = (long long int)n;
	if (ln < 0)
		digits++;
	res = (char *)malloc(sizeof(char) * digits + 1);
	if (res == NULL)
		return (NULL);
	if (ln < 0)
	{
		res[0] = '-';
		ln = -ln;
	}
	res[digits--] = '\0';
	while (ln != 0)
	{
		res[digits] = (ln % 10) + '0';
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
