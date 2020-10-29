/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngjle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 13:27:17 by youngjle          #+#    #+#             */
/*   Updated: 2020/10/29 15:55:57 by youngjle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_lowercase(char *str);

int		main(void)
{
	char str[10] = "odjakl";

	printf("%s\n", str);
	ft_str_is_lowercase(str);
	printf("%d\n", ft_str_is_lowercase(str));
}
