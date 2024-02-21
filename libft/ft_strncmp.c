/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 07:36:30 by arabefam          #+#    #+#             */
/*   Updated: 2024/02/21 08:40:45 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while ((*s1 != '\0' || *s2 != '\0') && n > 0)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
		n--;
	}
	return (0);
}

// int	main()
// {
// 	const char	s1[] = "Bonjour";
// 	const char	s2[] = "Bonj";

// 	printf("%d\n", strncmp(s1, s2, 3));
// 	printf("%d\n", ft_strncmp(s1, s2, 3));
// }
