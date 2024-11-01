#pragma once
#include <iostream>
#include "Helicopter.h"
#include "Player.h"

class Notif
{
private:
	const int SCREEN_WIDTH = 120;
	const int SCREEN_HEIGHT = 30;
public:
	void enterdrive(int frame, string** buffer);
	void coord(string** buffer, int row, int col, string sim);

};

