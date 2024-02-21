/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 14:14:50 by arabefam          #+#    #+#             */
/*   Updated: 2024/02/21 08:39:36 by arabefam         ###   ########.fr       */
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

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dst_len;
	size_t	src_len;

	dst_len = -1;
	src_len = st_strlen(src);
	while (dst[++dst_len] != '\0')
		;
	i = 0;
	while (src[i] != '\0' && i < size)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	if (dst_len >= size)
		return (size + src_len);
	else
		return (dst_len + src_len);
}
// int main()
// {
// 	char	dest[] = "Hello";
// 	char	src[] = " world";

// 	size_t	size = strlcat(dest, src, 2);
// 	printf("%zu\n", size);
// 	printf("%s\n", dest);
// }
