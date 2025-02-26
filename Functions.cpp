#include "Functions.h"
#include "Videos.h"
#include "GameMenu.h"

short rand_music = 0;
void Main_menu(RenderWindow& window) {
	Video video;
	Loading load;
	SoundBuffer buffer_switch;
	Sound Switch_menu;
	SoundBuffer buffer_chosie;
	Sound Choise_menu;
	Font font;
	Music music_main_rand[2];

	Cursor cursor;
	window.setMouseCursorVisible(false);

	MainMenu mainMenu(window.getSize().x, window.getSize().y);

	music_main_rand[0].openFromFile("Sounds_Music\\MusicGame\\Music_first.ogg");
	music_main_rand[1].openFromFile("Sounds_Music\\MusicGame\\Music_second.ogg");
	srand(time(0));
	rand_music = rand() % (2 - 1) + 1;
	if (rand_music == 1) { music_main_rand[0].play(); music_main_rand[0].setVolume(20.f); music_main_rand[0].setLoop(true); }
	else { music_main_rand[1].play(); music_main_rand[1].setVolume(20.f); music_main_rand[1].setLoop(true); }

	buffer_switch.loadFromFile("Sounds_Music\\Sounds\\Switching.ogg");
	Switch_menu.setBuffer(buffer_switch);
	buffer_chosie.loadFromFile("Sounds_Music\\Sounds\\choise.ogg");
	Choise_menu.setBuffer(buffer_chosie);

	font.loadFromFile("Fonts/Kroftsmann.ttf");

	while (window.isOpen()) {
		Event event_menu;
		while (window.pollEvent(event_menu)) {

			if (event_menu.type == Event::Closed) { window.close(); }
			if (event_menu.type == Event::KeyReleased) {
				if (event_menu.key.code == Keyboard::Up) { mainMenu.MoveUp(); Switch_menu.play(); break; }
				if (event_menu.key.code == Keyboard::Down) { mainMenu.MoveDown(); Switch_menu.play(); break; }
				if (event_menu.key.code == Keyboard::Return) {
					short selected_button = mainMenu.MainMenuPressed();
					if (selected_button == 1) {
						music_main_rand[0].stop(); music_main_rand[1].stop(); Choise_menu.play();
						/*Loading_menu(window);*/ Count_Load(window); Choise_gun(window);
						break;
					}
					else if (selected_button == 2) {
						music_main_rand[0].stop(); music_main_rand[1].stop(); Choise_menu.play();
						Loading_menu(window); About_game(window);
						break;
					}
					else if (selected_button == 3) { Choise_menu.play(); window.close(); break; }
				}
			}
		}

		if (Keyboard::isKeyPressed(Keyboard::Scan::NumpadPlus)) { window.close(); break; }

		video.Next_cadr();

		window.clear(Color::Black);
		window.draw(video.sprite);
		mainMenu.draw(window);
		window.display();
	}
}

void About_game(RenderWindow& window) {
	About_video ab_vd;
	ab_vd.Next_cadr_about();

	Music music_about;
	music_about.openFromFile("Sounds_Music\\MusicGame\\StarWars_music.ogg");
	music_about.play();
	music_about.setVolume(20.f);

	while (window.isOpen()) {
		Event event_ab;
		while (window.pollEvent(event_ab)) {
			if (event_ab.type == Event::KeyPressed) {
				if (event_ab.key.code == Keyboard::Escape) { music_about.stop(); Loading_menu(window); Main_menu(window); }
			}
		}
		window.clear(Color::Black);
		ab_vd.Next_cadr_about();
		window.draw(ab_vd.sprite_about);
		window.display();
	}
	music_about.stop();
}

void Loading_menu(RenderWindow& window) {
	Loading load;
	load.Next_cadr_load();

	SoundBuffer buffer_radio;
	Sound radio;
	buffer_radio.loadFromFile("Sounds_Music\\Sounds\\radio.ogg");
	radio.setBuffer(buffer_radio);
	radio.play();

	do {
		load.Next_cadr_load();
		window.draw(load.sprite_Load);
		window.display();
	} while (load.count_Load != 1);
}

void Error_Load(RenderWindow& window) {
	Loading load;
	load.Next_cadr_load();

	SoundBuffer buffer_415;
	Sound baze_415;
	buffer_415.loadFromFile("Sounds_Music\\Sounds\\Baza_radio.ogg");
	baze_415.setBuffer(buffer_415);
	baze_415.play();

	do {
		load.Next_cadr_load();
		window.draw(load.sprite_Load);
		window.display();
	} while (load.count_Load != 9);
}

