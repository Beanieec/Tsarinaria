#pragma once
#include <sstream>
#include <iostream>
#include <chrono>
#include <thread>
#include <windows.h>
#include <vector>
#include "Helicopter.h"
#include "Notif.h"
#include "Player.h"


using namespace std;

class World
{
private:
	const int SCREEN_WIDTH = 120;
	const int SCREEN_HEIGHT = 30;
	
	

	string BLACKT = "\033[38;2;0;0;0m";
	string BROWNT = "\033[38;2;79;43;13m";
	string REDT = "\033[31m";
	string GREENT = "\033[38;2;8;89;19m";
	string YELOWT = "\033[33m";
	string BLUET = "\033[38;2;24;48;92m";
	string PURPLET = "\033[35m";
	string WBLUET = "\033[36m";
	string WHITET = "\033[37m";
	string CLEAR = "\033[0m";
	string SKIN = "\033[38;2;166;116;83m";

	string BLACKF = "\033[40m";
	string BROWNF = "\033[48;2;79;43;13m";
	string REDF = "\033[41m";
	string GREENF = "\033[42m";
	string YELOWF = "\033[43m";
	string BLUEF = "\033[44m";
	string PURPLEF = "\033[45m";
	string WBLUEF = "\033[46m";
	string WHITEF = "\033[47m";
	
public:
	int treepos = 100;
	World();
	~World();
	void InitWorld();
	
	void showTrees(string** wbuffer, int type);
	void coord(string** wbuffer, int row, int col, string sim);
};

