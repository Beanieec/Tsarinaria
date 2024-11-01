#include "Notif.h"


void Notif::enterdrive(int type, string** buffer) {
	switch (type)
	{
	case 1:
		coord(buffer, 4, 100, "P"); coord(buffer, 4, 101, "R"); coord(buffer, 4, 102, "E"); coord(buffer, 4, 103, "S"); coord(buffer, 4, 104, "S");
		coord(buffer, 4, 106, "F");
		coord(buffer, 4, 108, "t"); coord(buffer, 4, 109, "o");
		coord(buffer, 4, 111, "d"); coord(buffer, 4, 112, "r"); coord(buffer, 4, 113, "i"); coord(buffer, 4, 114, "v"); coord(buffer, 4, 115, "e");
		break;
	case 2:
		coord(buffer, 4, 100, "P"); coord(buffer, 4, 101, "R"); coord(buffer, 4, 102, "E"); coord(buffer, 4, 103, "S"); coord(buffer, 4, 104, "S");
		coord(buffer, 4, 106, "F");
		coord(buffer, 4, 108, "t"); coord(buffer, 4, 109, "o");
		coord(buffer, 4, 111, "e"); coord(buffer, 4, 112, "x"); coord(buffer, 4, 113, "i"); coord(buffer, 4, 114, "t");
		break;
	case 3:
		coord(buffer, 2, 96, "P"); coord(buffer, 2, 97, "R"); coord(buffer, 2, 98, "E"); coord(buffer, 2, 99, "S"); coord(buffer, 2, 100, "S");
		coord(buffer, 2, 102, "E");
		coord(buffer, 2, 104, "t"); coord(buffer, 2, 105, "o");
		coord(buffer, 2, 107, "s"); coord(buffer, 2, 108, "t"); coord(buffer, 2, 109, "a"); coord(buffer, 2, 110, "r"); coord(buffer, 2, 111, "t");
		coord(buffer, 2, 113, "e"); coord(buffer, 2, 114, "n"); coord(buffer, 2, 115, "g"); coord(buffer, 2, 116, "i"); coord(buffer, 2, 117, "n"); coord(buffer, 2, 118, "e");
	}
}

void Notif::coord(string** buffer, int row, int col, string sim) {
	buffer[row - 1][col - 1] = sim;
}