/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_examples.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwaters <pwaters@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 09:47:17 by pwaters           #+#    #+#             */
/*   Updated: 2022/01/26 10:11:57 by pwaters          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	char	*str;
	int		i;

	i = 10;
	str = "Test str";
	printf("1st var - string with s: %s; 2d var in same printf - int with d: %d", str, i);
	return (0);
}
