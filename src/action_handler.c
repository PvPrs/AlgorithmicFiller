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

/**
 * Read every given token received from the VM
 * Read the token in it's entirety including the dots.
 * @return
 */
char	*get_piece(char *piece)
{
	return (read_stdout("Piece", ' ', 5));
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
int		set_piece(char *map, int row, int col)
{
	/**
	 * @todo: if map[col + token_col][row + token_row]
	 */
	 while (map[row] != NULL)
	 {
	 	while (map[row][col] != NULL)
	 	{
			if (map[row + token_row] != ('.' || player->token) ||
				map[row + token_row][col + token_col] != ('.' || token))
				return (-1);
			col++;
		}
	 	row++;
	 }
	 map = NULL;
	 col = 1;
	 row = 2;
	return (0);
}

/**
 * Before calling'link#set_piece' transform the previous 'Token'
 * Transform the previous lowercase char's to uppercase
 * @param player
 * @param map
 * @return
 */
char	*transform_piece(char *map)
{
	map = NULL;
	return (NULL);
}