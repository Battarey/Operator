#include "GameMenu.h"

MainMenu::MainMenu(float width, float height) {

	font.loadFromFile("Fonts/Kroftsmann.ttf");

	// Название
	mainMenu[0].setFont(font);
	mainMenu[0].setFillColor(Color::White);
	mainMenu[0].setString("Operator");
	mainMenu[0].setCharacterSize(175);
	mainMenu[0].setPosition(600, 50);
	// Первое меню
	mainMenu[1].setFont(font);
	mainMenu[1].setFillColor(Color(50, 200, 150));
	mainMenu[1].setString("Play");
	mainMenu[1].setCharacterSize(135);
	mainMenu[1].setPosition(800, 375);
	// Второе
	mainMenu[2].setFont(font);
	mainMenu[2].setFillColor(Color::White);
	mainMenu[2].setString("About");
	mainMenu[2].setCharacterSize(135);
	mainMenu[2].setPosition(760, 550);
	// Третье
	mainMenu[3].setFont(font);
	mainMenu[3].setFillColor(Color::White);
	mainMenu[3].setString("Exit");
	mainMenu[3].setCharacterSize(135);
	mainMenu[3].setPosition(800, 725);

	MainMenuSelected = 1;
}

void MainMenu::draw(RenderWindow& window) { for (int i = 0; i < Max_main_menu; i++) { window.draw(mainMenu[i]); } }

void MainMenu::MoveUp() {
	if (MainMenuSelected - 1 >= 0) {
		mainMenu[MainMenuSelected].setFillColor(Color::White);

		MainMenuSelected--;
		if (MainMenuSelected == 0) { MainMenuSelected = 3; }
		mainMenu[MainMenuSelected].setFillColor(Color(50, 200, 150));
	}
}

void MainMenu::MoveDown() {
	if (MainMenuSelected + 1 <= Max_main_menu) {
		mainMenu[MainMenuSelected].setFillColor(Color::White);

		MainMenuSelected++;
		if (MainMenuSelected == 4) { MainMenuSelected = 1; }
		mainMenu[MainMenuSelected].setFillColor(Color(50, 200, 150));
	}
}

/////////////////////////////////////////////////////////////////////////////////////////

MainMenuPolygon::MainMenuPolygon(float width, float height) {

	font.loadFromFile("Fonts/Kroftsmann.ttf");

	PolygMenu[0].setFont(font);
	PolygMenu[0].setFillColor(Color::White);
	PolygMenu[0].setString("Operator");
	PolygMenu[0].setCharacterSize(150);
	PolygMenu[0].setPosition(600, 50);
	// Пистолет
	PolygMenu[1].setFont(font);
	PolygMenu[1].setFillColor(Color::White);
	PolygMenu[1].setString("Pistol");
	PolygMenu[1].setCharacterSize(150);
	PolygMenu[1].setPosition(685, 450);
	// Карабин
	PolygMenu[2].setFont(font);
	PolygMenu[2].setFillColor(Color(50, 200, 150));
	PolygMenu[2].setString("Carabine");
	PolygMenu[2].setCharacterSize(150);
	PolygMenu[2].setPosition(610, 575);
	// Снайпа
	PolygMenu[3].setFont(font);
	PolygMenu[3].setFillColor(Color::White);
	PolygMenu[3].setString("Sniper Rifle");
	PolygMenu[3].setCharacterSize(150);
	PolygMenu[3].setPosition(490, 700);
	// Наркомания
	PolygMenu[4].setFont(font);
	PolygMenu[4].setFillColor(Color::White);
	PolygMenu[4].setString("Press 'Home' :)");
	PolygMenu[4].setCharacterSize(20);
	PolygMenu[4].setPosition(1800, 10);

	PolygonMenuSelected = 2;
}

void MainMenuPolygon::draw_polygon(RenderWindow& window) { for (int i = 0; i < Max_polygon_menu; i++) { window.draw(PolygMenu[i]); } }

void MainMenuPolygon::MoveUp_polygon() {
	if (PolygonMenuSelected - 1 >= 0) {
		PolygMenu[PolygonMenuSelected].setFillColor(Color::White);

		PolygonMenuSelected--;
		if (PolygonMenuSelected == 0) { PolygonMenuSelected = 3; }
		PolygMenu[PolygonMenuSelected].setFillColor(Color(50, 200, 150));
	}
}

void MainMenuPolygon::MoveDown_polygon() {
	if (PolygonMenuSelected + 1 <= Max_polygon_menu) {
		PolygMenu[PolygonMenuSelected].setFillColor(Color::White);

		PolygonMenuSelected++;
		if (PolygonMenuSelected == 4) { PolygonMenuSelected = 1; }
		PolygMenu[PolygonMenuSelected].setFillColor(Color(50, 200, 150));
	}
}