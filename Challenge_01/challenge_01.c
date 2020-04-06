/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   challenge_01.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lakazzie <lakazzie@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/06 19:59:30 by lakazzie          #+#    #+#             */
/*   Updated: 2020/04/06 21:20:31 by lakazzie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char ch)
{
	write (1, &ch, 1);
}

void ft_putstr(char *str)
{
	int i;
	i = 0;
	while(str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int ft_strlen(char *str)
{
	int length;
	length = 0;
	while(str[length] != '\0')
	{
		length++;
	}
	return (length);
}

int main(int argc,char **argv)
{
	int ch;
	ch = 0;
	if(argc != '\0')
	{
		int n;
		int i;
		int sum;
		n = 0; 
		i = 0;
		sum = 0;
		while(i <= n)
		{
			sum += i;
			i++;
		}
		ft_putstr("Sum '\n'");
	}
	if(argc == '\0')
	{
		if(ft_strlen(argv[ch]) != '\0')
		{
			ft_putstr("shortest argument '\n'");
		}
	}
	return (0);
}