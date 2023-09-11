/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juitz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 18:00:51 by juitz             #+#    #+#             */
/*   Updated: 2023/09/05 18:19:40 by juitz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_isascii	(int input)
{
	if (input >= 0 && input <= 127)
		return (1);
	else
		return (0);
}

int	main(void)
{
	printf ("%d", ft_isascii('ß'));
}