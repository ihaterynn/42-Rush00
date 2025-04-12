/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryachan <ryachan@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 15:23:08 by ryachan           #+#    #+#             */
/*   Updated: 2025/04/12 16:11:20 by ryachan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush(int x, int y)
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
				if (col == 1 && row == 1 || col == x && row == y)
				{
					write(1, "/", 1);
				}
				else if (row == 1 && col == x || row == y && col == 1)
				{
					write(1, "\\", 1);
				}
				else if (row == 1 && col <= x || row <= y && col == 1)
				{
					write(1, "*", 1);
				}
				else if (row == y && col <= x || row <= y && col == x)
				{
					write(1, "*", 1);
				}

				else{
					write(1, " ", 1);
				}
				col++;
			}
			write(1, "\n", 1);
			row++;
			col = 1;
		}
	}	
}


int	main(void)
{
	rush(7, 10);
	return (0);
}
