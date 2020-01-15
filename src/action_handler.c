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

/**
 * Read every given token received from the VM
 * Read the token in it's entirety including the dots.
 * @return
 */
char	*get_token()
{
	return ()
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
int		set_token(char *map, int col, int row)
{
	if (player)
		map[col][row] = 'x';
}

/**
 * Before calling'link#set_piece' transform the previous 'Token'
 * Transform the previous lowercase char's to uppercase
 * @param player
 * @param map
 * @return
 */
char	*transform_token(char *map)
{

}