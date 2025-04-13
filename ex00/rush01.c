/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anong <anong@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 15:02:30 by anong             #+#    #+#             */
/*   Updated: 2025/04/13 15:25:08 by anong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_logic(int e, int f, int g, int h)
{
	if ((e == 1 && f == 1) || (e == g && f == h))
	{
		ft_putchar('/');
	}
	else if ((f == 1 && e == g) || (f == h && e == 1))
	{
		ft_putchar('\\');
	}
	else if ((f == 1 && e <= g) || (f <= h && e == 1))
	{
		ft_putchar('*');
	}
	else if ((f == h && e <= g) || (f <= h && e == g))
	{
		ft_putchar('*');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush01(int x, int y)
{
	int	row;
	int	col;

	row = 1;
	col = 1;
	if (x != 0 && y != 0)
	{
		while (row <= y)
		{
			while (col <= x)
			{
				ft_logic(col, row, x, y);
				col++;
			}
			ft_putchar('\n');
			row++;
			col = 1;
		}
	}
}
