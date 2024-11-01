#include "world.h"


using namespace std;
World::World() {
    
}

World::~World() {
    
}


void World::InitWorld() {
   
}

void World::showTrees(string** wbuffer, int type) {
    switch (type) {
    case 1:
        coord(wbuffer, 25, treepos - 1, GREENT + "(" + CLEAR); coord(wbuffer, 25, treepos, GREENT + "(" + CLEAR); coord(wbuffer, 25, treepos + 1, GREENT + ")" + CLEAR);
        coord(wbuffer, 26, treepos - 3, GREENT + "(" + CLEAR); coord(wbuffer, 26, treepos - 2, GREENT + "(" + CLEAR); coord(wbuffer, 26, treepos - 1, GREENT + ")" + CLEAR); coord(wbuffer, 26, treepos, GREENT + "(" + CLEAR); coord(wbuffer, 26, treepos + 1, GREENT + "(" + CLEAR); coord(wbuffer, 26, treepos + 2, GREENT + ")" + CLEAR);
        coord(wbuffer, 27, treepos - 2, GREENT + "(" + CLEAR); coord(wbuffer, 27, treepos - 1, GREENT + ")" + CLEAR); coord(wbuffer, 27, treepos, GREENT + "(" + CLEAR); coord(wbuffer, 27, treepos + 1, GREENT + ")" + CLEAR); coord(wbuffer, 27, treepos + 2, GREENT + ")" + CLEAR);
        coord(wbuffer, 28, treepos - 1, BROWNT + "\\" + CLEAR); coord(wbuffer, 28, treepos, BROWNF + " " + CLEAR); coord(wbuffer, 28, treepos + 1, BROWNT + "/" + CLEAR);
        coord(wbuffer, 29, treepos, BROWNF + " " + CLEAR);
        coord(wbuffer, 30, treepos, BROWNF + " " + CLEAR);
        break;
    case 2:
        coord(wbuffer, 25, treepos, GREENT + "^" + CLEAR);
        coord(wbuffer, 26, treepos - 1, GREENT + "/" + CLEAR); coord(wbuffer, 26, treepos, GREENT + "|" + CLEAR); coord(wbuffer, 26, treepos + 1, GREENT + "\\" + CLEAR);
        coord(wbuffer, 27, treepos - 2, GREENT + "/" + CLEAR); coord(wbuffer, 27, treepos - 1, GREENT + "/" + CLEAR); coord(wbuffer, 27, treepos, GREENT + "|" + CLEAR); coord(wbuffer, 27, treepos + 1, GREENT + "\\" + CLEAR); coord(wbuffer, 27, treepos + 2, GREENT + "\\" + CLEAR);
        coord(wbuffer, 28, treepos - 3, GREENT + "/" + CLEAR); coord(wbuffer, 28, treepos - 2, GREENT + "/" + CLEAR); coord(wbuffer, 28, treepos - 1, GREENT + "/" + CLEAR); coord(wbuffer, 28, treepos, GREENT + "|" + CLEAR); coord(wbuffer, 28, treepos + 1, GREENT + "\\" + CLEAR); coord(wbuffer, 28, treepos + 2, GREENT + "\\" + CLEAR); coord(wbuffer, 28, treepos + 3, GREENT + "\\" + CLEAR);
        coord(wbuffer, 29, treepos, BROWNF + " " + CLEAR);
        coord(wbuffer, 30, treepos, BROWNF + " " + CLEAR);
        break;
    }
}
    

void World::coord(string** wbuffer, int row, int col, string sim) {
    wbuffer[row - 1][col - 1] = sim;
}