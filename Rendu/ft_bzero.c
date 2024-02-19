/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 14:23:25 by arabefam          #+#    #+#             */
/*   Updated: 2024/02/19 14:39:29 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str != '\0')
		count++;
	return (count);
}

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *) s;
	while (n > 0)
	{
		*ptr = '\0';
		ptr++;
		n--;
	}
}

int	main(void)
{
	char	str[] = "Bonjour la famille !";
	char	str1[] = "Bonjour la famille !";
	int	i = 0;

	ft_bzero(str, 5);
	printf("======FT_BZERO======\n");
	while (str[i] != '!')
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
	i = 0;
	bzero(str1, 5);
	printf("======BZERO======\n");
	while (str[i] != '!')
	{
		write(1, &str1[i], 1);
		i++;
	}
}
