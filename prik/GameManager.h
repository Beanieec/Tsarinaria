#pragma once
#include <sstream>
#include <iostream>
#include <chrono>
#include <thread>
#include <windows.h>
#include <vector>
#include "Helicopter.h"
#include "World.h"
#include "Player.h"

class GameManager
{
private:
	const int SCREEN_WIDTH = 120;
	const int SCREEN_HEIGHT = 30;
	int speed = 70;
	int screenposX = 50;
	int screenposY = 30;
	World world;
	string** buffer;
	string** wbuffer;
	Helicopter helicopter;
	Player player;
	Player bot;
	Notif notif;
	ostringstream oss;
	bool mode = true;
	bool fKey = false;
	bool mKey = false;
	bool isGame = true;
	bool isHelicopter = false;

	bool keyPressedM = false;
	bool keyPressedF = false;
	bool keyPressedP = false;
public:
	GameManager();
	~GameManager();
	bool Init();
	void clearScreen();
	void manualmode();
	void processKeyboardInput();
	bool isGaming();
	bool IsConsoleActive();
	bool checkPosAbout();
	void camera();
	void clearWbuffer();
};

