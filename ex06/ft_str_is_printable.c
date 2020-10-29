/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngjle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 14:00:06 by youngjle          #+#    #+#             */
/*   Updated: 2020/10/29 19:19:06 by youngjle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str)
{
	if (*str == 0)
		return (1);
	while (*str != '\0')
	{
		if (*str <= 31 || *str == 127)
			return (0);
		str++;
	}
	return (1);
}