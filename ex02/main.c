/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngjle </var/mail/youngjle>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 21:15:59 by youngjle          #+#    #+#             */
/*   Updated: 2020/10/29 21:39:09 by youngjle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_alpha(char *str);

int		main(void)
{
	char str[] = "djaskldDOASJDdkaldjal|_+_+_+";
	ft_str_is_alpha(str);
	printf("%d\n", ft_str_is_alpha(str));
}
