/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 07:23:52 by arabefam          #+#    #+#             */
/*   Updated: 2024/02/21 08:40:21 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	a;
	char	*occ;

	a = (char) c;
	occ = NULL;
	while (*s != '\0')
	{
		if (*s == a)
		{
			occ = (char *) s;
			return (occ);
		}
		s++;
	}
	return (occ);
}
// int	main()
// {
// 	const char	str[] = "Bonjour le monde ! Je suis Quentin";
// 	int	c = '!';
// 	printf("%s\n", strchr(str, c));
// 	printf("%s\n", ft_strchr(str, c));
// }
