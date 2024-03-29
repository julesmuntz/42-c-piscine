/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julmuntz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 10:54:22 by julmuntz          #+#    #+#             */
/*   Updated: 2022/02/06 18:03:36 by julmuntz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	str[3];

	str[0] = '0';
	while (str[0] <= '7')
	{
		str[1] = str[0] + 1;
		while (str[1] <= '8')
		{
			str[2] = str[1] + 1;
			while (str[2] <= '9')
			{
				write(1, &str[0], 1);
				write(1, &str[1], 1);
				write(1, &str[2], 1);
				if (str[0] != '7')
				{
					write(1, ",", 1);
					write(1, " ", 1);
				}
				str[2]++;
			}
			str[1]++;
		}
		str[0]++;
	}
}
