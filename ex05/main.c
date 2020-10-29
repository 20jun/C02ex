/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngjle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 13:49:52 by youngjle          #+#    #+#             */
/*   Updated: 2020/10/29 14:01:33 by youngjle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_uppercase(char *str);

int		main(void)
{
	char str[] = "\0 ADOQU";

	printf("%s\n", str);
	ft_str_is_uppercase(str);
	printf("%d\n", ft_str_is_uppercase(str));
}
