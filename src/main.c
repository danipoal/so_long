#include "../so_long.h"
#include <stdlib.h>  // Para exit()

#define WIDTH 800
#define HEIGHT 600

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
