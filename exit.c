/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   exit.c											 :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: mehakcan <mehakcan@student.42.com.tr>	  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2024/05/18 10:41:16 by mehakcan		  #+#	#+#			 */
/*   Updated: 2024/05/18 17:59:22 by mehakcan		 ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include <stdlib.h>
#include "push_swap.h"
#include "libft/libft.h"

void	ft_free(char **str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}

void	ft_error(char *str, t_stack *stack)
{
	if (stack->tmp)
		ft_free(stack->tmp);
	if (stack->a != NULL)
		free(stack->a);
	if (stack->b != NULL)
		free(stack->b);
	if (stack->num != NULL)
		free(stack->num);
	ft_putstr_fd(str, 2);
	exit(-1);
}
