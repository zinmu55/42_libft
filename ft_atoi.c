/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skohtake <skohtake@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 10:15:10 by skohtake          #+#    #+#             */
/*   Updated: 2024/04/30 12:11:38 by skohtake         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_atoi(const char *str);

static int	ft_isspace(int c)
{
	char	target;

	target = (char)c;
	return (target == ' ' || (target >= '\t' && target <= '\r'));
}

int	ft_atoi(const char *str)
{
	int	sign;
	int	num;

	num = 0;
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
		num = num * 10 + *str - '0';
		str++;
	}
	return (num * sign);
}

// /*Comment out required below*/

// #include <string.h>

// int	main(void)
// {
// 	char	*str;

// 	str = strdup("2147483648");
// 	printf("input	:%s\nExp	:%d\nAct	:%d\n\n", str, atoi(str),
// 					ft_atoi(str));
// 	free(str);
// 	str = strdup("2147483649");
// 	printf("input	:%s\nExp	:%d\nAct	:%d\n\n", str, atoi(str),
// 					ft_atoi(str));
// 	free(str);
// 	str = strdup("-2147483648");
// 	printf("input	:%s\nExp	:%d\nAct	:%d\n\n", str, atoi(str),
// 					ft_atoi(str));
// 	free(str);
// 	str = strdup("-2147483649");
// 	printf("input	:%s\nExp	:%d\nAct	:%d\n\n", str, atoi(str),
// 					ft_atoi(str));
// 	free(str);
// 	str = strdup("+123");
// 	printf("input	:%s\nExp	:%d\nAct	:%d\n\n", str, atoi(str),
// 					ft_atoi(str));
// 	free(str);
// 	str = strdup("---123");
// 	printf("input	:%s\nExp	:%d\nAct	:%d\n\n", str, atoi(str),
// 					ft_atoi(str));
// 	free(str);
// 	str = strdup("-+-123");
// 	printf("input	:%s\nExp	:%d\nAct	:%d\n\n", str, atoi(str),
// 					ft_atoi(str));
// 	free(str);
// 	str = strdup("-+- 123");
// 	printf("input	:%s\nExp	:%d\nAct	:%d\n\n", str, atoi(str),
// 					ft_atoi(str));
// 	free(str);
// 	str = strdup(" -+-123");
// 	printf("input	:%s\nExp	:%d\nAct	:%d\n\n", str, atoi(str),
// 					ft_atoi(str));
// 	free(str);
// 	str = strdup("-12 3");
// 	printf("input	:%s\nExp	:%d\nAct	:%d\n\n", str, atoi(str),
// 					ft_atoi(str));
// 	free(str);
// 	str = strdup("   \t\r123");
// 	printf("input	:%s\nExp	:%d\nAct	:%d\n\n", str, atoi(str),
// 					ft_atoi(str));
// 	free(str);
// 	str = strdup("0");
// 	printf("input	:%s\nExp	:%d\nAct	:%d\n\n", str, atoi(str),
// 					ft_atoi(str));
// 	free(str);
// 	str = strdup("+0");
// 	printf("input	:%s\nExp	:%d\nAct	:%d\n\n", str, atoi(str),
// 					ft_atoi(str));
// 	free(str);
// 	str = strdup("-0");
// 	printf("input	:%s\nExp	:%d\nAct	:%d\n\n", str, atoi(str),
// 					ft_atoi(str));
// 	free(str);
// 	str = strdup("123452147483647");
// 	printf("input	:%s\nExp	:%d\nAct	:%d\n\n", str, atoi(str),
// 					ft_atoi(str));
// 	free(str);
// 	return (0);
// }
