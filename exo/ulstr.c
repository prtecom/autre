/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: probert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 21:09:32 by probert           #+#    #+#             */
/*   Updated: 2017/09/20 22:01:07 by probert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_putstr(char **c)
{
	if (c >= 'a' && c <= 'z')
		c += 'A' - 'a';
	else if (c >= 'A' && c <= 'Z')
		c += 'a' - 'A';
	write(1, &c, 1);
}

int			main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 1)
		while (argv[1][i] != '\0')
		{
			ft_putstr(argv[1][i]);
			i++;
		}
	ft_putchar('\n');
	return (0);
}
