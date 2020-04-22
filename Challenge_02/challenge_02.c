/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   challenge_02.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lakazzie <lakazzie@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/07 17:57:41 by lakazzie          #+#    #+#             */
/*   Updated: 2020/04/22 21:07:35 by lakazzie         ###   ########.fr       */
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

int main( int argc, char **argv)
{
	int i;
	char a;
	i = 2;
	a = 0;
	
	if(argc == 3)
	{
		if(argv[2] < argv[i])
		{
			ft_putstr("Please enter 1 char numnut \n \n");
		}
		while(argv[1][i] != argv[2][a]) 
		{
			i++;
		}
	ft_putchar((argv[1][i])('\n'));
		while(argv[1][i] != argv[2][a])
		{
		ft_putstr("ZERO\n");
		}
	}
	else
	{
		ft_putstr("\n \n \n");
	}
	return (0);
}