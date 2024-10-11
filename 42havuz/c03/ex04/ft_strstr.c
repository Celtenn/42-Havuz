/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idkahram <idkahram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 14:13:52 by idkahram          #+#    #+#             */
/*   Updated: 2024/07/22 17:59:27 by idkahram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	t;

	i = 0;
	t = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (str[i + t] == to_find[t])
		{
			t++;
			if (to_find[t] == '\0')
			{
				return (str + i);
			}
		}
		i++;
		t = 0;
	}
	return (0);
}
