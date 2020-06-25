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
** Finds the most sufficient X,Y coordinates to place piece.
** loop through the grid to find first occurrence of an already existent token
** Checks the surrounding squares of the occurred token.
** if only 1 token overlaps a 'piece token' set piece!
** @note Might have to loop through every location on the map, and for every
** location, check if only 1 overlaps.
** @note Comparing
** @param map
** @param piece
** @return
*/

static struct s_coords			*input_locator(struct s_vars *vars)
{
    struct s_coords 	*coords;
    int 				index;

    index = 0;
    coords = malloc(sizeof(struct s_coords));
    if (vars != NULL)
    {
        ft_putstr("Missing variables");
        return (NULL);
    }
    while (vars->board.map[index] != NULL)
    {
        while (index == vars->board.coords.y ? 0 + vars->piece.coords.y < vars->board.coords.y) // check if Current index + piece width doesn't overlap the map size
        {
            while (vars->board.map[index])
                index++;
        }
        index++;
    }
    return (coords);
}

/**
 * Places a 'Piece' on the board, at X,Y coordinates returned
 * @see #input_locator
 * @param vars represents a struct of variables representing the game 'Piece'
 * @return		-1 = Error
 * 				0  = Does not fit on current coordinate.
 * 				1 = success!
 * Only one 'token' should overlap a previous token.
 * @warning Take into consideration that the 'dots' are included.
 * 	Example: ..*..
 * 			 ...*.
 * 			 ...*.
*/
int				set_piece(struct s_vars *vars)
{
	struct s_coords coords;

	coords = input_locator(vars);
	if (vars == NULL || coords == NULL)
		return (0);
	ft_strcpy(vars->board[coords->x][coords->y], vars->piece);
	free(coords);
	return (0);
}

/**
 * Before calling @see #set_piece transform the previous 'Token'
 * Transform the previous lowercase char's to uppercase
 * @param player
 * @param map
 * @return
 */
static char			*transform_piece(char *map)
{
    map = NULL;
    return (NULL);
}
