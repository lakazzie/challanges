/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Challenge02.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lakazzie <lakazzie@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/24 06:33:49 by lakazzie          #+#    #+#             */
/*   Updated: 2020/04/24 10:15:13 by lakazzie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char ch)
{
	write(1, &ch, 1);
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

int main(int argc, char **argv)
{
	int i;
	int a;
	i = 2;
	a = 0;
	
	if(argc == 3)
	{
		if(argv[2] && argv[3])
		{
			if((ft_strlen(argv[3])) <= 0)
			{
				ft_putstr("Please enter 1 char numnut. \n \n");
			}
			while((argv[i][0]) != (argv[2][a]))
			{
				i++;
			}
			ft_putchar(i);
			ft_putchar('\n');
		}
		else
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