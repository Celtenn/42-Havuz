/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idkahram <idkahram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 21:14:50 by idkahram          #+#    #+#             */
/*   Updated: 2024/07/19 21:19:36 by idkahram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	negative(char *str, int *sw)
{
	int	i;
	int	ops;

	i = 0;
	ops = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
	{
		i++;
	}
	while (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
		{
			ops *= -1;
		}
		i++;
	}
	*sw = i;
	return (ops);
}

int	ft_atoi(char *str)
{
	int	i;
	int	number;
	int	negatif;

	number = 0;
	negatif = negative(str, &i);
	while (str[i] >= 48 && str[i] <= 57)
	{
		number *= 10;
		number += str[i] - 48;
		i++;
	}
	number *= negatif;
	return (number);
}
