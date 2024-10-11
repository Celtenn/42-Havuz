/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idkahram <idkahram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 09:28:18 by idkahram          #+#    #+#             */
/*   Updated: 2024/07/06 09:28:49 by idkahram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	yazdir(char j)
{
	write(1, &j, 1);
}

void	ft_print_comb2(void)
{
	int	n;
	int	b;

	n = 0;
	while (n <= 98)
	{
		b = n + 1;
		while (b <= 99)
		{
			yazdir(n / 10 + 48);
			yazdir(n % 10 + 48);
			write(1, " ", 1);
			yazdir(b / 10 + 48);
			yazdir(b % 10 + 48);
			if (n != 98)
			{
				write(1, ", ", 2);
			}
			b++;
		}
		n++;
	}
}