short count_loadings = 0;
void Count_Load(RenderWindow& window) {
	count_loadings += 1;
	if (count_loadings == 7) { count_loadings = 0; Error_Load(window); }
	else { Loading_menu(window); }
}

///////////////////////////////////////////////////////////////

short count_menu = 0, chosie_music = 0;
void Choise_gun(RenderWindow& window) {
	Solo_Animation ch_vd;
	Dog_Animation dg_an;
	Bipods_Animation bd_an;
	Duo_Animation du_an;

	count_menu += 1;

	Music music_choise_rand[2];
	music_choise_rand[0].openFromFile("Sounds_Music\\MusicGame\\Music_third.ogg");
	music_choise_rand[1].openFromFile("Sounds_Music\\MusicGame\\Music_four.ogg");
	chosie_music = rand() % (2 - 1) + 1;
	if (chosie_music == 1) { music_choise_rand[0].play(); music_choise_rand[0].setVolume(20.f); music_choise_rand[0].setLoop(true); }
	else { music_choise_rand[0].play(); music_choise_rand[0].setVolume(20.f); music_choise_rand[0].setLoop(true); }

	MainMenuPolygon PolygMenu(window.getSize().x, window.getSize().y);

	SoundBuffer buffer_switch;
	SoundBuffer buffer_chosie;
	Sound Switch_menu;
	Sound Choise_menu;
	buffer_switch.loadFromFile("Sounds_Music\\Sounds\\Switching.ogg");
	Switch_menu.setBuffer(buffer_switch);
	buffer_chosie.loadFromFile("Sounds_Music\\Sounds\\choise.ogg");
	Choise_menu.setBuffer(buffer_chosie);

	while (window.isOpen()) {
		Event event_ch;
		while (window.pollEvent(event_ch)) {
			if (event_ch.type == Event::Closed) { window.close(); }
			if (event_ch.type == Event::KeyReleased) {
				if (event_ch.key.code == Keyboard::Up) { PolygMenu.MoveUp_polygon(); Switch_menu.play(); break; }
				if (event_ch.key.code == Keyboard::Down) { PolygMenu.MoveDown_polygon(); Switch_menu.play(); break; }
				if (event_ch.key.code == Keyboard::Home) { music_choise_rand[0].stop(); music_choise_rand[1].stop(); Load_Drug(window); Drug(window); break; }
				if (event_ch.key.code == Keyboard::Return) {
					short selected_button_pol = PolygMenu.PolygonMenuPressed();
					if (selected_button_pol == 1) {
						music_choise_rand[0].stop(); music_choise_rand[1].stop(); Choise_menu.play();
						Loading_Polygon(window); Desert(window);
						break;
					}
					else if (selected_button_pol == 2) {
						music_choise_rand[0].stop(); music_choise_rand[1].stop(); Choise_menu.play();
						Loading_Polygon(window); Desert(window);
						break;
					}
					else if (selected_button_pol == 3) {
						music_choise_rand[0].stop(); music_choise_rand[1].stop(); Choise_menu.play();
						Loading_Polygon(window); Desert(window);
						break; 
					}
				}
			}
		}
		if (Keyboard::isKeyPressed(Keyboard::Scan::NumpadPlus)) { window.close(); }
		if (Keyboard::isKeyPressed(Keyboard::Scan::Escape)) { music_choise_rand[0].stop(); music_choise_rand[1].stop(); Count_Load(window); Main_menu(window); }

		ch_vd.Next_cadr_Solo();
		dg_an.Next_cadr_Dog();
		bd_an.Next_cadr_Bipods();
		du_an.Next_cadr_Duo();

		if (count_menu == 1) { window.draw(ch_vd.sprite_Solo); }
		else if (count_menu == 2) { window.draw(dg_an.sprite_Dog); }
		else if (count_menu == 3) { window.draw(bd_an.sprite_Bipods); }
		else if (count_menu == 4) { window.draw(du_an.sprite_Duo); }
		PolygMenu.draw_polygon(window);
		window.display();
	}
	if (count_menu == 4) { count_menu = 0; }
}

