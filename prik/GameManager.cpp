#include "GameManager.h"
GameManager::GameManager() {
    this->buffer = new string * [SCREEN_HEIGHT];
    for (int i = 0; i < 30; i++) {
        buffer[i] = new string[SCREEN_WIDTH];
    }
    this->wbuffer = new string * [SCREEN_HEIGHT];
    for (int i = 0; i < 30; i++) {
        wbuffer[i] = new string[SCREEN_WIDTH*3];
    }
}
GameManager::~GameManager() {
    for (int i = 0; i < SCREEN_HEIGHT; i++) {
        delete[] buffer[i];
        delete[] wbuffer[i];
    }
    delete[] buffer;
    delete[] wbuffer;
}

bool GameManager::Init() {
    bot.posX = 10;
    int size = SCREEN_WIDTH * SCREEN_HEIGHT;

    while (true) {
        for (int i = 0; i < 4; i++) {
            oss.str("");
            oss.clear();
            clearScreen();
            clearWbuffer();
            if (isHelicopter) {
                /*if (mode)*/
                    helicopter.showHelicopter(i, wbuffer);
                /*else
                    helicopter.showHelicopter(i, buffer);*/
                if (checkPosAbout()) {
                    if (mode)
                        notif.enterdrive(1, buffer);
                    else {
                        if (!helicopter.engine) {
                            notif.enterdrive(2, buffer);
                            notif.enterdrive(3, buffer);
                        }
                    }
                }
            }
            ////////////////////////////
            world.treepos = 20;
            world.showTrees(wbuffer, 1);
            world.treepos = 60;
            world.showTrees(wbuffer, 2);
            world.treepos = 110;
            world.showTrees(wbuffer, 1);
            world.treepos = 150;
            world.showTrees(wbuffer, 2);
            world.treepos = 190;
            world.showTrees(wbuffer, 1);
            world.treepos = 240;
            world.showTrees(wbuffer, 2);
            world.treepos = 300;
            world.showTrees(wbuffer, 1);
            world.treepos = 350;
            world.showTrees(wbuffer, 2);
            ////////////////////////////
            for (int i = 0; i < SCREEN_HEIGHT; i++) {
                for (int j = 0; j < SCREEN_WIDTH; j++) {
                    if (wbuffer[i][screenposX + j] != "0")
                        buffer[i][j] = wbuffer[i][screenposX + j];
                }
            }
            ////////////////////////////
            player.showPlayer(i, buffer);
            /*bot.showPlayer(i, buffer);*/
            ////////////////////////////
            if (IsConsoleActive()) {
                processKeyboardInput();
                manualmode();
            }
            ////////////////////////////
            for (int i = 0; i < SCREEN_HEIGHT; ++i) {
                for (int j = 0; j < SCREEN_WIDTH; ++j) {
                    oss << buffer[i][j];
                }
            }
            system("cls");
            std::cout << oss.str();
            this_thread::sleep_for(chrono::milliseconds(speed));

        }
    }
    isGame = false;
    return true;
}
bool GameManager::IsConsoleActive() {
    HWND hwndConsole = GetConsoleWindow();
    HWND hwndForeground = GetForegroundWindow();
    return hwndConsole == hwndForeground;
}

void GameManager::processKeyboardInput() {
    if (GetAsyncKeyState(VK_LEFT) or GetAsyncKeyState(0x41)) {   
        if (mode) {
            if (player.posX == 45) {
                screenposX = max(0, screenposX - 1);
            }
            if (GetAsyncKeyState(VK_LCONTROL)) {
                speed = 40;
            }
            else
                speed = 70;
        }
        else {
            speed = 70;
            if (helicopter.engine && helicopter.posY != 30) {
                screenposX = max(0, screenposX - 2);
            }
        }
    }
    if (GetAsyncKeyState(VK_RIGHT) or GetAsyncKeyState(0x44)) {
        
        if (mode) {
            if (player.posX == 75) {
                screenposX = min(240, screenposX + 1);
            }
            if (GetAsyncKeyState(VK_LCONTROL)) {
                speed = 40;
            }
            else
                speed = 70;
        }
        else {
            speed = 70;
            if (helicopter.engine && helicopter.posY != 30) {
                screenposX = min(240, screenposX + 2);
            }
        }
    }
    if (GetAsyncKeyState(0x4D)) { //M
        /*mode = !mode;*/       
    }
    /////////////////////////////////
    if (GetAsyncKeyState(0x46)) { //F
        if (!keyPressedF) {
            if (checkPosAbout()) {
                mode = !mode;
                player.hiding();
                helicopter.driving();
                keyPressedF = true;
                if (isHelicopter) {
                    if (helicopter.side)
                        screenposX = helicopter.posX + 14 - 60;
                    else
                        screenposX = helicopter.posX - 14 - 60;
                }
            }
        }
    }
    else
        keyPressedF = false;
    /////////////////////////////////
    if (GetAsyncKeyState(0x50)) { //P
        if (!keyPressedP) {
            isHelicopter = !isHelicopter;
            keyPressedP = true;
        }
    }
    else
        keyPressedP = false;
}

void GameManager::manualmode() {
    if (mode) {
        player.processKeyboardInput();
        player.jump();
        helicopter.processKeyboardForAll();
    }
    else {
        if (isHelicopter) {
            if (helicopter.side)
                player.posX = helicopter.posX + 14;
            else
                player.posX = helicopter.posX - 14;
            helicopter.processKeyboardInput();
        }
    }
}

void GameManager::clearScreen() {
    for (int i = 0; i < SCREEN_HEIGHT; ++i) {
        for (int j = 0; j < SCREEN_WIDTH; ++j) {
            if(buffer[i][j] != " ")
             buffer[i][j] = " ";
        }
    }
}

void GameManager::clearWbuffer() {
    for (int i = 0; i < SCREEN_HEIGHT; ++i) {
        for (int j = 0; j < SCREEN_WIDTH * 3; ++j) {
            wbuffer[i][j] = "0";
        }
    }
}

bool GameManager::isGaming() {
    if (isGame)
        return true;
    else
        return false;
}

bool GameManager::checkPosAbout() {

    for (int i = 7; i < 19; i++) {
        if (mode) {
            if (helicopter.side) {
                if (screenposX + player.posX == helicopter.posX + i) {
                    return true;
                }
            }
            else {
                if (screenposX + player.posX == helicopter.posX - i) {
                    return true;
                }
            }
        }
        else {
            if (helicopter.side) {
                if (screenposX + player.posX == screenposX + helicopter.posX + i) {
                    return true;
                }
            }
            else {
                if (screenposX + player.posX == screenposX + helicopter.posX - i) {
                    return true;
                }
            }
        }      
    }
    return false;
}

void GameManager::camera() {

}
