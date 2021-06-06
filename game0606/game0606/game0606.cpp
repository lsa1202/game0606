#include <bangtal.h>

SceneID startingpage, game1, game2, game3;
ObjectID highlevel, middlelevel, lowlevel, person1, person2, person3, person4, person5, person6, person7, person8, person9, person10, person11, person12, person13, person14, person15;

void mouseCallback(ObjectID object, int x, int y, MouseAction action) {
	if (object == highlevel) {
		enterScene(game3);
	}
	if (object == middlelevel) {
		enterScene(game2);
	}
	if (object == lowlevel) {
		enterScene(game1);
	}
	if (object == person2) {
		showMessage("추리 성공! 메세지를 옆으로 보면 비빔밥이다.");
	}
	if (object == person6) {
		showMessage("추리 성공! 302를 옆으로 보면 영어 won이다.");
	}
	if (object == person12) {
		showMessage("추리 성공! 컴퓨터 자판으로 숫자를 입력하면 LN이 나온다.");
	}
}

ObjectID createObject(const char* image, SceneID scene, int x, int y, bool shown) {
	ObjectID object = createObject(image);
	locateObject(object, scene, x, y);
	if (shown) {
		showObject(object);

	}
	return object;
}

int main() {
	setGameOption(GameOption::GAME_OPTION_INVENTORY_BUTTON, false);
	setGameOption(GameOption::GAME_OPTION_MESSAGE_BOX_BUTTON, false);
	setGameOption(GameOption::GAME_OPTION_ROOM_TITLE, false);

	setMouseCallback(mouseCallback);

	startingpage = createScene("배경", "background.png");
	game1 = createScene("난이도하", "game1.png");
	game2 = createScene("난이도중", "game2.png");
	game3 = createScene("난이도상", "game3.png");

	highlevel = createObject("highlevel.png", startingpage, 1000, 150, true);
	middlelevel = createObject("middlelevel.png", startingpage, 600, 150, true);
	lowlevel = createObject("lowlevel.png", startingpage, 200, 150, true);
	person1 = createObject("person1.png", game1, 80, 20, true);
	person2 = createObject("person1.png", game1, 330, 20, true);
	person3 = createObject("person1.png", game1, 580, 20, true);
	person4 = createObject("person1.png", game1, 830, 20, true);
	person5 = createObject("person1.png", game1, 1080, 20, true);
	person6 = createObject("person1.png", game2, 80, 135, true);
	person7 = createObject("person1.png", game2, 330, 135, true);
	person8 = createObject("person1.png", game2, 580, 135, true);
	person9 = createObject("person1.png", game2, 830, 135, true);
	person10 = createObject("person1.png", game2, 1080, 135, true);
	person11 = createObject("person1.png", game3, 100, 150, true);
	person12 = createObject("person1.png", game3, 350, 150, true);
	person13 = createObject("person1.png", game3, 600, 150, true);
	person14 = createObject("person1.png", game3, 850, 150, true);
	person15 = createObject("person1.png", game3, 1100, 150, true);
	


	startGame(startingpage);

}
