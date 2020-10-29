/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngjle <youngjle@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 15:53:05 by youngjle          #+#    #+#             */
/*   Updated: 2020/10/29 21:39:16 by youngjle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] <= 64)
			return (0);
		if (91 <= str[i] && str[i] <= 96)
			return (0);
		if (123 <= str[i])
			return (0);
		i++;
	}
	return (1);
}
