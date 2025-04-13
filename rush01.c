/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryachan <ryachan@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 15:23:08 by ryachan           #+#    #+#             */
/*   Updated: 2025/04/12 17:59:58 by ryachan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

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
				if ((col == 1 && row == 1) || (col == x && row == y))
				{
					ft_putchar('/');
				}
				else if ((row == 1 && col == x) || (row == y && col == 1))
				{
					ft_putchar('\\');
				}
				else if ((row == 1 && col <= x) || (row <= y && col == 1))
				{
					ft_putchar('*');
				}
				else if ((row == y && col <= x) || (row <= y && col == x))
				{
					ft_putchar('*');
				}

				else{
					ft_putchar(' ');
				}
				col++;
			}
			ft_putchar('\n');
			row++;
			col = 1;
		}
	}	
}

/*
int	main(void)
{
	rush(7, 10);
	return (0);
}*/
