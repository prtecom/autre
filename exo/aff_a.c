/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: probert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 16:07:28 by probert           #+#    #+#             */
/*   Updated: 2017/09/20 19:09:20 by probert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

int		ft_putchar(char c)
{
	write (1, &c, 1);
	return (0);
}

int		main(int argc, char **argv)
{
	int i;
	int r;

	i = 0;
	r = 0;
	if (argc != 2)
		ft_putchar('a');
	else 
	{
		while ((argv[1][i] != '\0') && (r != 1))
		{
			if ((argv[1][i] == 'a') || (argv[1][i] == 'A'))
				r = 1;
			i++;
		}
		if (r == 1)
			ft_putchar('a');
	}
	ft_putchar('\n');
	return (0);
}
