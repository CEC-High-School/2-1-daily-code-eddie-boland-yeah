#include <allegro5/allegro.h>
#include <allegro5/allegro_primitives.h>

int main() {
	al_init();
	al_init_primitives_addon();

	ALLEGRO_DISPLAY *display = al_create_display(500, 500);

	al_clear_to_color(al_map_rgb(255, 255, 255));

	al_draw_arc(300, 300, 25, 240, 80, al_map_rgb(120,255,300),30);
	al_draw_rounded_rectangle(220, 300, 92, 85,60,90,al_map_rgb (0,0,500), 45);
	al_draw_ellipse(90, 90, 35, 45, al_map_rgb(500, 0, 0),30);

	al_flip_display();

	al_rest(10);

	al_destroy_display(display);

}