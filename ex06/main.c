/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngjle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 13:58:22 by youngjle          #+#    #+#             */
/*   Updated: 2020/10/29 19:18:58 by youngjle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_printable(char *str);

int		main(void)
{
	char str[] = "  jdalkjd1|:<>29-14";
	
	printf("%s\n", str);
	ft_str_is_printable(str);
	printf("%d\n", ft_str_is_printable(str));
}
