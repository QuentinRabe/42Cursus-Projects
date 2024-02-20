/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 07:44:09 by arabefam          #+#    #+#             */
/*   Updated: 2024/02/20 09:10:26 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*pdest;
	unsigned char	*psrc;
	unsigned char	*tmp;

	tmp = NULL;
	pdest = (unsigned char *) dest;
	psrc = (unsigned char *) src;
	while (n > 0)
	{
		*tmp = *psrc;
		tmp++;
		psrc++;
	}
	tmp = &tmp[0];
	while (n > 0)
	{
		*pdest = *tmp;
		tmp++;
		pdest++;
	}
	return (dest);
}

int	main()
{
	char	array[] = "coucou a vous tous";
	char	array_cpy[] = "Bole monde !";
	size_t	n = 7;
	ft_memmove(array, array_cpy, n);
	printf("%s\n", array);
}
