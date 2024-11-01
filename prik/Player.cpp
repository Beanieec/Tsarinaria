#include "player.h"
#define SCREEN_WIDTH = 120
#define SCREEN_HEIGHT = 30


void Player::processKeyboardInput() {
    if (pos == pos)
        move = false;
    if (GetAsyncKeyState(VK_LEFT) or GetAsyncKeyState(0x41)) {
        side = true;
        move = true;
        posX = max(45, posX - 1);

    }
    if (GetAsyncKeyState(VK_RIGHT) or GetAsyncKeyState(0x44)) {
        side = false;
        move = true;
        posX = min(75, posX + 1);

    }
    if ((GetAsyncKeyState(VK_UP) or GetAsyncKeyState(0x57) or GetAsyncKeyState(VK_SPACE)) && !isJumping && !isFalling) {
        move = true;
        isJumping = true;
        jumpStart = posY;
    }
    if ((GetAsyncKeyState(VK_DOWN) or GetAsyncKeyState(0x53)) && !isJumping && !isFalling){
        move = true;
        isFalling = true;
        posY = min(30, pos + 1);
    }
    if (GetAsyncKeyState(0x5A)) { //Z
        if (!keyPressedZ) {
            z = !z;
            keyPressedZ = true;
        }
    }
    else {
        keyPressedZ = false;
        z = false;
    }
}

void Player::jump() { 
    int jumpHeight = 2;
    if (isJumping) {
        if (posY > jumpStart - jumpHeight) {
            posY -= 1;
        }
        else {
            isJumping = false;
            isFalling = true;
        }
    }
    if (isFalling) {
        if (posY < jumpStart) {
            posY += 1;
        }
        else {
            isFalling = false;
        }
    }
}

