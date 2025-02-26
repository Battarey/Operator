#include <SFML/Graphics.hpp>

using namespace sf;

#define Max_main_menu 4
#define Max_polygon_menu 5

class MainMenu {
public:
	MainMenu(float width, float height);

	void draw(RenderWindow& window);
	void MoveUp();
	void MoveDown();

	int MainMenuPressed() { return MainMenuSelected; }
private:
	short MainMenuSelected;
	Font font;
	Text mainMenu[Max_main_menu];
};

class MainMenuPolygon {
public:
	MainMenuPolygon(float width, float height);

	void draw_polygon(RenderWindow& window);
	void MoveUp_polygon();
	void MoveDown_polygon();

	int PolygonMenuPressed() { return PolygonMenuSelected; }
private:
	short PolygonMenuSelected;
	Font font;
	Text PolygMenu[Max_polygon_menu];
};