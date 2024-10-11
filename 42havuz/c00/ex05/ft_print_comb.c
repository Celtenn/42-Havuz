/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idkahram <idkahram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 08:21:34 by idkahram          #+#    #+#             */
/*   Updated: 2024/07/06 08:21:58 by idkahram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	yazdir(char m)
{
	write(1, &m, 1);
}

void	ft_print_comb(void)
{
	int	n;
	int	b;
	int	v;

	n = '0';
	while (n <= '7')
	{
		b = n + 1;
		while (b <= '8')
		{
			v = b + 1;
			while (v <= '9')
			{
				yazdir(n);
				yazdir(b);
				yazdir(v);
				if (n != '7')
					write(1, ", ", 2);
				v++;
			}
			b++;
		}
		n++;
	}
}
