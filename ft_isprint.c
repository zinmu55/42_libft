/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skohtake <skohtake@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 09:59:25 by skohtake          #+#    #+#             */
/*   Updated: 2024/04/28 10:17:06 by skohtake         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c);

int	ft_isprint(int c)
{
	if (c >= ' ' && c <= '~')
		return (1);
	return (0);
}

// /*Comment out required below*/

// #include <stdio.h>
// #include <ctype.h>

// int	main(void)
// {
// 	char	target;

// 	target = 'a';
// 	printf("target:%c\n", target);
// 	printf("	actual	:%d\n", ft_isprint(target));
// 	printf("	ideal	:%d\n", isprint(target));
// 	target = '5';
// 	printf("target:%c\n", target);
// 	printf("	actual	:%d\n", ft_isprint(target));
// 	printf("	ideal	:%d\n", isprint(target));
// 	target = ' ';
// 	printf("target:%c\n", target);
// 	printf("	actual	:%d\n", ft_isprint(target));
// 	printf("	ideal	:%d\n", isprint(target));
// 	return (0);
// }
