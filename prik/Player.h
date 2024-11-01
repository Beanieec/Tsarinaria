#pragma once
#include <iostream>
#include <chrono>
#include <thread>
#include <windows.h>
#include <vector>

using namespace std;

class Player
{
private:
	
	int pos = 3500;
	bool move = false;
	bool side = true;
	bool z = false;
	bool isJumping = false;
	bool isFalling = false;
	int jumpStart;
	bool hide = false;

	bool keyPressedZ = false;

	string BLACKT = "\033[38;2;0;0;0m";
	string REDT = "\033[31m";
	string GREENT = "\033[38;2;8;89;19m";
	string YELOWT = "\033[33m";
	string BLUET = "\033[38;2;179;67;16m";
	string PURPLET = "\033[35m";
	string WBLUET = "\033[36m";
	string WHITET = "\033[37m";
	string CLEAR = "\033[0m";
	string SKIN = "\033[38;2;166;116;83m";

	string BLACKF = "\033[40m";
	string REDF = "\033[41m";
	string GREENF = "\033[42m";
	string YELOWF = "\033[43m";
	string BLUEF = "\033[44m";
	string PURPLEF = "\033[45m";
	string WBLUEF = "\033[46m";
	string WHITEF = "\033[47m";



public:
	int posX = 65;
	int	posY = 30;
	void showPlayer(int frame, string** buffer);
	void processKeyboardInput();
	void jump();
	void hiding();
	void coord(string** buffer, int row, int col, string sim);
	void nickname(string** buffer);

};

