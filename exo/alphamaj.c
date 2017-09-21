/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alphamaj.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: probert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 11:15:04 by probert           #+#    #+#             */
/*   Updated: 2017/09/20 15:54:32 by probert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int	main(void)
{
	char	c;
	int		i;

	c = 'A';
	i = 0;
	while (c <= 'Z')
	{
		i++;
		if ((i % 2) == 0)
		{
			ft_putchar(c + 'a' - 'A');
		}
		else
			ft_putchar(c);
		c++;
	}
	return (0);
}