void Player::showPlayer(int frame, string** buffer) {
    string body;
    body += static_cast<char>(219);
    if (!hide) {
        if (!move) {
            nickname(buffer);
            coord(buffer, posY - 3, posX + 1, GREENT + "$" + CLEAR);
            //
            coord(buffer, posY - 2, posX + 1, SKIN + "\2" + CLEAR);
            coord(buffer, posY - 1, posX, SKIN + "<" + CLEAR); coord(buffer, posY - 1, posX + 1, BLUET + body + CLEAR); coord(buffer, posY - 1, posX + 2, SKIN + ">" + CLEAR);
            coord(buffer, posY, posX, BLUET + "/" + CLEAR); coord(buffer, posY, posX + 2, BLUET + "\\" + CLEAR);



            if (z) {
                coord(buffer, posY - 2, posX, SKIN + "\\" + CLEAR); coord(buffer, posY - 2, posX + 1, SKIN + "\1" + CLEAR);
                coord(buffer, posY - 1, posX, " " + CLEAR); coord(buffer, posY - 1, posX + 1, BLACKT + "|" + CLEAR); coord(buffer, posY - 1, posX + 2, BLACKT + "|" + CLEAR);
                coord(buffer, posY, posX, BLACKT + "/" + CLEAR); coord(buffer, posY, posX + 2, BLACKT + "\\" + CLEAR);
            }

            /*coord(buffer, posY - 1, posX + 2, '_'); coord(buffer, posY - 1, posX + 3, '_');  coord(buffer, posY - 1, posX + 4, '('); coord(buffer, posY - 1, posX + 5, ')');
            coord(buffer, posY, posX, '_'); coord(buffer, posY, posX + 1, "/"); coord(buffer, posY, posX + 2, "|"); coord(buffer, posY, posX + 3, "/"); coord(buffer, posY, posX + 4, "|");*/ //ПОЛЗЁТ
        }
        else {
            if ((isJumping) || (isFalling)) {
                nickname(buffer);
                coord(buffer, posY - 2, posX, SKIN + "\\" + CLEAR); coord(buffer, posY - 2, posX + 1, SKIN + "\2" + CLEAR); coord(buffer, posY - 2, posX + 2, SKIN + "/" + CLEAR);
                coord(buffer, posY - 1, posX + 1, BLUET + body + CLEAR);
                coord(buffer, posY, posX, BLUET + "/" + CLEAR); coord(buffer, posY, posX + 2, BLUET + "\\" + CLEAR);
            }
            else {
                if (side) {
                    switch (frame) {
                    case 0:
                        nickname(buffer);
                        coord(buffer, posY - 2, posX + 1, SKIN + "\2" + CLEAR);
                        coord(buffer, posY - 1, posX, SKIN + "/" + CLEAR); coord(buffer, posY - 1, posX + 1, BLUET + body + CLEAR); coord(buffer, posY - 1, posX + 2, SKIN + "\\" + CLEAR);
                        coord(buffer, posY, posX, BLUET + "/" + CLEAR); coord(buffer, posY, posX + 2, BLUET + "\\" + CLEAR);
                        if (z) {
                            coord(buffer, posY - 2, posX, SKIN + "\\" + CLEAR); coord(buffer, posY - 2, posX + 1, SKIN + "\1" + CLEAR);
                            coord(buffer, posY - 1, posX, " " + CLEAR); coord(buffer, posY - 1, posX + 1, BLACKT + "|" + CLEAR); coord(buffer, posY - 1, posX + 2, BLACKT + "|" + CLEAR);
                            coord(buffer, posY, posX, BLACKT + "/" + CLEAR); coord(buffer, posY, posX + 2, BLACKT + "\\" + CLEAR);
                        }
                        break;
                    case 1:
                        nickname(buffer);
                        coord(buffer, posY - 2, posX + 1, SKIN + "\2" + CLEAR);
                        coord(buffer, posY - 1, posX, SKIN + "/" + CLEAR); coord(buffer, posY - 1, posX + 1, BLUET + body + CLEAR); coord(buffer, posY - 1, posX + 2, SKIN + "\\" + CLEAR);
                        coord(buffer, posY, posX, BLUET + "|" + CLEAR); coord(buffer, posY, posX + 2, BLUET + "\\" + CLEAR);
                        if (z) {
                            coord(buffer, posY - 2, posX, SKIN + "\\" + CLEAR); coord(buffer, posY - 2, posX + 1, SKIN + "\1" + CLEAR);
                            coord(buffer, posY - 1, posX, " " + CLEAR); coord(buffer, posY - 1, posX + 1, BLACKT + "|" + CLEAR); coord(buffer, posY - 1, posX + 2, BLACKT + "|" + CLEAR);
                            coord(buffer, posY, posX, BLACKT + "|" + CLEAR); coord(buffer, posY, posX + 2, BLACKT + "\\" + CLEAR);
                        }
                        break;
                    case 2:
                        nickname(buffer);
                        coord(buffer, posY - 2, posX + 1, SKIN + "\2" + CLEAR);
                        coord(buffer, posY - 1, posX, SKIN + "|" + CLEAR); coord(buffer, posY - 1, posX + 1, BLUET + body + CLEAR); coord(buffer, posY - 1, posX + 2, SKIN + "|" + CLEAR);
                        coord(buffer, posY, posX + 1, BLUET + "|" + CLEAR);
                        if (z) {
                            coord(buffer, posY - 2, posX, SKIN + "\\" + CLEAR); coord(buffer, posY - 2, posX + 1, SKIN + "\1" + CLEAR);
                            coord(buffer, posY - 1, posX, " " + CLEAR); coord(buffer, posY - 1, posX + 1, BLACKT + "|" + CLEAR); coord(buffer, posY - 1, posX + 2, BLACKT + "|" + CLEAR);
                            coord(buffer, posY, posX + 1, BLACKT + "|" + CLEAR);
                        }
                        break;
                    case 3:
                        nickname(buffer);
                        coord(buffer, posY - 2, posX + 1, SKIN + "\2" + CLEAR);
                        coord(buffer, posY - 1, posX, SKIN + "|" + CLEAR); coord(buffer, posY - 1, posX + 1, BLUET + body + CLEAR); coord(buffer, posY - 1, posX + 2, SKIN + "|" + CLEAR);
                        coord(buffer, posY, posX, BLUET + "/" + CLEAR); coord(buffer, posY, posX + 2, BLUET + "|" + CLEAR);
                        if (z) {
                            coord(buffer, posY - 2, posX, SKIN + "\\" + CLEAR); coord(buffer, posY - 2, posX + 1, SKIN + "\1" + CLEAR);
                            coord(buffer, posY - 1, posX, " " + CLEAR); coord(buffer, posY - 1, posX + 1, BLACKT + "|" + CLEAR); coord(buffer, posY - 1, posX + 2, BLACKT + "|" + CLEAR);
                            coord(buffer, posY, posX, BLACKT + "/" + CLEAR); coord(buffer, posY, posX + 2, BLACKT + "|" + CLEAR);
                        }
                        break;
                    }
                }
                else {
                    switch (frame) {
                    case 0:
                        nickname(buffer);
                        coord(buffer, posY - 2, posX + 1, SKIN + "\2" + CLEAR);
                        coord(buffer, posY - 1, posX, SKIN + "/" + CLEAR); coord(buffer, posY - 1, posX + 1, BLUET + body + CLEAR); coord(buffer, posY - 1, posX + 2, SKIN + "\\" + CLEAR);
                        coord(buffer, posY, posX, BLUET + "/" + CLEAR); coord(buffer, posY, posX + 2, BLUET + "\\" + CLEAR);
                        if (z) {
                            coord(buffer, posY - 2, posX, SKIN + "\\" + CLEAR); coord(buffer, posY - 2, posX + 1, SKIN + "\1" + CLEAR);
                            coord(buffer, posY - 1, posX, " " + CLEAR); coord(buffer, posY - 1, posX + 1, BLACKT + "|" + CLEAR); coord(buffer, posY - 1, posX + 2, BLACKT + "|" + CLEAR);
                            coord(buffer, posY, posX, BLACKT + "/" + CLEAR); coord(buffer, posY, posX + 2, BLACKT + "\\" + CLEAR);
                        }
                        break;
                    case 1:
                        nickname(buffer);
                        coord(buffer, posY - 2, posX + 1, SKIN + "\2" + CLEAR);
                        coord(buffer, posY - 1, posX, SKIN + "/" + CLEAR); coord(buffer, posY - 1, posX + 1, BLUET + body + CLEAR); coord(buffer, posY - 1, posX + 2, SKIN + "\\" + CLEAR);
                        coord(buffer, posY, posX, BLUET + "/" + CLEAR); coord(buffer, posY, posX + 2, BLUET + "|" + CLEAR);
                        
                        if (z) {
                            coord(buffer, posY - 2, posX, SKIN + "\\" + CLEAR); coord(buffer, posY - 2, posX + 1, SKIN + "\1" + CLEAR);
                            coord(buffer, posY - 1, posX, " " + CLEAR); coord(buffer, posY - 1, posX + 1, BLACKT + "|" + CLEAR); coord(buffer, posY - 1, posX + 2, BLACKT + "|" + CLEAR);
                            coord(buffer, posY, posX, BLACKT + "/" + CLEAR); coord(buffer, posY, posX + 2, BLACKT + "|" + CLEAR);
                        }
                        break;
                    case 2:
                        nickname(buffer);
                        coord(buffer, posY - 2, posX + 1, SKIN + "\2" + CLEAR);
                        coord(buffer, posY - 1, posX, SKIN + "|" + CLEAR); coord(buffer, posY - 1, posX + 1, BLUET + body + CLEAR); coord(buffer, posY - 1, posX + 2, SKIN + "|" + CLEAR);
                        coord(buffer, posY, posX + 1, BLUET + "|" + CLEAR);
                        if (z) {
                            coord(buffer, posY - 2, posX, SKIN + "\\" + CLEAR); coord(buffer, posY - 2, posX + 1, SKIN + "\1" + CLEAR);
                            coord(buffer, posY - 1, posX, " " + CLEAR); coord(buffer, posY - 1, posX + 1, BLACKT + "|" + CLEAR); coord(buffer, posY - 1, posX + 2, BLACKT + "|" + CLEAR);
                            coord(buffer, posY, posX + 1, BLACKT + "|" + CLEAR);
                        }
                        break;
                    case 3:
                        nickname(buffer);
                        coord(buffer, posY - 2, posX + 1, SKIN + "\2" + CLEAR);
                        coord(buffer, posY - 1, posX, SKIN + "|" + CLEAR); coord(buffer, posY - 1, posX + 1, BLUET + body + CLEAR); coord(buffer, posY - 1, posX + 2, SKIN + "|" + CLEAR);
                        coord(buffer, posY, posX, BLUET + "|" + CLEAR); coord(buffer, posY, posX + 2, BLUET + "\\" + CLEAR);
                        if (z) {
                            coord(buffer, posY - 2, posX, SKIN + "\\" + CLEAR); coord(buffer, posY - 2, posX + 1, SKIN + "\1" + CLEAR);
                            coord(buffer, posY - 1, posX, " " + CLEAR); coord(buffer, posY - 1, posX + 1, BLACKT + "|" + CLEAR); coord(buffer, posY - 1, posX + 2, BLACKT + "|" + CLEAR);
                            coord(buffer, posY, posX, BLACKT + "|" + CLEAR); coord(buffer, posY, posX + 2, BLACKT + "\\" + CLEAR);
                        }
                        break;
                    }
                }
            }
        }
    }
}

void Player::nickname(string** buffer) {
    coord(buffer, posY - 4, posX - 2, "M");
    coord(buffer, posY - 4, posX - 1, "I");
    coord(buffer, posY - 4, posX, "C");
    coord(buffer, posY - 4, posX + 1, "H");
    coord(buffer, posY - 4, posX + 2, "A");
    coord(buffer, posY - 4, posX + 3, "E");
    coord(buffer, posY - 4, posX + 4, "L");
}

void Player::hiding() {
    hide = !hide;
}

void Player::coord(string** buffer, int row, int col, string sim) {
    buffer[row - 1][col - 1] = sim;
}