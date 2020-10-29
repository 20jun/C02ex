/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngjle <youngjle@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 17:21:03 by youngjle          #+#    #+#             */
/*   Updated: 2020/10/29 19:59:37 by youngjle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int		main(void)
{
	int n;

	n = 4;
	char src[26] = "abcde";
	char dest[100] = "";
	printf("%s\n", dest);
	printf("%s\n", ft_strncpy(dest, src, n));
}
