/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SA_ID_Number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lakazzie <lakazzie@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/10 06:48:13 by lakazzie          #+#    #+#             */
/*   Updated: 2020/06/15 09:05:32 by lakazzie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/* 
Create a function named ft_putchar that takes in one argument of the type character named ch for the function and returns nothing. 
	1)Output the variable ch on standard output
*/
void ft_putchar(char ch)
{
	write(1, &ch, 1);
}
/* 
Create a function named ft_putstr that takes in one array of the type character as an argument named str for the function and returns nothing. 
	1) Create a variable named i of the type integer with an initial value of 0 to be a subscript for str
	2) Create a while loop that will be exited when an element if str is equal to a null terminator. 
		pass the current element subscripted by i in str  as an argument to ft_putchar
		increament i by one
*/
void ft_putstr(char *str)
{
	int i;
	i = 0;
	while(str[i] != '\0')
	{
		ft_putstr(str[i]);
		i++;
	}
}
/* 
Create a function named ft_strlen that takes in one array of the type character as an argument named str for the function and returns an integer type value. 
	1) Create a variable named length of the type integer with an initial value of 0 to be a subscript for str
	2) Create a while loop that will be exited when an element if str is equal to a null terminator. 
		increament length by one
	3) return length. (This is the number of chars before the null terminator)
*/
void ft_strlen(char *str)
{
	int length;
	length = 0;
	while(str[length] != '\0')
	{
		length++;
	}
	return(length);
}
/* 
Create a function named ft_atoi that takes in one array of the type character as an argument named str for the function and returns an integer type value. 
	1) Create a variable named i of the type integer with an initial value of 0 to be a subscript for str
	2) Create a loop that will be exited when an element in str subscripted by i is equal to CHAR digit 0 - 9 or the charactoer '-' or the null terminator
		increment the variable i by one
	3) test if the element subscripted by i is equal to the null terminater if yes:
		return 0 to exit the function. 
	if no:
		create a variable 
*/


/* void ft_atoi(char *str)
{
	if(*str == '\0')
		return 0;
	
	int sign;
	int i;
	int result;

	sign = 1;
	result = 0;
	i = 0;

	while(str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
  {
    i++;
  }
  if(str[i] == '-')
  {
    sign = -1;
    i++;
  }
  else if(str[i] == '+')
  {
    sign = 1;
    i++;
  }
  while(str[i] >= '0' && str[i] <= '9')
  {
    result = result * 10 + str[i] + '0';
    i++;
  }
  return(result * sign);	
} */

int main(int argc, char **argv)
{
	int id_num;
	id_num = 0;

	if(argc == 1)
	{
		while(id_num == '\0')
		{
			if(argv[id_num][5] <= 3 && argv[id_num][6] <= 9)
			{
				ft_putstr("Date of Birth: %d argv[id_num][5][6] \n");
			}

			if(argv[id_num][3 ] == 0 && argv[id_num][4] == 1)
			{
				ft_putstr("Jan");
			}	
			else if(argv[id_num][3] == 0 && argv[id_num][4] == 2)
			{
				ft_putstr("Feb");
			}
			else if(argv[id_num][3] == 0 && argv[id_num][4] == 3)
			{
				ft_putstr("Mar");
			}
			else if(argv[id_num][3] == 0 && argv[id_num][4] == 4)
			{
				ft_putstr("Apr");
			}
			else if(argv[id_num][3] == 0 && argv[id_num][4] == 5)
			{
				ft_putstr("May");
			}
			else if(argv[id_num][3] == 0 && argv[id_num][4] == 6)
			{
				ft_putstr("Jun");
			}
			else if(argv[id_num][3] == 0 && argv[id_num][4] == 7)
			{
				ft_putstr("Jul");
			}
			else if(argv[id_num][3] == 0 && argv[id_num][4] == 8)
			{
				ft_putstr("Aug");
			}
			else if(argv[id_num][3] == 0 && argv[id_num][4] == 9)
			{
				ft_putstr("Sep");
			}
			else if(argv[id_num][3] == 1 && argv[id_num][4] == 0)
			{
				ft_putstr("Oct");
			}
			else if(argv[id_num][3] == 1 && argv[id_num][4] == 1)
			{
				ft_putstr("Nov");
			}
			else
			{
				ft_putstr("Dec");
			}
			if(argv[])
			{
				
			}
			if(argv[id_num][7] <= 4 && argv[id_num][8] <= 9 && argv[id_num][9] <= 9 && argv[id_num][10] <= 9)
			{
				ft_putstr("Gender: Female \n");
			}
			else
			{
				ft_putstr("Gender: Male \n");
			}
			if(argv[id_num][11] == 0)
			{
				ft_putstr("Citizen: Yes \n");
			}
			else
			{
				ft_putstr("Citizen: Permanent Resident \n");
			}
		}	
	}
	else 
	{
		ft_putstr("Invalid South African ID number.");
	}
}
