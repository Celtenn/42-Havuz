/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idkahram <idkahram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 18:50:29 by idkahram          #+#    #+#             */
/*   Updated: 2024/07/24 01:42:24 by idkahram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	change(char **nbr, char **mbr)
{
	char	*swp;

	swp = *nbr;
	*nbr = *mbr;
	*mbr = swp;
}

void	len(char **str, int nb)
{
	int	i;
	int	j;
	int	size;

	i = 1;
	size = nb - 1;
	while (i < size)
	{
		j = 0;
		while (str[i][j] || str[i + 1][j])
		{
			if (str[i][j] > str[i + 1][j])
			{
				change(&str[i], &str[i + 1]);
				break ;
			}
			else if (str[i][j] < str[i + 1][j])
				break ;
			j++;
		}
		i++;
	}
}

void	cmp(char **str, int nb)
{
	int	n;

	n = nb - 1;
	while (n >= 1)
	{
		len(str, nb);
		n--;
	}
}

int	main(int nb, char **str)
{
	int	i;
	int	j;

	i = 1;
	if (nb >= 2)
		cmp(str, nb);
	while (str[i])
	{
		j = 0;
		while (str[i][j] != '\0')
		{
			write(1, &str[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
