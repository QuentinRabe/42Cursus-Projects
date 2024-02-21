/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 14:14:50 by arabefam          #+#    #+#             */
/*   Updated: 2024/02/21 13:28:46 by arabefam         ###   ########.fr       */
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
	size_t	total_len;

	dst_len = st_strlen(dst);
	src_len = st_strlen(src);
	total_len = dst_len + src_len;
	if (size <= dst_len)
		return (src_len + size);
	i = 0;
	while (src[i] != '\0' && dst_len + i < size - 1)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (total_len);
}
// int main()
// {
// 	char	dest[] = "Hello";
// 	char	src[] = " world";

// 	size_t	size = strlcat(dest, src, 2);
// 	printf("%zu\n", size);
// 	printf("%s\n", dest);
// }
