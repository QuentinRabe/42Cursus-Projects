/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 12:53:44 by arabefam          #+#    #+#             */
/*   Updated: 2024/02/21 08:34:50 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	st_strlen(const char *str)
{
	size_t	count;

	count = -1;
	while (str[++count] != '\0')
		;
	return (count);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0' && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (st_strlen(src));
}

// int	main()
// {
// 	char	str[] = "Andyh";
// 	char	dest[] = "Bonjour";
// 	size_t	size = ft_strlcpy(dest, str, 48);
// 	printf("%zu\n", size);
// 	printf("%s\n", dest);
// }
