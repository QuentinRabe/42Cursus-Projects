/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 07:32:58 by arabefam          #+#    #+#             */
/*   Updated: 2024/02/21 11:34:26 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <string.h>

static size_t	st_strlen(const char *s)
{
	size_t	count;
	int		i;

	count = 0;
	i = -1;
	while (s[++i] != '\0')
		count++;
	return (count);
}

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = st_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char) c)
			return ((char *)(s + i));
		i--;
	}
	return (NULL);
}

// int	main()
// {
// 	int	c = 'r';
// 	printf("%s\n", strrchr(str, c));
// 	printf("%s\n", ft_strrchr(str, c));
// 	printf("%lu\n", strlen(str));
// }
