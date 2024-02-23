/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 07:18:47 by arabefam          #+#    #+#             */
/*   Updated: 2024/02/23 10:05:53 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

static size_t	token_count(char const *s, char c)
{
	size_t	count;
	int		is_inside;

	count = 0;
	while (*s != '\0')
	{
		while (*s != '\0' && *s == c)
			s++;
		is_inside = 0;
		while (*s != '\0' && *s != c)
		{
			if (!is_inside)
				count++;
			is_inside = 1;
			s++;
		}
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**list;
	size_t	len;
	int		i;

	list = (char **) malloc((token_count(s, c) + 1) * sizeof(char *));
	if (!s || !list)
		return (0);
	i = 0;
	while (*s != '\0')
	{
		while (*s != '\0' && *s == c)
			s++;
		if (*s != '\0')
		{
			if (!ft_strchr(s, c))
				len = ft_strlen(s);
			else
				len = ft_strchr(s, c) - s;
			list[i++] = ft_substr(s, 0, len);
			s = s + len;
		}
	}
	list[i] = NULL;
	return (list);
}

// int	main()
// {
// 	char	str[] = "Hello world andyh";
// 	char	**splited = ft_split(str, ' ');
// 	int		i = 0;
// 	while (splited[i] != NULL)
// 	{
// 		printf("%s\n", splited[i]);
// 		i++;
// 	}
// }
