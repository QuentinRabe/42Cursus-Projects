/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 08:05:39 by arabefam          #+#    #+#             */
/*   Updated: 2024/02/21 08:36:06 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*pstr;

	pstr = (unsigned char *) str;
	while (*pstr != '\0' && n > 0)
	{
		if (*pstr == c)
			return (pstr);
		pstr++;
		n--;
	}
	return (NULL);
}

// int main ()
// {
// 	const char str[] = "https://www.tutorialspoint.com";
// 	const char ch = '.';
// 	char *ret;
// 	char	*res;
// 	ret = memchr(str, ch, strlen(str));
// 	res = ft_memchr(str, ch, strlen(str));

// 	printf("String after memchr |%c| is - |%s|\n", ch, ret);
// 	printf("String after ft_memchr |%c| is - |%s|\n", ch, res);

// 	return(0);
// }
