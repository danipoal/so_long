#include "../so_long.h"


int	main(void)
{
	// Start mlx
	mlx_t* mlx = mlx_init(WIDTH, HEIGHT, "Test", true);
	if (!mlx)
        ft_error();

	// Try to load the file
	mlx_texture_t* texture = mlx_load_png("textures/floor.png");
	if (!texture)
        ft_error();
	
	// Convert texture to a displayable image
	mlx_image_t* img = mlx_texture_to_image(mlx, texture);
	if (!img)
        ft_error();

	// Display the image
	if (mlx_image_to_window(mlx, img, 0, 0) < 0)
        ft_error();

	mlx_loop(mlx);

	// Optional, terminate will clean up any leftovers, this is just to demonstrate.
	mlx_delete_image(mlx, img);
	mlx_delete_texture(texture);
	mlx_terminate(mlx);
	return (EXIT_SUCCESS);
}


/*
int main(void)
{
    // Inicializa la ventana
    mlx_t* mlx = mlx_init(WIDTH, HEIGHT, "MLX42 test", true);
    if (!mlx)
        return (EXIT_FAILURE);

    // Crea una imagen vacía (como un "canvas")
    mlx_image_t* img = mlx_new_image(mlx, WIDTH, HEIGHT);
    if (!img)
    {
        mlx_terminate(mlx);
        return (EXIT_FAILURE);
    }

    // Rellena la imagen con color rojo
    for (int y = 0; y < HEIGHT; ++y)
    {
        for (int x = 0; x < WIDTH; ++x)
        {
            mlx_put_pixel(img, x, y, 0xFF0000FF);  // RGBA: rojo
        }
    }

    // Muestra la imagen en pantalla
    mlx_image_to_window(mlx, img, 0, 0);

    // Entra en el bucle principal de MLX
    mlx_loop(mlx);

    // Libera recursos al cerrar
    mlx_terminate(mlx);
    return (EXIT_SUCCESS);
}
*/