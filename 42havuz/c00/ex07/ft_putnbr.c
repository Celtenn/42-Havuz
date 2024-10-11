/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idkahram <idkahram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 09:20:49 by idkahram          #+#    #+#             */
/*   Updated: 2024/07/06 11:56:14 by idkahram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	yazdir(char u)
{
	write(1, &u, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		yazdir('-');
		yazdir('2');
		ft_putnbr(147483648);
	}
	else if (nb < 0)
	{
		yazdir('-');
		ft_putnbr(-nb);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		yazdir(nb + 48);
}
