/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idkahram <idkahram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 19:44:01 by idkahram          #+#    #+#             */
/*   Updated: 2024/07/15 15:40:28 by idkahram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	strcap(char n)
{
	return ((n == ' ') || (n >= 33 && n <= 47)
		|| (n >= 58 && n <= 64)
		|| ((n >= 91 && n <= 96) || (n >= 123)));
}

char	*ft_strcapitalize(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		if ((str[n] >= 97 && str[n] <= 122) || (str[n] >= 65 && str[n] <= 90))
		{
			if (n == 0 || strcap(str[n - 1]))
			{
				if (str[n] >= 97 && str[n] <= 122)
				{
					str[n] = str[n] - 32;
				}
			}
			else if (str[n] >= 65 && str[n] <= 90)
			{
				str[n] = str[n] + 32;
			}
		}
		n++;
	}
	return (str);
}
