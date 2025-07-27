Para ejecutar la libreria grafica:

sudo apt-get install cmake xorg libxext-dev zlib1g-dev libbsd-dev -y libgl1-mesa-dev libx11-dev libglfw3-dev
Crear en MLX una carpeta build y hacer dentro un cmake ..
Esto genera un makefile automaticamente y se ejecuta con make

Esto genera un .a que se añade al makefile de nuestro proyecto so_long.-