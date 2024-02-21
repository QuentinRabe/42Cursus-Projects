/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 07:32:58 by arabefam          #+#    #+#             */
/*   Updated: 2024/02/21 08:40:35 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	a;
	char	*last_occ;

	a = (char) c;
	last_occ = NULL;
	while (*s != '\0')
	{
		if (*s == a)
			last_occ = (char *) s;
		s++;
	}
	return (last_occ);
}

// int	main()
// {
// 	const char	str[] = "Bonjour le monde ! Je suis Quentin";
// 	int	c = 'r';
// 	printf("%s\n", strrchr(str, c));
// 	printf("%s\n", ft_strrchr(str, c));
// }
