/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: probert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 10:12:34 by probert           #+#    #+#             */
/*   Updated: 2017/09/21 13:58:22 by probert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_nextSpace(int *i, char *s)
{
	while (s[i] && (s[i] == ' ' || s[i] == '\t' || s[i] == '\n'))
		i++;
}

int		ft_strlen(char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

void	rostring(char *s)
{
	int i;
	int start;
	int end;

	i = 0;
	while (ft_nextSpace(i, s) == ' ');
   		i++;	
	end = ft_nextSpace(&i, &s); 
	i = end;
	ft_putchar(start + 48);
	ft_putchar('\n');
	ft_putchar(end + 48);
	ft_putchar('\n');
//	while (s[i] && (s[i] == ' ' || s[i] == '\t' || s[i] == '\n'))
//		i++;
//	start = i;
//	while (s[i] && s[i] != ' ' && s[i] != '\t' && s[i] != '\t')
//		i++;
//	i = end;
	while (s[i])
	{
		while (s[i] && (s[i] == ' ' || s[i] == '\t' || s[i] == '\n'))
			i++;
		if (s[i] && s[i] != ' ' && s[i] != '\t' && s[i] != '\t')
		{
			while (s[i] && s[i] != ' ' && s[i] != '\t' && s[i] != '\t')
			{
				ft_putchar(s[i]);
				i++;
			}
			ft_putchar(' ');
		}
	}
	while (start < end)
	{
		ft_putchar(s[start]);
		start++;
	}
}

int		main(int ac, char **av)
{
	int i;

	if (ac > 1)
	{
		i = 1;
		while (i < ac)
		{
			rostring(av[i]);
			ft_putchar('\n');
			i++;
		}
	}
	else
		ft_putchar('\n');
	return (0);
}