void Loading_Polygon(RenderWindow& window) {
	Loading load;
	load.Next_cadr_load();

	SoundBuffer buffer_radio_english;
	Sound radio_english;
	buffer_radio_english.loadFromFile("Sounds_Music\\Sounds\\malena_radio.ogg");
	radio_english.setBuffer(buffer_radio_english);
	radio_english.play();
	do {
		load.Next_cadr_load();
		window.draw(load.sprite_Load);
		window.display();
	} while (load.count_Load != 2);
}

bool error_reload = false; short count_error_shot = 0;
short ammo_pistol = 7, ammo_carabine = 30, ammo_sniper = 10;
short choise_gun_ammo = 0;
void Desert(RenderWindow& window) {
	SoundBuffer fire_pistol;
	SoundBuffer reload_pistol;

	Vector2u size = window.getSize();
	unsigned int width = size.x;
	unsigned int height = size.y;

	Texture texture_desert, texture_cursor, texture_target[4], texture_drone[3];
	texture_desert.loadFromFile("Textures\\Desert\\desert_0.jpg");
	texture_cursor.loadFromFile("Textures\\Cursor\\cursor_RED.png");
	texture_target[0].loadFromFile("Textures\\Target\\Main_tar_3.png");
	texture_target[1].loadFromFile("Textures\\Target\\Main_tar_3.png");
	texture_target[2].loadFromFile("Textures\\Target\\Main_tar_3.png");
	texture_target[3].loadFromFile("Textures\\Target\\Main_tar_3.png");
	texture_drone[0].loadFromFile("Textures\\Target\\Drone.png");
	texture_drone[1].loadFromFile("Textures\\Target\\Drone.png");
	texture_drone[2].loadFromFile("Textures\\Target\\Drone.png");

	Sprite sprite_desert, sprite_cursor, sprite_target[4], sprite_drone[3];
	sprite_desert.setTexture(texture_desert);
	sprite_cursor.setTexture(texture_cursor);
	sprite_cursor.setOrigin(sprite_cursor.getLocalBounds().width / 2, sprite_cursor.getLocalBounds().height / 2);
	sprite_target[0].setTexture(texture_target[0]);
	sprite_target[1].setTexture(texture_target[1]);
	sprite_target[2].setTexture(texture_target[2]);
	sprite_target[3].setTexture(texture_target[3]);
	sprite_drone[0].setTexture(texture_drone[0]);
	sprite_drone[1].setTexture(texture_drone[1]);
	sprite_drone[2].setTexture(texture_drone[2]);

	sprite_target[0].setPosition(Vector2f(500.f, 700.f));
	sprite_target[1].setPosition(Vector2f(750.f, 700.f));
	sprite_target[2].setPosition(Vector2f(1000.f, 700.f));
	sprite_target[3].setPosition(Vector2f(1250.f, 700.f));
	sprite_drone[0].setPosition(Vector2f(300.f, 50.f));
	sprite_drone[1].setPosition(Vector2f(500.f, 50.f));
	sprite_drone[2].setPosition(Vector2f(700.f, 50.f));

	

	Music music_desert;
	music_desert.openFromFile("Sounds_Music\\MusicGame\\wind_of_desert.ogg");
	music_desert.play();
	music_desert.setVolume(20.f);
	music_desert.setLoop(true);

	fire_pistol.loadFromFile("Sounds_Music\\Sounds\\pistol_fire.ogg");
	Sound pistol_fire;
	pistol_fire.setBuffer(fire_pistol);
	reload_pistol.loadFromFile("Sounds_Music\\Sounds\\split.ogg");
	Sound pistol_reload;
	pistol_reload.setBuffer(reload_pistol);

	Cursor cursor;
	window.setMouseCursorVisible(false);

	while (window.isOpen()) { 
		Event event; 
		while (window.pollEvent(event)) {
			if (event.type == Event::Closed) { window.close(); }
			if (event.type == Event::MouseButtonPressed) {

				//Mouse::setPosition(sf::Vector2i((sin(counts[1][2] * 0.0174533) * 250 + 500), sin(counts1[0][4] * 0.0174533) * 250 + 200), window);

				if (event.mouseButton.button == Mouse::Left) {

					//if (error_reload == false) {
					//	pistol_fire.play(); ammo_pistol--; break;
					//	if (ammo_pistol == 0) { error_reload = true; }
					//}
					//else if (error_reload == true) {
					//	if (count_error_shot == 0) {
					//		pistol_reload.play();
					//		count_error_shot += 1;
					//	}
					//	else { }
					//}

					if (ammo_pistol > 0) {
						pistol_fire.play(); ammo_pistol--; break;
					}
					else if (ammo_pistol == 0) {
						pistol_reload.play();
						ammo_pistol = 7;
						break;
					}
					

				}




			}
			if (event.type == Event::MouseMoved) { Vector2i localPosition = Mouse::getPosition(window); sprite_cursor.setPosition(Vector2f(localPosition)); }

			
			if (Keyboard::isKeyPressed(Keyboard::Scan::NumpadPlus)) { window.close(); }
			if (Keyboard::isKeyPressed(Keyboard::Scan::Escape)) { music_desert.stop(); Loading_Polygon(window); Choise_gun(window); }


			//Clock clock;
			//Clock gameTimeClock;//переменна€ игрового времени, будем здесь хранить врем€ игры 
			//int gameTime = 0;//объ€вили игровое врем€, инициализировали.

			//float time = clock.getElapsedTime().asMicroseconds();
			//gameTime = gameTimeClock.getElapsedTime().asSeconds();//игровое врем€ в секундах идЄт вперед, пока жив игрок, перезагружать как time его не надо. оно не обновл€ет логику игры
			//clock.restart();
			//time = time / 800;

			//ostringstream gameTimeString;    // объ€вили переменную здоровь€ и времени
			//gameTimeString << gameTime;		//формируем строку
			//text.setString("\n¬рем€ игры: " + gameTimeString.str());//задаем строку тексту и вызываем сформированную выше строку методом .str()
			//text.setPosition(view.getCenter().x - 165, view.getCenter().y - 200);//задаем позицию текста, отступа€ от центра камеры
			//window.draw(text);//рисую этот текст
		}

		window.clear(Color::Black);
		window.draw(sprite_desert);
		for (int i = 0; i < 4; i++) { window.draw(sprite_target[i]); }
		for (int i = 0; i < 3; i++) { window.draw(sprite_drone[i]); }
		window.draw(sprite_cursor);
		Conclusion(window);
		window.display();
	}
}

