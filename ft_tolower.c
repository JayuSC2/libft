/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juitz <juitz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 17:22:06 by juitz             #+#    #+#             */
/*   Updated: 2023/09/21 12:23:35 by juitz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c = (c + 32);
	return (c);
}
/*
int main(void)
{
    int c = '7';

    printf ("%c", ft_tolower(c));
}
*/