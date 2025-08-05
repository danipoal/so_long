#ifndef SO_LONG_H
# define SO_LONG_H

# include <stdlib.h>  // Para exit()

# include "libs/Libft/libft.h"
# include "libs/ft_printf/ft_printf.h"
# include "libs/MLX42/include/MLX42/MLX42.h"

#define WIDTH 800
#define HEIGHT 600

typedef struct	s_data {
	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
}				t_data;

// Utils
int	ft_error();

#endif