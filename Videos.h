#include <SFML/Graphics.hpp>

using namespace sf;

class Video {
public:
	Video();
	Texture textures[30];
	Sprite sprite;
	Clock clock;
	short cadr = 0;
	void Next_cadr();
};

class Loading {
public:
	Loading();
	Texture textures_Load[31];
	Sprite sprite_Load;
	Clock clock_Load;
	short cadr_Load = 0;
	short count_Load = 0;
	void Next_cadr_load();
};

class About_video {
public:
	About_video();
	Texture textures_about[891];
	Sprite sprite_about;
	Clock clock_about;
	short cadr_about = 0;
	void Next_cadr_about();
};

class Solo_Animation {
public:
	Solo_Animation();
	Texture texture_Solo[36];
	Sprite sprite_Solo;
	Clock clock_Solo;
	short cadr_Solo = 0;
	void Next_cadr_Solo();
};

class Dog_Animation {
public:
	Dog_Animation();
	Texture texture_Dog[31];
	Sprite sprite_Dog;
	Clock clock_Dog;
	short cadr_Dog = 0;
	void Next_cadr_Dog();
};

class Bipods_Animation {
public:
	Bipods_Animation();
	Texture texture_Bipods[30];
	Sprite sprite_Bipods;
	Clock clock_Bipods;
	short cadr_Bipods = 0;
	void Next_cadr_Bipods();
};

class Duo_Animation {
public:
	Duo_Animation();
	Texture texture_Duo[35];
	Sprite sprite_Duo;
	Clock clock_Duo;
	short cadr_Duo = 0;
	void Next_cadr_Duo();
};

class Fire_Animation {
public:
	Fire_Animation();
	Texture texture_Fire[40];
	Sprite sprite_Fire;
	Clock clock_Fire;
	short cadr_Fire = 0;
	short count_Fire = 0;
	void Next_cadr_Fire();
};
