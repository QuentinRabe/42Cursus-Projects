/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 07:15:44 by arabefam          #+#    #+#             */
/*   Updated: 2024/02/21 08:39:22 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int	i;

	i = -1;
	while (i++, n-- > 0)
		((unsigned char *) dest)[i] = ((unsigned char *) src)[i];
	return (dest);
}

// void print_elements(char *array, int size)
// {
//   int i;
//   printf ("Elements : ");
//   for (i = 0; i < size; i++) {
//     printf ("%c, ", array[i]);
//   }
//   printf ("\n");
// }

// int main(void)
// {
//   char c_array[] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
//   print_elements(c_array, sizeof(c_array));
//   printf("After memcpy()\n");
//   ft_memcpy((void *)&c_array[1], (void *)&c_array[0], 4);
//   print_elements(c_array, sizeof(c_array));
// }
