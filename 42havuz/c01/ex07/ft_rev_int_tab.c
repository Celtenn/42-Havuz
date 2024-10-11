/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idkahram <idkahram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 14:09:15 by idkahram          #+#    #+#             */
/*   Updated: 2024/07/10 00:08:07 by idkahram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	change;

	i = 0;
	while (i < size / 2)
	{
		change = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = change;
		i++;
	}
}
