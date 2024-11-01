#pragma once
#include <iostream>
#include <chrono>
#include <thread>
#include <windows.h>
#include <vector>

using namespace std;

class Helicopter
{
private:
	const int SCREEN_WIDTH = 120;
	const int SCREEN_HEIGHT = 30;
	
	bool z = false;
	bool driver = false;
	int nextFrame = 0;

	bool keyPressedZ = false;
	bool keyPressedE = false;

	string BLACKT = "\033[38;2;0;0;0m";
	string REDT = "\033[38;2;120;40;40m";
	/*string GREENT = "\033[38;2;8;89;19m";*/
	string GREENT = "\033[38;2;0;0;0m";
	string YELOWT = "\033[33m";
	string BLUET = "\033[34m";
	string PURPLET = "\033[35m";
	string WBLUET = "\033[36m";
	string WHITET = "\033[37m";
	string SKIN = "\033[38;2;166;116;83m";
	string CLEAR = "\033[0m";

	string BLACKF = "\033[40m";
	string REDF = "\033[41m";
	string GREENF = "\033[42m";
	string YELOWF = "\033[43m";
	string BLUEF = "\033[44m";
	string PURPLEF = "\033[45m";
	string WBLUEF = "\033[46m";
	string WHITEF = "\033[47m";

public:
	bool side;
	int posX = 80;
	int posY = 30;
	bool engine = false;
	void showHelicopter(int rotorFrame, string** buffer);
	void processKeyboardInput();
	void driving();
	void coord(string** buffer, int row, int col, string sim);
	void processKeyboardForAll();
};

