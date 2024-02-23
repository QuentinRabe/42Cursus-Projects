/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 10:23:52 by arabefam          #+#    #+#             */
/*   Updated: 2024/02/23 09:34:16 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	st_ft_isdigit(int c)
{
	if (c < 48 || c > 57)
		return (0);
	return (1);
}

static int	st_ft_isalpha(int c)
{
	if (c < 65 || (c > 90 && c < 97) || c > 122)
		return (0);
	return (1);
}

int	ft_isalnum(int c)
{
	if (st_ft_isalpha(c) || st_ft_isdigit(c))
		return (1);
	return (0);
}

// int	main (void)
// {
// 	int	i = 0;

// 	while (i < 256)
// 	{
// 		printf("%c = %d\n", i, ft_isalnum(i));
// 		i++;
// 	}
// }