void Reload_Pistol() {

}

void Error_Reload() {

}

short shoots = 0, hits = 0, time_second = 7;
void Conclusion(RenderWindow& window) {
	Font font;
	font.loadFromFile("Fonts\\Kroftsmann.ttf");

	Text time_cound, points_game, cound_ammo;
	time_cound.setFont(font); time_cound.setPosition(1750, 50); time_cound.setCharacterSize(30); time_cound.setFillColor(Color::White); time_cound.setStyle(Text::Regular);
	points_game.setFont(font); points_game.setPosition(1718, 85); points_game.setCharacterSize(30); points_game.setFillColor(Color::White); points_game.setStyle(Text::Regular);
	cound_ammo.setFont(font); cound_ammo.setPosition(1739, 120); cound_ammo.setCharacterSize(30); cound_ammo.setFillColor(Color::White); cound_ammo.setStyle(Text::Regular);
	time_cound.setString("Time: " + to_string(time_second)); // перефразировка из short в string
	points_game.setString("Points: " + to_string(hits)); // перефразировка из short в string
	cound_ammo.setString("Ammo: " + to_string(time_second)); // перефразировка из short в string

	window.draw(time_cound);
	window.draw(points_game);
	window.draw(cound_ammo);
}



///////////////////////////////////////////////////////////////

void Load_Drug(RenderWindow& window) {
	Fire_Animation fr_an;
	fr_an.Next_cadr_Fire();

	do {
		fr_an.Next_cadr_Fire();
		window.draw(fr_an.sprite_Fire);
		window.display();
	} while (fr_an.count_Fire != 1);
}

