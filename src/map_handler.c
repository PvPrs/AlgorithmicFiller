/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   map_gen.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-boc <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/01/15 11:26:06 by dvan-boc      #+#    #+#                 */
/*   Updated: 2020/01/15 11:26:07 by dvan-boc      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/**
 * The Virtual Machine 'filler_vm'
 * Prints the map upon starting the project.
 * Prints players 'token' on every turn.
 */

#include ""
#include "/includes/filler.h"

/**
 * Reads file contents
 * @param file	represents the map file
 * 				@TODO: Probably reading from Standard Output. fd for: stdout = 1;
 * @return A pointer to the read map;
 */
char	*read_map(int fd)
{

}

/**
 * @param map Represents a pointer to a linear allocated 2D Array.
 * @param col Represents the column size.
 * @param row Represents the line size.
 * @return
 */
int		alloc_map(char *map, int col, int row)
{
	map = malloc(sizeof(char[col][row]));
	if (!map)
	{
		return (-1);
	}
	return (0);
}

/**
 * Read every given token received from the VM
 * Read the token in it's entirety including the dots.
 * @return
 */
int		get_token()
{

}

/**
 * The player will write on standard input
 * the coordinates of the position.
 * @param player represents the current object playing.
 * @param map	represents the map being manipulated.
 * @param col	represents column number.
 * @param row	represents line number.
 * @return		-1 = does not fit on curren coord.
 * 				0  = ??
 * 				1 = success!
 * @warning Take into consideration that the 'dots' are included.
 * 	Example: ..*..
 * 			 ...*.
 * 			 ...*.
 */
int		set_token(struct s_player player, char *map, int col, int row)
{
	if (player)
	map[col][row] = 'x';
}

/**
 * Before calling'link#set_piece' transform the previous
 * get shape of token and
 * @param player
 * @param map
 * @return
 */
char	*transform_token(struct s_player player, char *map)
{

}