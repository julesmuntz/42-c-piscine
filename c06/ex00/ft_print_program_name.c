/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julmuntz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 13:57:56 by julmuntz          #+#    #+#             */
/*   Updated: 2022/02/23 14:13:40 by julmuntz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int arc, char *arv[])
{
	int	i;

	i = 0;
	if (arc == 1)
	{
		while (arv[0][i])
		{
			write(1, &arv[0][i], 1);
			i++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
