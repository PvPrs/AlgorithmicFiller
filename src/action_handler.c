/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   action_handler.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-boc <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/01/15 16:27:20 by dvan-boc      #+#    #+#                 */
/*   Updated: 2020/01/15 16:27:21 by dvan-boc      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/filler.h"
#include "../libft/includes/libft.h"
#include "../includes/player.h"

/**
 * The player will write on standard input
 * the coordinates of the position.
 * @param map	represents the map being manipulated.
 * @param row	represents line number.
 * @param col	represents column number.
 * @return		-1 = does not fit on curren coord.
 * 				0  = ??
 * 				1 = success!
 * Only one 'token' should overlap a previous token.
 * @warning Take into consideration that the 'dots' are included.
 * 	Example: ..*..
 * 			 ...*.
 * 			 ...*.
 */
int				set_piece(struct s_vars *vars, struct s_coords *coords)
{
	if (vars != NULL || coords != NULL)
		return (1);
	//ft_strcpy(vars->map[coords->x][coords->y], vars->piece);
	return (0);
}

/**
** Finds the most sufficient X,Y coordinates to place piece.
** loop through grid, find first occurance of an already placed token
** 	by looping through the grid, and checking if it contains a character
** 	use the token coordinats to check the surrounding squares, if only 1 overlaps, set piece!
** @param map
** @param piece
** @return
*/
struct s_coords	*input_locator(struct s_vars *vars)
{
	if (vars != NULL)
	{

	}
	struct s_coords *coords;

	coords = malloc(sizeof(struct s_coords));
//	unsigned int	overlaps;
//	unsigned int	x,
//					y,
//					token_x,
//					token_y4;
//
//	overlaps = 0;
//	x, y = 0;
//	token_x, token_y = 0;
//	while (vars->map[x] != NULL)
//	{
//		while (vars->map[x][y] != NULL)
//		{
//			if (vars->map[x][y] == ('.' || vars->token))
//
//		}
//
//	}
//	while (vars->map[x][y] != NULL)
//	{
//		while (vars->map[x][y] != NULL)
//		{
//			while (vars->piece[token_x][token_y])
//		}
//	}
	return (coords);
}

/**
 * Before calling'link#set_piece' transform the previous 'Token'
 * Transform the previous lowercase char's to uppercase
 * @param player
 * @param map
 * @return
 */
char			*transform_piece(char *map)
{
	map = NULL;
	return (NULL);
}
