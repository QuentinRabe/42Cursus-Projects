/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 10:00:16 by arabefam          #+#    #+#             */
/*   Updated: 2024/02/19 10:03:19 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int ft_isdigit(int c)
{
	if (c < 48 || c > 57)
		return (0);
	return (1);
}
int	main (void)
{
	int	i = 0;

	while (i < 256)
	{
		printf("%c = %d\n", i, ft_isdigit(i));
		i++;
	}
}