void Drug(RenderWindow& window) {
	Texture texture_desert, texture_cursor, drone_texture;
	texture_desert.loadFromFile("Textures\\Desert\\desert_0.jpg");
	texture_cursor.loadFromFile("Textures\\Cursor\\cursor_RED.png");
	drone_texture.loadFromFile("Textures\\Target\\Drone.png");

	Sprite sprite_desert, sprite_cursor;
	sprite_desert.setTexture(texture_desert);
	sprite_cursor.setTexture(texture_cursor);
	sprite_cursor.setOrigin(sprite_cursor.getLocalBounds().width / 2, sprite_cursor.getLocalBounds().height / 2);

	Sprite sprite_targets[4][4];
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			sprite_targets[i][j].setTexture(drone_texture);
			sprite_targets[i][j].setOrigin(sprite_targets[i][j].getLocalBounds().width / 2, sprite_targets[i][j].getLocalBounds().height / 2);
		}
	}
	sprite_desert.setPosition(sprite_desert.getLocalBounds().width / 2, sprite_desert.getLocalBounds().height / 2);
	sprite_desert.setOrigin(sprite_desert.getLocalBounds().width / 2, sprite_desert.getLocalBounds().height / 2);

	Music music_drug;
	music_drug.openFromFile("Sounds_Music\\MusicGame\\Around_TheWorld.ogg");
	music_drug.play();
	music_drug.setVolume(20.f);
	music_drug.setLoop(true);

	Clock clock;
	Clock clock1;
	Clock clock2;
	Clock clock3;
	Clock clocks[4][4];
	Clock clocks1[4][4];
	Clock clocks2[4][4];

	int times[4][4];
	int times1[4][4];
	int times2[4][4];

	int count = 0;
	int count1 = 0;
	int count2 = 0;
	int count3 = 0;
	int counts[4][4];
	int counts1[4][4];
	int counts2[4][4];

	srand(time(NULL));
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			times[i][j] = rand() % (15000 - 5000) + 5000;
		}
	}
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			times1[i][j] = rand() % (15000 - 5000) + 5000;
		}
	}
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			times2[i][j] = rand() % (15000 - 5000) + 5000;
		}
	}
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			counts[i][j] = 0;
		}
	}
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			counts1[i][j] = 0;
		}
	}
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			counts2[i][j] = 0;
		}
	}

	while (window.isOpen()) {
		Event event;
		while (window.pollEvent(event)) {
			if (event.type == Event::Closed) { window.close(); }
			if (event.type == Event::MouseMoved) { Vector2i localPosition = Mouse::getPosition(window); sprite_cursor.setPosition(Vector2f(localPosition)); }
			if (Keyboard::isKeyPressed(Keyboard::Scan::NumpadPlus)) { window.close(); }
			if (Keyboard::isKeyPressed(Keyboard::Scan::Escape)) { Loading_menu(window); Main_menu(window); }
		}

		Mouse::setPosition(sf::Vector2i((sin(counts[1][2] * 0.0174533) * 250 + 500), sin(counts1[0][4] * 0.0174533) * 250 + 200), window);
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 4; j++) {
				sprite_targets[i][j].setPosition(Vector2f(sin(counts[i][j] * 0.0174533) * 250 + 100 + (i * 500), sin(counts1[i][j] * 0.0174533) * 250 + 100 + (j * 250)));
				sprite_targets[i][j].setScale(sin(counts2[i][j] * 0.0174533) * 1.5, sin(counts2[i][j] * 0.0174533) * 1.5);
				sprite_targets[i][j].setRotation(sin(counts2[i][j] * 0.0174533) * 100);
				sprite_targets[i][j].setColor(Color(sin(counts2[i][j] * 0.0174533) * 255, sin(counts[i][j] * 0.0174533) * 255, sin(counts1[i][j] * 0.0174533) * 255));
			}
		}
		sprite_desert.setColor(Color(sin(counts2[0][0] * 0.0174533) * 255, sin(counts[0][0] * 0.0174533) * 255, sin(counts1[0][0] * 0.0174533) * 255));
		sprite_desert.setRotation(sin(counts2[1][1] * 0.0174533) * 200);
		sprite_desert.setScale(sin(counts2[3][4] * 0.0174533) * 2, sin(counts2[2][0] * 0.0174533) * 2);
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 4; j++) {
				if (clocks[i][j].getElapsedTime().asMicroseconds() >= times[i][j]) { counts[i][j]++; clocks[i][j].restart(); }
			}
		}
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 4; j++) {
				if (clocks1[i][j].getElapsedTime().asMicroseconds() >= times1[i][j]) { counts1[i][j]++; clocks1[i][j].restart(); }
			}
		}
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 4; j++) {
				if (clocks2[i][j].getElapsedTime().asMicroseconds() >= times2[i][j]) { counts2[i][j]++; clocks2[i][j].restart(); }
			}
		}


		window.clear(Color::Black);
		window.draw(sprite_desert);
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 4; j++) {
				window.draw(sprite_targets[i][j]);
			}
		}
		window.draw(sprite_cursor);
		window.display();
	}
}


