/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idkahram <idkahram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 14:12:38 by idkahram          #+#    #+#             */
/*   Updated: 2024/07/10 00:09:00 by idkahram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	e;
	int	change;

	while (size > 0)
	{
		e = 0;
		while (e < size - 1)
		{
			if (tab[e] > tab[e + 1])
			{
				change = tab[e];
				tab[e] = tab[e + 1];
				tab[e + 1] = change;
			}
			e++;
		}
		size--;
	}
}
