/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juitz <juitz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 18:26:35 by juitz             #+#    #+#             */
/*   Updated: 2023/09/21 12:40:06 by juitz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_isprint(int input)
{
	if (input >= 32 && input <= 126)
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	printf ("%d", ft_isprint('/'));
	printf ("%d", ft_isprint('a'));
	printf ("%d", ft_isprint('0'));
}
*/