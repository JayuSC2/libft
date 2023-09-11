/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juitz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 10:03:36 by juitz             #+#    #+#             */
/*   Updated: 2023/09/07 13:20:34 by juitz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	*ft_memset (void *s, int x, unsigned int len)
{
	unsigned char *p;

	p = s;
	while (len--)
	{
		*p++ = (unsigned char)x;
	}
	return (s);
}

void	printArray (char arr[], int n)
{
	int	i;

	i = 0;
	while ((arr[i] != '\0') && (i < n))
	{
		printf ("%c\n", arr[i]);
		i++;
	}
}

int	main(void)
{
	char arr[] = "Hello";

	printArray(arr, 5);
	ft_memset(arr, '1', 5);
	printArray(arr, 5);
	return (0);
}

	






