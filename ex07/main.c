/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngjle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 14:10:28 by youngjle          #+#    #+#             */
/*   Updated: 2020/10/29 14:51:46 by youngjle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str);

int		main(void)
{
	char str[] = "AaSsJjjDdOoAaDdJjj";

	printf("%s\n", str);
	ft_strupcase(str);
	printf("%s\n", ft_strupcase(str));
}
