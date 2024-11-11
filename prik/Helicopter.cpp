#include "Helicopter.h"

void Helicopter::showHelicopter(int rotorFrame, string** buffer) {
    if (!engine)
        rotorFrame = 0;
  /*  if (rotorFrame == 3)
        rotorFrame = 0 +;*/
    if (side) {/////////////////////////////////////////////////////////////////////////////////////<-
        switch (rotorFrame) {
        case 0:
            for (int i = 3; i < 23; i++)
                coord(buffer, posY - 7, posX + i, GREENT + "_" + CLEAR);
            coord(buffer, posY - 7, posX + 39, GREENT + "/" + CLEAR);
            //
            coord(buffer, posY - 6, posX + 13, GREENT + "|" + CLEAR); coord(buffer, posY - 6, posX + 37, GREENT + "-" + CLEAR); coord(buffer, posY - 6, posX + 38, GREENT + "/" + CLEAR); coord(buffer, posY - 6, posX + 39, GREENT + "-" + CLEAR);
            //
            coord(buffer, posY - 5, posX + 7, GREENT + "/" + CLEAR);
            for (int i = 8; i < 19; i++)
                coord(buffer, posY - 5, posX + i, GREENT + "-" + CLEAR);
            coord(buffer, posY - 5, posX + 19, GREENT + "\\" + CLEAR); coord(buffer, posY - 5, posX + 36, GREENT + "/" + CLEAR); coord(buffer, posY - 5, posX + 37, GREENT + "/" + CLEAR); coord(buffer, posY - 5, posX + 38, GREENT + "/" + CLEAR);
            //
            if(driver)
                coord(buffer, posY - 4, posX + 10, SKIN + "\2" + CLEAR);
            else {
                coord(buffer, posY - 4, posX + 10, " " + CLEAR);
                for (int i = posY; i < 30; i++) {
                    coord(buffer, i, posX + 13, GREENT + "|" + CLEAR);
                }
            }
            //
            coord(buffer, posY - 4, posX + 6, GREENT + "/" + CLEAR); coord(buffer, posY - 4, posX + 12, GREENT + "|" + CLEAR); coord(buffer, posY - 4, posX + 20, GREENT + "\\" + CLEAR);
            for (int i = 21; i < 35; i++)
                coord(buffer, posY - 4, posX + i, GREENT + "=" + CLEAR);
            coord(buffer, posY - 4, posX + 35, GREENT + "/" + CLEAR); coord(buffer, posY - 4, posX + 36, GREENT + "/"); coord(buffer, posY - 4, posX + 37, GREENT + "/" + CLEAR);
            //
            coord(buffer, posY - 3, posX + 1, GREENT + "/" + CLEAR);
            for (int i = 2; i < 12; i++) {
                coord(buffer, posY - 3, posX + i, GREENT + "-" + CLEAR);
            }
            coord(buffer, posY - 3, posX + 5, GREENT + "/" + CLEAR);
            coord(buffer, posY - 3, posX + 12, GREENT + "/" + CLEAR);
            for (int i = 23; i < 35; i++)
                coord(buffer, posY - 3, posX + i, GREENT + "_" + CLEAR);
            coord(buffer, posY - 3, posX + 35, GREENT + "/" + CLEAR);  coord(buffer, posY - 3, posX + 36, GREENT + "/" + CLEAR);
            //
            coord(buffer, posY - 2, posX, GREENT + "/" + CLEAR);  coord(buffer, posY - 2, posX + 13, REDT + "\20" + CLEAR);
            coord(buffer, posY - 2, posX + 14, BLACKT + "U" + CLEAR);  coord(buffer, posY - 2, posX + 15, BLACKT + "S" + CLEAR);  coord(buffer, posY - 2, posX + 16, BLACKT + "S" + CLEAR);  coord(buffer, posY - 2, posX + 17, BLACKT + "R" + CLEAR);
            coord(buffer, posY - 2, posX + 18, REDT + "\21" + CLEAR);  coord(buffer, posY - 2, posX + 22, GREENT + "/" + CLEAR);  coord(buffer, posY - 2, posX + 34, GREENT + "/" + CLEAR);
            //
            if (z) {
                coord(buffer, posY - 2, posX + 13, " " + CLEAR);
                coord(buffer, posY - 2, posX + 14, " " + CLEAR);  coord(buffer, posY - 2, posX + 15, " " + CLEAR);  coord(buffer, posY - 2, posX + 16, " " + CLEAR);  coord(buffer, posY - 2, posX + 17, " " + CLEAR);
                coord(buffer, posY - 2, posX + 18, " " + CLEAR);

                coord(buffer, posY - 4, posX + 17, REDT + "_" + CLEAR); coord(buffer, posY - 4, posX + 18, REDT + "_" + CLEAR);
                coord(buffer, posY - 3, posX + 14, REDT + "|" + CLEAR); coord(buffer, posY - 3, posX + 15, REDT + "_" + CLEAR); coord(buffer, posY - 3, posX + 16, REDT + "|" + CLEAR); coord(buffer, posY - 3, posX + 17, REDT + "_" + CLEAR);
                coord(buffer, posY - 2, posX + 14, REDT + "_" + CLEAR); coord(buffer, posY - 2, posX + 15, REDT + "_" + CLEAR); coord(buffer, posY - 2, posX + 16, REDT + "|" + CLEAR); coord(buffer, posY - 2, posX + 18, REDT + "|" + CLEAR);

            }
            //
            coord(buffer, posY - 1, posX, GREENT + GREENT + "\\" + CLEAR);
            for (int i = 1; i < 21; i++)
                coord(buffer, posY - 1, posX + i, GREENT + "=" + CLEAR);
            coord(buffer, posY - 1, posX + 21, GREENT + "/" + CLEAR);
            //
            for (int i = 3; i < 21; i++) 
                coord(buffer, posY, posX + i, GREENT + "_" + CLEAR);
            coord(buffer, posY, posX + 6, GREENT + "|" + CLEAR);
            coord(buffer, posY, posX + 17, GREENT + "|" + CLEAR);
            break;
        case 1:
            //
            coord(buffer, posY - 6, posX + 13, GREENT + "|" + CLEAR); coord(buffer, posY - 6, posX + 37, GREENT + "-" + CLEAR); coord(buffer, posY - 6, posX + 38, GREENT + "-" + CLEAR); coord(buffer, posY - 6, posX + 39, GREENT + "-" + CLEAR);
            //
            coord(buffer, posY - 5, posX + 7, GREENT + "/" + CLEAR);
            for (int i = 8; i < 19; i++)
                coord(buffer, posY - 5, posX + i, GREENT + "-" + CLEAR);
            coord(buffer, posY - 5, posX + 19, GREENT + "\\" + CLEAR);
            for (int i = 30; i < 45; i++) {
                coord(buffer, posY - 5, posX + i, GREENT + "_" + CLEAR);
            }
            coord(buffer, posY - 5, posX + 36, GREENT + "/" + CLEAR); coord(buffer, posY - 5, posX + 38, GREENT + "/" + CLEAR);
            //
            if (driver)
                coord(buffer, posY - 4, posX + 10, SKIN + "\2" + CLEAR);
            else {
                coord(buffer, posY - 4, posX + 10, " " + CLEAR);
                for (int i = posY; i < 30; i++) {
                    coord(buffer, i, posX + 13, GREENT + "|" + CLEAR);
                }
            }
            //
            coord(buffer, posY - 4, posX + 6, GREENT + "/" + CLEAR); coord(buffer, posY - 4, posX + 12, GREENT + "|" + CLEAR); coord(buffer, posY - 4, posX + 20, GREENT + "\\" + CLEAR);
            for (int i = 21; i < 35; i++)
                coord(buffer, posY - 4, posX + i, GREENT + "=" + CLEAR);
            coord(buffer, posY - 4, posX + 35, GREENT + "/" + CLEAR); coord(buffer, posY - 4, posX + 37, GREENT + "/" + CLEAR);
            //
            coord(buffer, posY - 3, posX + 1, GREENT + "/" + CLEAR);
            for (int i = 2; i < 12; i++) {
                coord(buffer, posY - 3, posX + i, GREENT + "-" + CLEAR);
            }
            coord(buffer, posY - 3, posX + 5, GREENT + "/" + CLEAR);
            coord(buffer, posY - 3, posX + 12, GREENT + "/" + CLEAR);
            for (int i = 23; i < 35; i++)
                coord(buffer, posY - 3, posX + i, GREENT + "_" + CLEAR);
            coord(buffer, posY - 3, posX + 35, GREENT + "_" + CLEAR);  coord(buffer, posY - 3, posX + 36, GREENT + "/" + CLEAR);
            //
            coord(buffer, posY - 2, posX, GREENT + "/" + CLEAR);  coord(buffer, posY - 2, posX + 13, REDT + "\20" + CLEAR);
            coord(buffer, posY - 2, posX + 14, BLACKT + "U" + CLEAR);  coord(buffer, posY - 2, posX + 15, BLACKT + "S" + CLEAR);  coord(buffer, posY - 2, posX + 16, BLACKT + "S" + CLEAR);  coord(buffer, posY - 2, posX + 17, BLACKT + "R" + CLEAR);
            coord(buffer, posY - 2, posX + 18, REDT + "\21" + CLEAR);  coord(buffer, posY - 2, posX + 22, GREENT + "/" + CLEAR);
            //
            if (z) {
                coord(buffer, posY - 2, posX + 13, " " + CLEAR);
                coord(buffer, posY - 2, posX + 14, " " + CLEAR);  coord(buffer, posY - 2, posX + 15, " " + CLEAR);  coord(buffer, posY - 2, posX + 16, " " + CLEAR);  coord(buffer, posY - 2, posX + 17, " " + CLEAR);
                coord(buffer, posY - 2, posX + 18, " " + CLEAR);

                coord(buffer, posY - 4, posX + 17, REDT + "_" + CLEAR); coord(buffer, posY - 4, posX + 18, REDT + "_" + CLEAR);
                coord(buffer, posY - 3, posX + 14, REDT + "|" + CLEAR); coord(buffer, posY - 3, posX + 15, REDT + "_" + CLEAR); coord(buffer, posY - 3, posX + 16, REDT + "|" + CLEAR); coord(buffer, posY - 3, posX + 17, REDT + "_" + CLEAR);
                coord(buffer, posY - 2, posX + 14, REDT + "_" + CLEAR); coord(buffer, posY - 2, posX + 15, REDT + "_" + CLEAR); coord(buffer, posY - 2, posX + 16, REDT + "|" + CLEAR); coord(buffer, posY - 2, posX + 18, REDT + "|" + CLEAR);
            }
            //
            coord(buffer, posY - 1, posX, GREENT + "\\" + CLEAR);
            for (int i = 1; i < 21; i++)
                coord(buffer, posY - 1, posX + i, GREENT + "=" + CLEAR);
            coord(buffer, posY - 1, posX + 21, GREENT + "/" + CLEAR);
            //
            for (int i = 3; i < 21; i++)
                coord(buffer, posY, posX + i, GREENT + "_" + CLEAR);
            coord(buffer, posY, posX + 6, GREENT + "|" + CLEAR);
            coord(buffer, posY, posX + 17, GREENT + "|" + CLEAR);
            break;
        case 2:
            for (int i = 3; i < 23; i++)
                coord(buffer, posY - 7, posX + i, GREENT + "_" + CLEAR);
            coord(buffer, posY - 7, posX + 35, GREENT + "\\" + CLEAR);
            //
            coord(buffer, posY - 6, posX + 13, GREENT + "|" + CLEAR); coord(buffer, posY - 6, posX + 36, GREENT + "\\" + CLEAR); coord(buffer, posY - 6, posX + 37, GREENT + "-" + CLEAR); coord(buffer, posY - 6, posX + 38, GREENT + "-" + CLEAR); coord(buffer, posY - 6, posX + 39, GREENT + "-" + CLEAR);
            //
            coord(buffer, posY - 5, posX + 7, GREENT + "/" + CLEAR);
            for (int i = 8; i < 19; i++)
                coord(buffer, posY - 5, posX + i, GREENT + "-" + CLEAR);
            coord(buffer, posY - 5, posX + 19, GREENT + "\\" + CLEAR); coord(buffer, posY - 5, posX + 36, GREENT + "/" + CLEAR); coord(buffer, posY - 5, posX + 37, GREENT + "\\" + CLEAR); coord(buffer, posY - 5, posX + 38, GREENT + "/" + CLEAR);
            //
            if (driver)
                coord(buffer, posY - 4, posX + 10, SKIN + "\2" + CLEAR);
            else {
                coord(buffer, posY - 4, posX + 10, " " + CLEAR);
                for (int i = posY; i < 30; i++) {
                    coord(buffer, i, posX + 13, GREENT + "|" + CLEAR);
                }
            }
            //
            coord(buffer, posY - 4, posX + 6, GREENT + "/" + CLEAR); coord(buffer, posY - 4, posX + 12, GREENT + "|" + CLEAR); coord(buffer, posY - 4, posX + 20, GREENT + "\\" + CLEAR);
            for (int i = 21; i < 35; i++)
                coord(buffer, posY - 4, posX + i, GREENT + "=" + CLEAR);
            coord(buffer, posY - 4, posX + 35, GREENT + "/" + CLEAR); coord(buffer, posY - 4, posX + 37, GREENT + "/" + CLEAR);  coord(buffer, posY - 4, posX + 38, GREENT + "\\" + CLEAR);
            //
            coord(buffer, posY - 3, posX + 1, GREENT + "/" + CLEAR);
            for (int i = 2; i < 12; i++) {
                coord(buffer, posY - 3, posX + i, GREENT + "-" + CLEAR);
            }
            coord(buffer, posY - 3, posX + 5, GREENT + "/" + CLEAR);
            coord(buffer, posY - 3, posX + 12, GREENT + "/" + CLEAR);
            for (int i = 23; i < 35; i++)
                coord(buffer, posY - 3, posX + i, GREENT + "_" + CLEAR);
            coord(buffer, posY - 3, posX + 35, GREENT + "_" + CLEAR); coord(buffer, posY - 3, posX + 36, GREENT + "/" + CLEAR); coord(buffer, posY - 3, posX + 39, GREENT + "\\" + CLEAR);
            //
            coord(buffer, posY - 2, posX, GREENT + "/" + CLEAR);  coord(buffer, posY - 2, posX + 13, REDT + "\20" + CLEAR);
            coord(buffer, posY - 2, posX + 14, BLACKT + "U" + CLEAR);  coord(buffer, posY - 2, posX + 15, BLACKT + "S" + CLEAR);  coord(buffer, posY - 2, posX + 16, BLACKT + "S" + CLEAR);  coord(buffer, posY - 2, posX + 17, BLACKT + "R" + CLEAR);
            coord(buffer, posY - 2, posX + 18, REDT + "\21" + CLEAR);  coord(buffer, posY - 2, posX + 22, GREENT + "/" + CLEAR);  coord(buffer, posY - 2, posX + 40, GREENT + "\\" + CLEAR);
            //
            if (z) {
                coord(buffer, posY - 2, posX + 13, " " + CLEAR);
                coord(buffer, posY - 2, posX + 14, " " + CLEAR);  coord(buffer, posY - 2, posX + 15, " " + CLEAR);  coord(buffer, posY - 2, posX + 16, " " + CLEAR);  coord(buffer, posY - 2, posX + 17, " " + CLEAR);
                coord(buffer, posY - 2, posX + 18, " " + CLEAR);

                coord(buffer, posY - 4, posX + 17, REDT + "_" + CLEAR); coord(buffer, posY - 4, posX + 18, REDT + "_" + CLEAR);
                coord(buffer, posY - 3, posX + 14, REDT + "|" + CLEAR); coord(buffer, posY - 3, posX + 15, REDT + "_" + CLEAR); coord(buffer, posY - 3, posX + 16, REDT + "|" + CLEAR); coord(buffer, posY - 3, posX + 17, REDT + "_" + CLEAR);
                coord(buffer, posY - 2, posX + 14, REDT + "_" + CLEAR); coord(buffer, posY - 2, posX + 15, REDT + "_" + CLEAR); coord(buffer, posY - 2, posX + 16, REDT + "|" + CLEAR); coord(buffer, posY - 2, posX + 18, REDT + "|" + CLEAR);

            }
            //
            coord(buffer, posY - 1, posX, GREENT + "\\" + CLEAR);
            for (int i = 1; i < 21; i++)
                coord(buffer, posY - 1, posX + i, GREENT + "=" + CLEAR);
            coord(buffer, posY - 1, posX + 21, GREENT + "/" + CLEAR);
            //
            for (int i = 3; i < 21; i++)
                coord(buffer, posY, posX + i, GREENT + "_" + CLEAR);
            coord(buffer, posY, posX + 6, GREENT + "|" + CLEAR);
            coord(buffer, posY, posX + 17, GREENT + "|" + CLEAR);

            break;
        case 3:
            //
            coord(buffer, posY - 6, posX + 13, GREENT + "|" + CLEAR); coord(buffer, posY - 6, posX + 37, GREENT + "-" + CLEAR); coord(buffer, posY - 6, posX + 38, GREENT + "-" + CLEAR); coord(buffer, posY - 6, posX + 39, GREENT + "-" + CLEAR);
            //
            coord(buffer, posY - 5, posX + 7, GREENT + "/" + CLEAR);
            for (int i = 8; i < 19; i++)
                coord(buffer, posY - 5, posX + i, GREENT + "-" + CLEAR);
            coord(buffer, posY - 5, posX + 19, GREENT + "\\" + CLEAR);
            for (int i = 30; i < 45; i++) {
                coord(buffer, posY - 5, posX + i, GREENT + "_" + CLEAR);
            }
            coord(buffer, posY - 5, posX + 36, GREENT + "/" + CLEAR); coord(buffer, posY - 5, posX + 38, GREENT + "/" + CLEAR);
            //
            if (driver)
                coord(buffer, posY - 4, posX + 10, SKIN + "\2" + CLEAR);
            else {
                coord(buffer, posY - 4, posX + 10, " " + CLEAR);
                for (int i = posY; i < 30; i++) {
                    coord(buffer, i, posX + 13, GREENT + "|" + CLEAR);
                }
            }
            //
            coord(buffer, posY - 4, posX + 6, GREENT + "/" + CLEAR); coord(buffer, posY - 4, posX + 12, GREENT + "|" + CLEAR); coord(buffer, posY - 4, posX + 20, GREENT + "\\" + CLEAR);
            for (int i = 21; i < 35; i++)
                coord(buffer, posY - 4, posX + i, GREENT + "=" + CLEAR);
            coord(buffer, posY - 4, posX + 35, GREENT + "/" + CLEAR); coord(buffer, posY - 4, posX + 37, GREENT + "/" + CLEAR);
            //
            coord(buffer, posY - 3, posX + 1, GREENT + "/" + CLEAR);
            for (int i = 2; i < 12; i++) {
                coord(buffer, posY - 3, posX + i, GREENT + "-" + CLEAR);
            }
            coord(buffer, posY - 3, posX + 5, GREENT + "/" + CLEAR);
            coord(buffer, posY - 3, posX + 12, GREENT + "/" + CLEAR);
            for (int i = 23; i < 35; i++)
                coord(buffer, posY - 3, posX + i, GREENT + "_" + CLEAR);
            coord(buffer, posY - 3, posX + 35, GREENT + "_" + CLEAR);  coord(buffer, posY - 3, posX + 36, GREENT + "/" + CLEAR);
            //
            coord(buffer, posY - 2, posX, GREENT + "/" + CLEAR);  coord(buffer, posY - 2, posX + 13, REDT + "\20" + CLEAR);
            coord(buffer, posY - 2, posX + 14, BLACKT + "U" + CLEAR);  coord(buffer, posY - 2, posX + 15, BLACKT + "S" + CLEAR);  coord(buffer, posY - 2, posX + 16, BLACKT + "S" + CLEAR);  coord(buffer, posY - 2, posX + 17, BLACKT + "R" + CLEAR);
            coord(buffer, posY - 2, posX + 18, REDT + "\21" + CLEAR);  coord(buffer, posY - 2, posX + 22, GREENT + "/" + CLEAR);
            //
            if (z) {
                coord(buffer, posY - 2, posX + 13, " " + CLEAR);
                coord(buffer, posY - 2, posX + 14, " " + CLEAR);  coord(buffer, posY - 2, posX + 15, " " + CLEAR);  coord(buffer, posY - 2, posX + 16, " " + CLEAR);  coord(buffer, posY - 2, posX + 17, " " + CLEAR);
                coord(buffer, posY - 2, posX + 18, " " + CLEAR);

                coord(buffer, posY - 4, posX + 17, REDT + "_" + CLEAR); coord(buffer, posY - 4, posX + 18, REDT + "_" + CLEAR);
                coord(buffer, posY - 3, posX + 14, REDT + "|" + CLEAR); coord(buffer, posY - 3, posX + 15, REDT + "_" + CLEAR); coord(buffer, posY - 3, posX + 16, REDT + "|" + CLEAR); coord(buffer, posY - 3, posX + 17, REDT + "_" + CLEAR);
                coord(buffer, posY - 2, posX + 14, REDT + "_" + CLEAR); coord(buffer, posY - 2, posX + 15, REDT + "_" + CLEAR); coord(buffer, posY - 2, posX + 16, REDT + "|" + CLEAR); coord(buffer, posY - 2, posX + 18, REDT + "|" + CLEAR);
            }
            //
            coord(buffer, posY - 1, posX, GREENT + "\\" + CLEAR);
            for (int i = 1; i < 21; i++)
                coord(buffer, posY - 1, posX + i, GREENT + "=" + CLEAR);
            coord(buffer, posY - 1, posX + 21, GREENT + "/" + CLEAR);
            //
            for (int i = 3; i < 21; i++)
                coord(buffer, posY, posX + i, GREENT + "_" + CLEAR);
            coord(buffer, posY, posX + 6, GREENT + "|" + CLEAR);
            coord(buffer, posY, posX + 17, GREENT + "|" + CLEAR);
            break;
        }
    }
    else {///////////////////////////////////////////////////////////////////////////////////////////////////////////////->
        switch (rotorFrame) {
        case 0:
            for (int i = 3; i < 23; i++)
                coord(buffer, posY - 7, posX - i, GREENT + "_" + CLEAR);
            coord(buffer, posY - 7, posX - 39, GREENT + "\\" + CLEAR);
            //
            coord(buffer, posY - 6, posX - 13, GREENT + "|" + CLEAR);
            coord(buffer, posY - 6, posX - 37, GREENT + "-" + CLEAR);
            coord(buffer, posY - 6, posX - 38, GREENT + "\\" + CLEAR);
            coord(buffer, posY - 6, posX - 39, GREENT + "-" + CLEAR);
            //
            coord(buffer, posY - 5, posX - 7, GREENT + "\\" + CLEAR);
            for (int i = 8; i < 19; i++)
                coord(buffer, posY - 5, posX - i, GREENT + "-" + CLEAR);
            coord(buffer, posY - 5, posX - 19, GREENT + "/" + CLEAR);
            coord(buffer, posY - 5, posX - 36, GREENT + "\\" + CLEAR);
            coord(buffer, posY - 5, posX - 37, GREENT + "\\" + CLEAR);
            coord(buffer, posY - 5, posX - 38, GREENT + "\\" + CLEAR);
            //
            if (driver)
                coord(buffer, posY - 4, posX - 10, SKIN + "\2" + CLEAR);
            else {
                coord(buffer, posY - 4, posX - 10, " " + CLEAR);
                for (int i = posY; i < 30; i++) {
                    coord(buffer, i, posX - 13, GREENT + "|" + CLEAR);
                }
            }
            //
            coord(buffer, posY - 4, posX - 6, GREENT + "\\" + CLEAR);
            coord(buffer, posY - 4, posX - 12, GREENT + "|" + CLEAR);
            coord(buffer, posY - 4, posX - 20, GREENT + "/" + CLEAR);
            for (int i = 21; i < 35; i++)
                coord(buffer, posY - 4, posX - i, GREENT + "=" + CLEAR);
            coord(buffer, posY - 4, posX - 35, GREENT + "\\" + CLEAR);
            coord(buffer, posY - 4, posX - 36, GREENT + "\\");
            coord(buffer, posY - 4, posX - 37, GREENT + "\\" + CLEAR);
            //
            coord(buffer, posY - 3, posX - 1, GREENT + "\\" + CLEAR);
            for (int i = 2; i < 12; i++) {
                coord(buffer, posY - 3, posX - i, GREENT + "-" + CLEAR);
            }
            coord(buffer, posY - 3, posX - 5, GREENT + "\\" + CLEAR);
            coord(buffer, posY - 3, posX - 12, GREENT + "\\" + CLEAR);
            for (int i = 23; i < 35; i++)
                coord(buffer, posY - 3, posX - i, GREENT + "_" + CLEAR);
            coord(buffer, posY - 3, posX - 35, GREENT + "\\" + CLEAR);
            coord(buffer, posY - 3, posX - 36, GREENT + "\\" + CLEAR);
            //
            coord(buffer, posY - 2, posX, GREENT + "\\" + CLEAR);
            coord(buffer, posY - 2, posX - 13, REDT + "\21" + CLEAR);
            coord(buffer, posY - 2, posX - 14, BLACKT + "R" + CLEAR);
            coord(buffer, posY - 2, posX - 15, BLACKT + "S" + CLEAR);
            coord(buffer, posY - 2, posX - 16, BLACKT + "S" + CLEAR);
            coord(buffer, posY - 2, posX - 17, BLACKT + "U" + CLEAR);
            coord(buffer, posY - 2, posX - 18, REDT + "\20" + CLEAR);
            coord(buffer, posY - 2, posX - 22, GREENT + "\\" + CLEAR);
            coord(buffer, posY - 2, posX - 34, GREENT + "\\" + CLEAR);
            //
            if (z) {
                coord(buffer, posY - 2, posX - 13, " " + CLEAR);
                coord(buffer, posY - 2, posX - 14, " " + CLEAR);
                coord(buffer, posY - 2, posX - 15, " " + CLEAR);
                coord(buffer, posY - 2, posX - 16, " " + CLEAR);
                coord(buffer, posY - 2, posX - 17, " " + CLEAR);
                coord(buffer, posY - 2, posX - 18, " " + CLEAR);

                coord(buffer, posY - 4, posX - 17, REDT + "_" + CLEAR);
                coord(buffer, posY - 4, posX - 18, REDT + "_" + CLEAR);
                coord(buffer, posY - 3, posX - 14, REDT + "|" + CLEAR);
                coord(buffer, posY - 3, posX - 15, REDT + "_" + CLEAR);
                coord(buffer, posY - 3, posX - 16, REDT + "|" + CLEAR);
                coord(buffer, posY - 3, posX - 17, REDT + "_" + CLEAR);
                coord(buffer, posY - 2, posX - 14, REDT + "_" + CLEAR);
                coord(buffer, posY - 2, posX - 15, REDT + "_" + CLEAR);
                coord(buffer, posY - 2, posX - 16, REDT + "|" + CLEAR);
                coord(buffer, posY - 2, posX - 18, REDT + "|" + CLEAR);
            }
            //
            coord(buffer, posY - 1, posX, GREENT + GREENT + "/" + CLEAR);
            for (int i = 1; i < 21; i++)
                coord(buffer, posY - 1, posX - i, GREENT + "=" + CLEAR);
            coord(buffer, posY - 1, posX - 21, GREENT + "\\" + CLEAR);
            //
            for (int i = 3; i < 21; i++)
                coord(buffer, posY, posX - i, GREENT + "_" + CLEAR);
            coord(buffer, posY, posX - 6, GREENT + "|" + CLEAR);
            coord(buffer, posY, posX - 17, GREENT + "|" + CLEAR);
            break;
        case 1:
            //
            coord(buffer, posY - 6, posX - 13, GREENT + "|" + CLEAR); coord(buffer, posY - 6, posX - 37, GREENT + "-" + CLEAR); coord(buffer, posY - 6, posX - 38, GREENT + "-" + CLEAR); coord(buffer, posY - 6, posX - 39, GREENT + "-" + CLEAR);
            //
            coord(buffer, posY - 5, posX - 7, GREENT + "\\" + CLEAR);
            for (int i = 8; i < 19; i++)
                coord(buffer, posY - 5, posX - i, GREENT + "-" + CLEAR);
            coord(buffer, posY - 5, posX - 19, GREENT + "/" + CLEAR);
            for (int i = 30; i < 45; i++) {
                coord(buffer, posY - 5, posX - i, GREENT + "_" + CLEAR);
            }
            coord(buffer, posY - 5, posX - 36, GREENT + "\\" + CLEAR); coord(buffer, posY - 5, posX - 38, GREENT + "\\" + CLEAR);
            //
            if (driver)
                coord(buffer, posY - 4, posX - 10, SKIN + "\2" + CLEAR);
            else {
                coord(buffer, posY - 4, posX - 10, " " + CLEAR);
                for (int i = posY; i < 30; i++) {
                    coord(buffer, i, posX - 13, GREENT + "|" + CLEAR);
                }
            }
            //
            coord(buffer, posY - 4, posX - 6, GREENT + "\\" + CLEAR); coord(buffer, posY - 4, posX - 12, GREENT + "|" + CLEAR); coord(buffer, posY - 4, posX - 20, GREENT + "/" + CLEAR);
            for (int i = 21; i < 35; i++)
                coord(buffer, posY - 4, posX - i, GREENT + "=" + CLEAR);
            coord(buffer, posY - 4, posX - 35, GREENT + "\\" + CLEAR); coord(buffer, posY - 4, posX - 37, GREENT + "\\" + CLEAR);
            //
            coord(buffer, posY - 3, posX - 1, GREENT + "\\" + CLEAR);
            for (int i = 2; i < 12; i++) {
                coord(buffer, posY - 3, posX - i, GREENT + "-" + CLEAR);
            }
            coord(buffer, posY - 3, posX - 5, GREENT + "\\" + CLEAR);
            coord(buffer, posY - 3, posX - 12, GREENT + "\\" + CLEAR);
            for (int i = 23; i < 35; i++)
                coord(buffer, posY - 3, posX - i, GREENT + "_" + CLEAR);
            coord(buffer, posY - 3, posX - 35, GREENT + "_" + CLEAR);  coord(buffer, posY - 3, posX - 36, GREENT + "\\" + CLEAR);
            //
            coord(buffer, posY - 2, posX, GREENT + "\\" + CLEAR);  coord(buffer, posY - 2, posX - 13, REDT + "\21" + CLEAR);
            coord(buffer, posY - 2, posX - 14, BLACKT + "R" + CLEAR);  coord(buffer, posY - 2, posX - 15, BLACKT + "S" + CLEAR);  coord(buffer, posY - 2, posX - 16, BLACKT + "S" + CLEAR);  coord(buffer, posY - 2, posX - 17, BLACKT + "U" + CLEAR);
            coord(buffer, posY - 2, posX - 18, REDT + "\20" + CLEAR);  coord(buffer, posY - 2, posX - 22, GREENT + "\\" + CLEAR);
            //
            if (z) {
                coord(buffer, posY - 2, posX - 13, " " + CLEAR);
                coord(buffer, posY - 2, posX - 14, " " + CLEAR);  coord(buffer, posY - 2, posX - 15, " " + CLEAR);  coord(buffer, posY - 2, posX - 16, " " + CLEAR);  coord(buffer, posY - 2, posX - 17, " " + CLEAR);
                coord(buffer, posY - 2, posX - 18, " " + CLEAR);

                coord(buffer, posY - 4, posX - 17, REDT + "_" + CLEAR); coord(buffer, posY - 4, posX - 18, REDT + "_" + CLEAR);
                coord(buffer, posY - 3, posX - 14, REDT + "|" + CLEAR); coord(buffer, posY - 3, posX - 15, REDT + "_" + CLEAR); coord(buffer, posY - 3, posX - 16, REDT + "|" + CLEAR); coord(buffer, posY - 3, posX - 17, REDT + "_" + CLEAR);
                coord(buffer, posY - 2, posX - 14, REDT + "_" + CLEAR); coord(buffer, posY - 2, posX - 15, REDT + "_" + CLEAR); coord(buffer, posY - 2, posX - 16, REDT + "|" + CLEAR); coord(buffer, posY - 2, posX - 18, REDT + "|" + CLEAR);
            }
            //
            coord(buffer, posY - 1, posX, GREENT + "/" + CLEAR);
            for (int i = 1; i < 21; i++)
                coord(buffer, posY - 1, posX - i, GREENT + "=" + CLEAR);
            coord(buffer, posY - 1, posX - 21, GREENT + "\\" + CLEAR);
            //
            for (int i = 3; i < 21; i++)
                coord(buffer, posY, posX - i, GREENT + "_" + CLEAR);
            coord(buffer, posY, posX - 6, GREENT + "|" + CLEAR);
            coord(buffer, posY, posX - 17, GREENT + "|" + CLEAR);
            break;
        case 2:
            for (int i = 3; i < 23; i++)
                coord(buffer, posY - 7, posX - i, GREENT + "_" + CLEAR);
            coord(buffer, posY - 7, posX - 35, GREENT + "/" + CLEAR);
            //
            coord(buffer, posY - 6, posX - 13, GREENT + "|" + CLEAR); coord(buffer, posY - 6, posX - 36, GREENT + "/" + CLEAR); coord(buffer, posY - 6, posX - 37, GREENT + "-" + CLEAR); coord(buffer, posY - 6, posX - 38, GREENT + "-" + CLEAR); coord(buffer, posY - 6, posX - 39, GREENT + "-" + CLEAR);
            //
            coord(buffer, posY - 5, posX - 7, GREENT + "\\" + CLEAR);
            for (int i = 8; i < 19; i++)
                coord(buffer, posY - 5, posX - i, GREENT + "-" + CLEAR);
            coord(buffer, posY - 5, posX - 19, GREENT + "/" + CLEAR); coord(buffer, posY - 5, posX - 36, GREENT + "\\" + CLEAR); coord(buffer, posY - 5, posX - 37, GREENT + "/" + CLEAR); coord(buffer, posY - 5, posX - 38, GREENT + "\\" + CLEAR);
            //
            if (driver)
                coord(buffer, posY - 4, posX - 10, SKIN + "\2" + CLEAR);
            else {
                coord(buffer, posY - 4, posX - 10, " " + CLEAR);
                for (int i = posY; i < 30; i++) {
                    coord(buffer, i, posX - 13, GREENT + "|" + CLEAR);
                }
            }
            //
            coord(buffer, posY - 4, posX - 6, GREENT + "\\" + CLEAR); coord(buffer, posY - 4, posX - 12, GREENT + "|" + CLEAR); coord(buffer, posY - 4, posX - 20, GREENT + "/" + CLEAR);
            for (int i = 21; i < 35; i++)
                coord(buffer, posY - 4, posX - i, GREENT + "=" + CLEAR);
            coord(buffer, posY - 4, posX - 35, GREENT + "\\" + CLEAR); coord(buffer, posY - 4, posX - 37, GREENT + "\\" + CLEAR);  coord(buffer, posY - 4, posX - 38, GREENT + "/" + CLEAR);
            //
            coord(buffer, posY - 3, posX - 1, GREENT + "\\" + CLEAR);
            for (int i = 2; i < 12; i++) {
                coord(buffer, posY - 3, posX - i, GREENT + "-" + CLEAR);
            }
            coord(buffer, posY - 3, posX - 5, GREENT + "\\" + CLEAR);
            coord(buffer, posY - 3, posX - 12, GREENT + "\\" + CLEAR);
            for (int i = 23; i < 35; i++)
                coord(buffer, posY - 3, posX - i, GREENT + "_" + CLEAR);
            coord(buffer, posY - 3, posX - 35, GREENT + "_" + CLEAR); coord(buffer, posY - 3, posX - 36, GREENT + "\\" + CLEAR); coord(buffer, posY - 3, posX - 39, GREENT + "/" + CLEAR);
            //
            coord(buffer, posY - 2, posX, GREENT + "\\" + CLEAR);  coord(buffer, posY - 2, posX - 13, REDT + "\21" + CLEAR);
            coord(buffer, posY - 2, posX - 14, BLACKT + "R" + CLEAR);  coord(buffer, posY - 2, posX - 15, BLACKT + "S" + CLEAR);  coord(buffer, posY - 2, posX - 16, BLACKT + "S" + CLEAR);  coord(buffer, posY - 2, posX - 17, BLACKT + "U" + CLEAR);
            coord(buffer, posY - 2, posX - 18, REDT + "\20" + CLEAR);  coord(buffer, posY - 2, posX - 22, GREENT + "\\" + CLEAR);  coord(buffer, posY - 2, posX - 40, GREENT + "/" + CLEAR);
            //
            if (z) {
                coord(buffer, posY - 2, posX - 13, " " + CLEAR);
                coord(buffer, posY - 2, posX - 14, " " + CLEAR);  coord(buffer, posY - 2, posX - 15, " " + CLEAR);  coord(buffer, posY - 2, posX - 16, " " + CLEAR);  coord(buffer, posY - 2, posX - 17, " " + CLEAR);
                coord(buffer, posY - 2, posX - 18, " " + CLEAR);

                coord(buffer, posY - 4, posX - 17, REDT + "_" + CLEAR); coord(buffer, posY - 4, posX - 18, REDT + "_" + CLEAR);
                coord(buffer, posY - 3, posX - 14, REDT + "|" + CLEAR); coord(buffer, posY - 3, posX - 15, REDT + "_" + CLEAR); coord(buffer, posY - 3, posX - 16, REDT + "|" + CLEAR); coord(buffer, posY - 3, posX - 17, REDT + "_" + CLEAR);
                coord(buffer, posY - 2, posX - 14, REDT + "_" + CLEAR); coord(buffer, posY - 2, posX - 15, REDT + "_" + CLEAR); coord(buffer, posY - 2, posX - 16, REDT + "|" + CLEAR); coord(buffer, posY - 2, posX - 18, REDT + "|" + CLEAR);

            }
            //
            coord(buffer, posY - 1, posX, GREENT + "/" + CLEAR);
            for (int i = 1; i < 21; i++)
                coord(buffer, posY - 1, posX - i, GREENT + "=" + CLEAR);
            coord(buffer, posY - 1, posX - 21, GREENT + "\\" + CLEAR);
            //
            for (int i = 3; i < 21; i++)
                coord(buffer, posY, posX - i, GREENT + "_" + CLEAR);
            coord(buffer, posY, posX - 6, GREENT + "|" + CLEAR);
            coord(buffer, posY, posX - 17, GREENT + "|" + CLEAR);

            break;
        case 3:
            //
            coord(buffer, posY - 6, posX - 13, GREENT + "|" + CLEAR); coord(buffer, posY - 6, posX - 37, GREENT + "-" + CLEAR); coord(buffer, posY - 6, posX - 38, GREENT + "-" + CLEAR); coord(buffer, posY - 6, posX - 39, GREENT + "-" + CLEAR);
            //
            coord(buffer, posY - 5, posX - 7, GREENT + "\\" + CLEAR);
            for (int i = 8; i < 19; i++)
                coord(buffer, posY - 5, posX - i, GREENT + "-" + CLEAR);
            coord(buffer, posY - 5, posX - 19, GREENT + "/" + CLEAR);
            for (int i = 30; i < 45; i++) {
                coord(buffer, posY - 5, posX - i, GREENT + "_" + CLEAR);
            }
            coord(buffer, posY - 5, posX - 36, GREENT + "\\" + CLEAR); coord(buffer, posY - 5, posX - 38, GREENT + "\\" + CLEAR);
            //
            if (driver)
                coord(buffer, posY - 4, posX - 10, SKIN + "\2" + CLEAR);
            else {
                coord(buffer, posY - 4, posX - 10, " " + CLEAR);
                for (int i = posY; i < 30; i++) {
                    coord(buffer, i, posX - 13, GREENT + "|" + CLEAR);
                }
            }
            //
            coord(buffer, posY - 4, posX - 6, GREENT + "\\" + CLEAR); coord(buffer, posY - 4, posX - 12, GREENT + "|" + CLEAR); coord(buffer, posY - 4, posX - 20, GREENT + "/" + CLEAR);
            for (int i = 21; i < 35; i++)
                coord(buffer, posY - 4, posX - i, GREENT + "=" + CLEAR);
            coord(buffer, posY - 4, posX - 35, GREENT + "\\" + CLEAR); coord(buffer, posY - 4, posX - 37, GREENT + "\\" + CLEAR);
            //
            coord(buffer, posY - 3, posX - 1, GREENT + "\\" + CLEAR);
            for (int i = 2; i < 12; i++) {
                coord(buffer, posY - 3, posX - i, GREENT + "-" + CLEAR);
            }
            coord(buffer, posY - 3, posX - 5, GREENT + "\\" + CLEAR);
            coord(buffer, posY - 3, posX - 12, GREENT + "\\" + CLEAR);
            for (int i = 23; i < 35; i++)
                coord(buffer, posY - 3, posX - i, GREENT + "_" + CLEAR);
            coord(buffer, posY - 3, posX - 35, GREENT + "_" + CLEAR);  coord(buffer, posY - 3, posX - 36, GREENT + "\\" + CLEAR);
            //
            coord(buffer, posY - 2, posX, GREENT + "\\" + CLEAR);  coord(buffer, posY - 2, posX - 13, REDT + "\21" + CLEAR);
            coord(buffer, posY - 2, posX - 14, BLACKT + "R" + CLEAR);  coord(buffer, posY - 2, posX - 15, BLACKT + "S" + CLEAR);  coord(buffer, posY - 2, posX - 16, BLACKT + "S" + CLEAR);  coord(buffer, posY - 2, posX - 17, BLACKT + "U" + CLEAR);
            coord(buffer, posY - 2, posX - 18, REDT + "\20" + CLEAR);  coord(buffer, posY - 2, posX - 22, GREENT + "\\" + CLEAR);
            //
            if (z) {
                coord(buffer, posY - 2, posX - 13, " " + CLEAR);
                coord(buffer, posY - 2, posX - 14, " " + CLEAR);  coord(buffer, posY - 2, posX - 15, " " + CLEAR);  coord(buffer, posY - 2, posX - 16, " " + CLEAR);  coord(buffer, posY - 2, posX - 17, " " + CLEAR);
                coord(buffer, posY - 2, posX - 18, " " + CLEAR);

                coord(buffer, posY - 4, posX - 17, REDT + "_" + CLEAR); coord(buffer, posY - 4, posX - 18, REDT + "_" + CLEAR);
                coord(buffer, posY - 3, posX - 14, REDT + "|" + CLEAR); coord(buffer, posY - 3, posX - 15, REDT + "_" + CLEAR); coord(buffer, posY - 3, posX - 16, REDT + "|" + CLEAR); coord(buffer, posY - 3, posX - 17, REDT + "_" + CLEAR);
                coord(buffer, posY - 2, posX - 14, REDT + "_" + CLEAR); coord(buffer, posY - 2, posX - 15, REDT + "_" + CLEAR); coord(buffer, posY - 2, posX - 16, REDT + "|" + CLEAR); coord(buffer, posY - 2, posX - 18, REDT + "|" + CLEAR);
            }
            //
            coord(buffer, posY - 1, posX, GREENT + "/" + CLEAR);
            for (int i = 1; i < 21; i++)
                coord(buffer, posY - 1, posX - i, GREENT + "=" + CLEAR);
            coord(buffer, posY - 1, posX - 21, GREENT + "\\" + CLEAR);
            //
            for (int i = 3; i < 21; i++)
                coord(buffer, posY, posX - i, GREENT + "_" + CLEAR);
            coord(buffer, posY, posX - 6, GREENT + "|" + CLEAR);
            coord(buffer, posY, posX - 17, GREENT + "|" + CLEAR);
            break;
        }
    }
}

void Helicopter::processKeyboardInput() {
    if (engine) {
        if (GetAsyncKeyState(VK_LEFT)) {
            if (!side)
             posX -= 44;
            side = true;
            posX = max(40, posX - 2);
        }
        if (GetAsyncKeyState(VK_RIGHT)) {
            if(side)
                posX += 44;
            side = false;
            posX = min(315, posX + 2);
        }
        if (GetAsyncKeyState(VK_DOWN) or GetAsyncKeyState(0x53)) {
            posY = min(30, posY + 1);
        }
        if (GetAsyncKeyState(VK_UP) or GetAsyncKeyState(0x57)) {
            posY = max(8, posY - 1);
        }
    }
    if (driver) {
        if (GetAsyncKeyState(0x45)) {
            if (!keyPressedE) {
                engine = !engine;
                keyPressedE = true;
            }
        }
        else
            keyPressedE = false;
    }
}

void Helicopter::processKeyboardForAll() {
    
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

void Helicopter::driving() {
    driver = !driver;
}

void Helicopter::coord(string** buffer, int row, int col, string sim) {
    buffer[row - 1][col - 1] = sim;
}