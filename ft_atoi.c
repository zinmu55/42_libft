/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skohtake <skohtake@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 10:15:10 by skohtake          #+#    #+#             */
/*   Updated: 2024/05/06 14:50:54 by skohtake         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(int c)
{
	char	target;

	target = (char)c;
	return (target == ' ' || (target >= '\t' && target <= '\r'));
}

static long long	is_longlong(long long *res, int sign, char next)
{
	if (sign == 1)
	{
		if (*res > (LLONG_MAX - (next - '0')) / 10)
		{
			*res = LLONG_MAX;
			return (0);
		}
	}
	if (sign == -1)
	{
		if (-(*res) < (LLONG_MIN + (next - '0')) / 10)
		{
			*res = LLONG_MIN;
			return (0);
		}
	}
	*res = *res * 10 + (next - '0');
	return (1);
}

int	ft_atoi(const char *str)
{
	int			sign;
	long long	res;

	res = 0;
	sign = 1;
	while (ft_isspace(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		if (!is_longlong(&res, sign, *str))
			return ((int)res);
		str++;
	}
	return ((int)(res * sign));
}

// /*Comment out required below*/

// #include <string.h>

// int	main(void)
// {
// 	char	*str;

// 	str = strdup("9223372036854775806");
// 	printf("input	:%s\nExp	:%d\nAct	:%d\n\n", str, atoi(str),
// 					ft_atoi(str));
// 	free(str);
// 	str = strdup("9223372036854775807");
// 	printf("input	:%s\nExp	:%d\nAct	:%d\n\n", str, atoi(str),
// 					ft_atoi(str));
// 	free(str);
// 	str = strdup("9223372036854775808");
// 	printf("input	:%s\nExp	:%d\nAct	:%d\n\n", str, atoi(str),
// 					ft_atoi(str));
// 	free(str);
// 	str = strdup("9223372036854775809");
// 	printf("input	:%s\nExp	:%d\nAct	:%d\n\n", str, atoi(str),
// 					ft_atoi(str));
// 	free(str);
// 	str = strdup("2147483646");
// 	printf("input	:%s\nExp	:%d\nAct	:%d\n\n", str, atoi(str),
// 					ft_atoi(str));
// 	free(str);
// 	str = strdup("2147483647");
// 	printf("input	:%s\nExp	:%d\nAct	:%d\n\n", str, atoi(str),
// 					ft_atoi(str));
// 	free(str);
// 	str = strdup("2147483648");
// 	printf("input	:%s\nExp	:%d\nAct	:%d\n\n", str, atoi(str),
// 					ft_atoi(str));
// 	free(str);
// 	str = strdup("2147483649");
// 	printf("input	:%s\nExp	:%d\nAct	:%d\n\n", str, atoi(str),
// 					ft_atoi(str));
// 	free(str);
// 	return (0);
// }
