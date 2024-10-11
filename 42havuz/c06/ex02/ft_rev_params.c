/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idkahram <idkahram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 18:49:54 by idkahram          #+#    #+#             */
/*   Updated: 2024/07/24 05:29:48 by idkahram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	r;

	r = 0;
	i = argc - 1;
	while (i > 0)
	{
		r = 0;
		while (argv[i][r])
		{
			write(1, &argv[i][r], 1);
			r++;
		}
		write(1, "\n", 1);
		i--;
	}
}
