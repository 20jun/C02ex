/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngjle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 14:10:28 by youngjle          #+#    #+#             */
/*   Updated: 2020/10/29 21:16:10 by youngjle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str);

int		main(void)
{
	char str[] = "AaSsJjjDdOoAaDdJjj";

	printf("%s\n", str);
	ft_strlowcase(str);
	printf("%s\n", ft_strlowcase(str));
}
