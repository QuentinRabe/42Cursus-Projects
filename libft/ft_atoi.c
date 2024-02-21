/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 15:16:41 by arabefam          #+#    #+#             */
/*   Updated: 2024/02/21 16:09:48 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <stdlib.h>

static int	st_isdigit(int c)
{
	if (c < 48 || c > 57)
		return (0);
	return (1);
}

int	ft_atoi(const char *nptr)
{
	char			*ptr;
	int				sign;
	unsigned int	nbr;

	sign = 1;
	nbr = 0;
	ptr = (char *) nptr;
	while (*ptr != '\0' && ((*ptr >= '\t' && *ptr <= '\r') || *ptr == ' '))
		ptr++;
	if (*ptr == '-' || *ptr == '+')
	{
		if (*ptr == '-')
			sign *= -1;
		ptr++;
	}
	while (*ptr != '\0' && st_isdigit(*ptr))
	{
		nbr *= 10;
		nbr += (*ptr - '0');
		ptr++;
	}
	return ((int)(sign * nbr));
}

// int	main()
// {
// 	char	str[] = "      -12345asd478";
// 	printf("ATOI = %d\n", atoi(str));
// 	printf("FT_ATOI = %d\n", ft_atoi(str));
// }
