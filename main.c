#include "game.h"

int main(int args, char **argv)
{
    createFood();
    createEnemies();
    createItems();
    createLocations();

    gameFile = fopen("GameFile.txt", "r");

    if (gameFile == NULL){
        fprintf(stderr, "Error: %s\n", strerror(errno));
        exit(-1);
    }

    if (args == 2){
        readSaveFile(argv[1]);

        showStats();

        gameLoop();
    }else{

        printText(14, 3);

        printf("\nEnter your first command: ");

        char input[50] = {'\0'};
        scanf(" %s", input);

        if (!strncasecmp(input, "yes", 3)){
            printText(309, 3);

            gameLoop();
        }else{
            gameOver();
        }
    }
}

void help()
{
    printText(142, 9);
}

void createLocations()
{
    locationList[0].seek = 893;
    locationList[0].lines = 1;

    locationList[1].seek = 982;
    locationList[1].lines = 2;

    locationList[2].seek = 1089;
    locationList[2].lines = 2;

    locationList[3].seek = 1195;
    locationList[3].lines = 2;

    locationList[4].seek = 1310;
    locationList[4].lines = 2;

    locationList[5].seek = 1430;
    locationList[5].lines = 2;

    locationList[6].seek = 1529;
    locationList[6].lines = 2;

    locationList[7].itemPresent = itemList[0];
    locationList[7].seek = 1628;
    locationList[7].lines = 2;

    locationList[8].seek = 1727;
    locationList[8].lines = 2;

    locationList[9].seek = 1826;
    locationList[9].lines = 2;

    locationList[10].seek = 1926;
    locationList[10].lines = 2;

    locationList[11].seek = 2026;
    locationList[11].lines = 2;

    locationList[12].seek = 2147;
    locationList[12].lines = 2;

    locationList[13].seek = 2263;
    locationList[13].lines = 2;

    locationList[14].seek = 2361;
    locationList[14].lines = 2;

    locationList[15].seek = 2459;
    locationList[15].lines = 2;

    locationList[16].seek = 2568;
    locationList[16].lines = 2;

    locationList[17].itemPresent = itemList[2];
    locationList[17].seek = 2665;
    locationList[17].lines = 2;

    locationList[18].seek = 2775;
    locationList[18].lines = 2;

    locationList[19].seek = 2874; // important
    locationList[19].lines = 2;

    locationList[20].seek = 2874;
    locationList[20].lines = 2;

    locationList[21].seek = 2976;
    locationList[21].lines = 2;

    locationList[22].seek = 2976;
    locationList[22].lines = 2;

    locationList[23].seek = 2874;
    locationList[23].lines = 2;

    locationList[24].seek = 3210;
    locationList[24].lines = 2;

    locationList[25].seek = 2874;
    locationList[25].lines = 2;

    locationList[26].seek = 2874;
    locationList[26].lines = 2;

    locationList[27].seek = 3388;
    locationList[27].lines = 2;

    locationList[28].seek = 3499;
    locationList[28].lines = 2;

    locationList[29].damage = 10;
    locationList[29].seek = 3609;
    locationList[29].lines = 2;

    locationList[30].seek = 3711;
    locationList[30].lines = 2;

    locationList[31].seek = 3779;
    locationList[31].lines = 2;

    locationList[32].seek = 3917;
    locationList[32].lines = 2;

    locationList[33].seek = 4030;
    locationList[33].lines = 2;

    locationList[34].seek = 4150;
    locationList[34].lines = 2;

    locationList[35].seek = 4264;
    locationList[35].lines = 2;

    locationList[36].seek = 2874;
    locationList[36].lines = 2;

    locationList[37].seek = 4407;
    locationList[37].lines = 2;

    locationList[38].itemPresent = itemList[3];
    locationList[38].seek = 4521;
    locationList[38].lines = 2;

    locationList[39].seek = 4621;
    locationList[39].lines = 2;

    locationList[40].seek = 4757;
    locationList[40].lines = 2;

    locationList[41].seek = 4880;
    locationList[41].lines = 2;

    locationList[42].seek = 4993;
    locationList[42].lines = 2;

    locationList[43].seek = 2874;
    locationList[43].lines = 2;

    locationList[44].seek = 5137;
    locationList[44].lines = 2;

    locationList[45].seek = 5236;
    locationList[45].lines = 2;

    locationList[46].itemPresent = itemList[4];
    locationList[46].seek = 5334;
    locationList[46].lines = 2;

    locationList[47].seek = 5432;
    locationList[47].lines = 2;

    locationList[48].seek = 5541;
    locationList[48].lines = 2;

    locationList[49].seek = 5661;
    locationList[49].lines = 2;

    locationList[50].itemPresent = itemList[8];
    locationList[50].seek = 5776;
    locationList[50].lines = 3;

    locationList[51].seek = 2874;
    locationList[51].lines = 2;

    locationList[52].seek = 5943;
    locationList[52].lines = 2;

    locationList[53].seek = 6056;
    locationList[53].lines = 2;

    locationList[54].seek = 6179;
    locationList[54].lines = 2;

    locationList[55].enemyPresent = enemyList[3];
    locationList[55].seek = 6292;
    locationList[55].lines = 4;

    locationList[56].itemPresent = itemList[3];
    locationList[56].seek = 6465;
    locationList[56].lines = 2;

    locationList[57].seek = 6588;
    locationList[57].lines = 2;

    locationList[58].seek = 2874;
    locationList[58].lines = 2;

    locationList[59].seek = 2874;
    locationList[59].lines = 2;

    locationList[60].seek = 6766;
    locationList[60].lines = 2;

    locationList[61].seek = 6865;
    locationList[61].lines = 2;

    locationList[62].seek = 6979;
    locationList[62].lines = 2;

    locationList[63].seek = 7092;
    locationList[63].lines = 2;

    locationList[64].seek = 7208;
    locationList[64].lines = 3;

    locationList[65].seek = 7343;
    locationList[65].lines = 2;

    locationList[66].seek = 7466;
    locationList[66].lines = 2;

    locationList[67].seek = 7579;
    locationList[67].lines = 2;

    locationList[68].seek = 7649;
    locationList[68].lines = 2;

    locationList[69].itemPresent = itemList[7];
    locationList[69].seek = 7778;
    locationList[69].lines = 2;

    locationList[70].seek = 7891;
    locationList[70].lines = 2;

    locationList[71].seek = 8014;
    locationList[71].lines = 2;

    locationList[72].seek = 2874;
    locationList[72].lines = 2;

    locationList[73].seek = 8205;
    locationList[73].lines = 2;

    locationList[74].seek = 2874;
    locationList[74].lines = 2;

    locationList[75].seek = 2874;
    locationList[75].lines = 2;

    locationList[76].itemPresent = itemList[5];
    locationList[76].seek = 8372;
    locationList[76].lines = 2;

    locationList[77].seek = 8471;
    locationList[77].lines = 2;

    locationList[78].seek = 8591;
    locationList[78].lines = 2;

    locationList[79].seek = 8731;
    locationList[79].lines = 2;

    locationList[80].seek = 8851;
    locationList[80].lines = 2;

    locationList[81].seek = 2874;
    locationList[81].lines = 2;

    locationList[82].seek = 9014;
    locationList[82].lines = 2;

    locationList[83].seek = 9127;
    locationList[83].lines = 4;

    locationList[84].seek = 9331;
    locationList[84].lines = 2;

    locationList[85].seek = 9449;
    locationList[85].lines = 2;

    locationList[86].seek = 2874;
    locationList[86].lines = 2;

    locationList[87].seek = 9597;
    locationList[87].lines = 2;

    locationList[88].seek = 9700;
    locationList[88].lines = 2;

    locationList[89].seek = 2874;
    locationList[89].lines = 2;

    locationList[90].seek = 9834;
    locationList[90].lines = 2;

    locationList[91].seek = 9949;
    locationList[91].lines = 2;

    locationList[110].itemPresent = itemList[1];

    locationList[113].enemyPresent = enemyList[2];

    locationList[116].itemPresent = itemList[9];

    locationList[119].itemPresent = itemList[6];

    locationList[121].itemPresent = itemList[11];

    locationList[126].itemPresent = itemList[10];

//    Inside the temple

    locationList[135].damage = 10000;

    locationList[139].damage = 15;

    locationList[141].damage = 15;

    locationList[142].itemPresent = itemList[3];

    locationList[151].enemyPresent = enemyList[5];

    locationList[168].enemyPresent = enemyList[6];

    locationList[174].damage = 25;

    locationList[176].damage = 25;

    locationList[178].itemPresent = itemList[3];

    locationList[182].enemyPresent = enemyList[7];
//    locationList[1].enemyPresent = enemyList[0];
}

void createFood()
{
//    foodList[0].name = {"Coconut"};
    strncpy(foodList[0].name, "coconuts", 8);
    foodList[0].value = 1;

//    foodList[1].name = {"Berries"};
    strncpy(foodList[1].name, "berries", 7);
    foodList[1].value = 2;

//    foodList[2].name = {"Apple"};
    strncpy(foodList[2].name, "apples", 6);
    foodList[2].value = 6;

    strncpy(foodList[3].name, "eggs", 4);
    foodList[3].value = 4;

    strncpy(foodList[4].name, "mushrooms", 9);
    foodList[4].value = 3;

    strncpy(foodList[5].name, "potatoes", 8);
    foodList[5].value = 5;

    strncpy(foodList[6].name, "muffins", 7);
    foodList[6].value = 10;

    strncpy(foodList[19].name, "", 1);
    foodList[19].value = 0;
}

void createItems()
{
    strncpy(itemList[0].name, "stick", 5);
    itemList[0].strengthValue = 5;

    strncpy(itemList[1].name, "sword", 5);
    itemList[1].strengthValue = 30;

    strncpy(itemList[2].name, "rusty knife", 11);
    itemList[2].healthValue = -10;
    itemList[2].seek = 613;
    itemList[2].lines = 1;

    strncpy(itemList[3].name, "water bottle", 12);
    itemList[3].healthValue = 20;
    itemList[3].seek = 673;
    itemList[3].lines = 1;

    strncpy(itemList[4].name, "slingshot", 9);
    itemList[4].strengthValue = 10;

    strncpy(itemList[5].name, "hammer", 6);
    itemList[5].strengthValue = 20;

    strncpy(itemList[6].name, "knife", 6);
    itemList[6].strengthValue = 25;

    strncpy(itemList[7].name, "hoe", 3);
    itemList[7].strengthValue = 42;
    itemList[7].healthValue = 69;

    strncpy(itemList[8].name, "helmet", 6);
    itemList[8].healthValue = 50;

    strncpy(itemList[9].name, "map", 3);
    itemList[9].seek = 723;
    itemList[9].lines = 2;

    strncpy(itemList[10].name, "photo", 7);
    itemList[10].seek = 783;
    itemList[10].lines = 2;

    strncpy(itemList[11].name, "sea shell", 9);
    itemList[11].seek = 842;
    itemList[11].lines = 1;
    itemList[11].strengthValue = -5;

    strncpy(itemList[19].name, "", 0);
    itemList[19].strengthValue = 0;
    itemList[19].healthValue = 0;
}

void createEnemies()
{
    strncpy(enemyList[1].name,"monkey", 6);
    enemyList[1].strength = 5;
    enemyList[1].health = 10;

    strncpy(enemyList[2].name, "Monster Crab", 12);
    enemyList[2]. strength = 20;
    enemyList[2].health = 50;

    strncpy(enemyList[3].name, "hippo", 5);
    enemyList[3].strength = 10;
    enemyList[3].health = 30;

    strncpy(enemyList[4].name, "komodo dragon", 13);
    enemyList[4].strength = 10;
    enemyList[4].health = 5;

    strncpy(enemyList[5].name, "minotaur", 8);
    enemyList[5].strength = 30;
    enemyList[5].health = 70;

    strncpy(enemyList[6].name, "hydra", 5);
    enemyList[6].strength = 35;
    enemyList[6].health = 60;

    strncpy(enemyList[7].name, "cyclopes", 8);
    enemyList[7].strength = 50;
    enemyList[7].health = 80;

    strncpy(enemyList[0].name, "", 0);
    enemyList[0].strength = 0;
    enemyList[0].health = 0;
}

void printText(int seek, int numberOfLines)
{
    fseek(gameFile, seek, SEEK_SET);

    char toOutput[100] = {'\0'};

    for (int i = 0; i < numberOfLines; i++) {
        fscanf(gameFile, " %[^\n]s", toOutput);
        printf("%s\n", toOutput);
    }
}

void gameLoop()
{
    if (health > 0){
        if (strlen(locationList[currentLocation].enemyPresent.name) != 0){
            damage();
        }
        if (locationList[currentLocation].damage != 0){
            health -= locationList[currentLocation].damage;
        }
        parseCommand();
    }else{
        gameOver();
    }
}

void gameWon()
{
    printf("You won the game\nCongrats!!!\n");
    fclose(gameFile);
    exit(-1);
}

void gameOver()
{
    printText(462, 2);
    fclose(gameFile);
    exit(-1);
}

void parseCommand()
{
    char input[100] = {'\0'};

    printf("\nEnter your next command: ");
    scanf(" %[^\n]s", input);
    printf("--------------------------------------------------------\n");

    if (!strncasecmp(input, "help", 4)) {
        help();
    }else if (!strncasecmp(input, "move", 4)) {
        move(input);
    }else if (!strncasecmp(input, "search area", 11)) {
        searchArea();
    } else if (!strncasecmp(input, "show stats", 10)) {
        showStats();
    }else if (!strncasecmp(input, "end", 3)) {
        gameOver();
    }else if (!strncasecmp(input, "pick up", 7)) {
        pickUp(&input[8]);
    }else if (!strncasecmp(input, "eat", 3)) {
        eat(&input[4]);
    }else if (!strncasecmp(input, "save and exit", 13)) {
        saveAndExit();
    }else if (!strncasecmp(input, "attack", 6)){
        attack(&input[7]);
    }else {
        printText(528, 3);
    }

    gameLoop();
}

void move(char input[]) {
    int temp = currentLocation;

    if (!strncasecmp(&input[5], "north", 5)) {
        moveNorth();
    } else if (!strncasecmp(&input[5], "West", 4)) {
        moveWest();
    } else if (!strncasecmp(&input[5], "south", 5)) {
        moveSouth();
    } else if (!strncasecmp(&input[5], "east", 4)) {
        moveEast();
    }else if (!strncasecmp(&input[5], "down", 4) && currentLocation == 83){
        currentLocation = 146;
    } else {
        printText(528, 3);
        return;
    }

    if (temp == currentLocation) {
        printf("You can't go that way\n");
    } else {
        randomItems();
        searchArea();
        randomHunger();
    }
}

void moveNorth()
{
    switch (currentLocation) {
        case 0:
            currentLocation = 1;
            break;
        case 1:
            currentLocation = 23;
            break;
        case 2:
            currentLocation = 16;
            break;
        case 3:
            currentLocation = 17;
            break;
        case 4:
            currentLocation = 18;
            break;
        case 5:
            currentLocation = 19;
            break;
        case 6:
            currentLocation = 20;
            break;
        case 7:
            currentLocation = 21;
            break;
        case 8:
            currentLocation = 22;
            break;
        case 9:
            currentLocation = 24;
            break;
        case 10:
            currentLocation = 25;
            break;
        case 11:
            currentLocation = 26;
            break;
        case 12:
            currentLocation = 27;
            break;
        case 13:
            currentLocation = 28;
            break;
        case 14:
            currentLocation = 29;
            break;
        case 15:
            currentLocation = 30;
            break;
        case 16:
            currentLocation = 34;
            break;
        case 17:
            currentLocation = 35;
            break;
        case 18:
            currentLocation = 36;
            break;
        case 19:
            currentLocation = 37;
            break;
        case 20:
            currentLocation = 38;
            break;
        case 23:
            currentLocation = 39;
            break;
        case 24:
            currentLocation = 40;
            break;
        case 25:
            currentLocation = 41;
            break;
        case 26:
            currentLocation = 42;
            break;
        case 27:
            currentLocation = 43;
            break;
        case 28:
            currentLocation = 44;
            break;
        case 29:
            currentLocation = 45;
            break;
        case 30:
            currentLocation = 46;
            break;
        case 31:
            currentLocation = 47;
            break;
        case 32:
            currentLocation = 48;
            break;
        case 33:
            currentLocation = 49;
            break;
        case 34:
            currentLocation = 50;
            break;
        case 35:
            currentLocation = 51;
            break;
        case 36:
            currentLocation = 52;
            break;
        case 37:
            currentLocation = 53;
            break;
        case 38:
            currentLocation = 54;
            break;
        case 39:
            currentLocation = 56;
            break;
        case 40:
            currentLocation = 57;
            break;
        case 41:
            currentLocation = 58;
            break;
        case 42:
            currentLocation = 59;
            break;
        case 43:
            currentLocation = 60;
            break;
        case 44:
            currentLocation = 61;
            break;
        case 45:
            currentLocation = 62;
            break;
        case 48:
            currentLocation = 63;
            break;
        case 49:
            currentLocation = 64;
            break;
        case 50:
            currentLocation = 65;
            break;
        case 51:
            currentLocation = 66;
            break;
        case 52:
            currentLocation = 67;
            break;
        case 53:
            currentLocation = 68;
            break;
        case 54:
            currentLocation = 69;
            break;
        case 55:
            currentLocation = 70;
            break;
        case 56:
            currentLocation = 72;
            break;
        case 57:
            currentLocation = 73;
            break;
        case 58:
            currentLocation = 74;
            break;
        case 59:
            currentLocation = 75;
            break;
        case 60:
            currentLocation = 76;
            break;
        case 61:
            currentLocation = 77;
            break;
        case 63:
            currentLocation = 78;
            break;
        case 64:
            currentLocation = 79;
            break;
        case 65:
            currentLocation = 80;
            break;
        case 66:
            currentLocation = 81;
            break;
        case 67:
            currentLocation = 82;
            break;
        case 68:
            currentLocation = 83;
            break;
        case 69:
            currentLocation = 84;
            break;
        case 70:
            currentLocation = 85;
            break;
        case 71:
            currentLocation = 86;
            break;
        case 72:
            currentLocation = 87;
            break;
        case 74:
            currentLocation = 88;
            break;
        case 75:
            currentLocation = 89;
            break;
        case 76:
            currentLocation = 90;
            break;
        case 77:
            currentLocation = 91;
            break;
        case 80:
            currentLocation = 92;
            break;
        case 81:
            currentLocation = 93;
            break;
        case 82:
            currentLocation = 94;
            break;
        case 83:
            currentLocation = 95;
            break;
        case 84:
            currentLocation = 96;
            break;
        case 85:
            currentLocation = 97;
            break;
        case 86:
            currentLocation = 98;
            break;
        case 87:
            currentLocation = 99;
            break;
        case 88:
            currentLocation = 100;
            break;
        case 89:
            currentLocation = 101;
            break;
        case 90:
            currentLocation = 102;
            break;
        case 91:
            currentLocation = 103;
            break;
        case 92:
            currentLocation = 105;
            break;
        case 93:
            currentLocation = 106;
            break;
        case 94:
            currentLocation = 107;
            break;
        case 95:
            currentLocation = 108;
            break;
        case 98:
            currentLocation = 109;
            break;
        case 99:
            currentLocation = 110;
            break;
        case 100:
            currentLocation = 111;
            break;
        case 101:
            currentLocation = 112;
            break;
        case 102:
            currentLocation = 113;
            break;
        case 103:
            currentLocation = 114;
            break;
        case 104:
            currentLocation = 115;
            break;
        case 105:
            currentLocation = 117;
            break;
        case 106:
            currentLocation = 118;
            break;
        case 107:
            currentLocation = 119;
            break;
        case 108:
            currentLocation = 120;
            break;
        case 109:
            currentLocation = 121;
            break;
        case 110:
            currentLocation = 122;
            break;
        case 112:
            currentLocation = 123;
            break;
        case 113:
            currentLocation = 124;
            break;
        case 114:
            currentLocation = 125;
            break;
        case 115:
            currentLocation = 126;
            break;
        case 116:
            currentLocation = 127;
            break;

        case 131:
            currentLocation = 130;
            break;
        case 132:
            currentLocation = 131;
            break;
        case 136:
            currentLocation = 137;
            break;
        case 137:
            currentLocation = 138;
            break;
        case 143:
            currentLocation = 136;
            break;
        case 144:
            currentLocation = 143;
            break;
        case 146:
            currentLocation = 147;
            break;
        case 147:
            currentLocation = 148;
            break;
        case 153:
            currentLocation = 152;
            break;
        case 154:
            currentLocation = 153;
            break;
        case 155:
            currentLocation = 154;
            break;
        case 156:
            currentLocation = 155;
            break;
        case 157:
            currentLocation = 156;
            break;
        case 158:
            currentLocation = 157;
            break;
        case 162:
            currentLocation = 163;
            break;
        case 167:
            currentLocation = 168;
            break;
        case 168:
            currentLocation = 169;
            break;
        case 169:
            currentLocation = 170;
            break;
        case 170:
            currentLocation = 171;
            break;
        case 171:
            currentLocation = 134;
            break;
        case 172:
            currentLocation = 162;
            break;
        case 181:
            currentLocation = 180;
            break;
        case 182:
            currentLocation = 181;
            break;
    }
}

void moveWest()
{

    if (currentLocation < 128) {
        if (currentLocation != 0 && currentLocation != 1 && currentLocation != 9 && currentLocation != 2 &&
            currentLocation != 16 && currentLocation != 32 && currentLocation != 39 && currentLocation != 48 &&
            currentLocation != 56 && currentLocation != 63 && currentLocation != 78 && currentLocation != 88 &&
            currentLocation != 92 && currentLocation != 100 && currentLocation != 104 && currentLocation != 109 &&
            currentLocation != 111 && currentLocation != 117 && currentLocation != 121 && currentLocation != 123) {
            currentLocation--;
        } else if (currentLocation == 1) {
            currentLocation = 8;
        } else if (currentLocation == 9) {
            currentLocation = 1;
        }
    } else {
        switch (currentLocation) {
            case 133:
                currentLocation = 132;
                break;
            case 134:
                currentLocation = 133;
                break;
            case 135:
                currentLocation = 134;
                break;
            case 136:
                currentLocation = 135;
                break;
            case 139:
                currentLocation = 138;
                break;
            case 140:
                currentLocation = 139;
                break;
            case 141:
                currentLocation = 140;
                break;
            case 142:
                currentLocation = 141;
                break;
            case 145:
                currentLocation = 144;
                break;
            case 146:
                currentLocation = 145;
                break;
            case 149:
                currentLocation = 148;
                break;
            case 150:
                currentLocation = 149;
                break;
            case 151:
                currentLocation = 150;
                break;
            case 152:
                currentLocation = 151;
                break;
            case 158:
                currentLocation = 159;
                break;
            case 159:
                currentLocation = 160;
                break;
            case 160:
                currentLocation = 161;
                break;
            case 161:
                currentLocation = 162;
                break;
            case 163:
                currentLocation = 164;
                break;
            case 164:
                currentLocation = 165;
                break;
            case 165:
                currentLocation = 166;
                break;
            case 166:
                currentLocation = 167;
                break;
            case 172:
                currentLocation = 173;
                break;
            case 173:
                currentLocation = 174;
                break;
            case 174:
                currentLocation = 175;
                break;
            case 175:
                currentLocation = 176;
                break;
            case 176:
                currentLocation = 177;
                break;
            case 177:
                currentLocation = 178;
                break;
            case 179:
                currentLocation = 146;
                break;
            case 180:
                currentLocation = 179;
                break;
        }
    }
}

void moveSouth()
{
    switch (currentLocation) {
        case 1:
            currentLocation = 0;
            break;
        case 16:
            currentLocation = 2;
            break;
        case 17:
            currentLocation = 3;
            break;
        case 18:
            currentLocation = 4;
            break;
        case 19:
            currentLocation = 5;
            break;
        case 20:
            currentLocation = 6;
            break;
        case 21:
            currentLocation = 7;
            break;
        case 22:
            currentLocation = 8;
            break;
        case 23:
            currentLocation = 1;
            break;
        case 24:
            currentLocation = 9;
            break;
        case 25:
            currentLocation = 10;
            break;
        case 26:
            currentLocation = 11;
            break;
        case 27:
            currentLocation = 12;
            break;
        case 28:
            currentLocation = 13;
            break;
        case 29:
            currentLocation = 14;
            break;
        case 30:
            currentLocation = 15;
            break;
        case 34:
            currentLocation = 16;
            break;
        case 35:
            currentLocation = 17;
            break;
        case 36:
            currentLocation = 18;
            break;
        case 37:
            currentLocation = 19;
            break;
        case 38:
            currentLocation = 20;
            break;
        case 39:
            currentLocation = 23;
            break;
        case 40:
            currentLocation = 24;
            break;
        case 41:
            currentLocation = 25;
            break;
        case 42:
            currentLocation = 26;
            break;
        case 43:
            currentLocation = 27;
            break;
        case 44:
            currentLocation = 28;
            break;
        case 45:
            currentLocation = 29;
            break;
        case 46:
            currentLocation = 30;
            break;
        case 47:
            currentLocation = 31;
            break;
        case 48:
            currentLocation = 32;
            break;
        case 49:
            currentLocation = 33;
            break;
        case 50:
            currentLocation = 34;
            break;
        case 51:
            currentLocation = 35;
            break;
        case 52:
            currentLocation = 36;
            break;
        case 53:
            currentLocation = 37;
            break;
        case 54:
            currentLocation = 38;
            break;
        case 56:
            currentLocation = 39;
            break;
        case 57:
            currentLocation = 40;
            break;
        case 58:
            currentLocation = 41;
            break;
        case 59:
            currentLocation = 42;
            break;
        case 60:
            currentLocation = 43;
            break;
        case 61:
            currentLocation = 44;
            break;
        case 62:
            currentLocation = 45;
            break;
        case 63:
            currentLocation = 48;
            break;
        case 64:
            currentLocation = 49;
            break;
        case 65:
            currentLocation = 50;
            break;
        case 66:
            currentLocation = 51;
            break;
        case 67:
            currentLocation = 52;
            break;
        case 68:
            currentLocation = 53;
            break;
        case 69:
            currentLocation = 54;
            break;
        case 70:
            currentLocation = 55;
            break;
        case 72:
            currentLocation = 56;
            break;
        case 73:
            currentLocation = 57;
            break;
        case 74:
            currentLocation = 58;
            break;
        case 75:
            currentLocation = 59;
            break;
        case 76:
            currentLocation = 60;
            break;
        case 77:
            currentLocation = 61;
            break;
        case 78:
            currentLocation = 63;
            break;
        case 79:
            currentLocation = 64;
            break;
        case 80:
            currentLocation = 65;
            break;
        case 81:
            currentLocation = 66;
            break;
        case 82:
            currentLocation = 67;
            break;
        case 83:
            currentLocation = 68;
            break;
        case 84:
            currentLocation = 69;
            break;
        case 85:
            currentLocation = 70;
            break;
        case 86:
            currentLocation = 71;
            break;
        case 87:
            currentLocation = 72;
            break;
        case 88:
            currentLocation = 74;
            break;
        case 89:
            currentLocation = 75;
            break;
        case 90:
            currentLocation = 76;
            break;
        case 91:
            currentLocation = 77;
            break;
        case 92:
            currentLocation = 80;
            break;
        case 93:
            currentLocation = 81;
            break;
        case 94:
            currentLocation = 82;
            break;
        case 95:
            currentLocation = 83;
            break;
        case 96:
            currentLocation = 84;
            break;
        case 97:
            currentLocation = 85;
            break;
        case 98:
            currentLocation = 86;
            break;
        case 99:
            currentLocation = 87;
            break;
        case 100:
            currentLocation = 88;
            break;
        case 101:
            currentLocation = 89;
            break;
        case 102:
            currentLocation = 90;
            break;
        case 103:
            currentLocation = 91;
            break;
        case 105:
            currentLocation = 92;
            break;
        case 106:
            currentLocation = 93;
            break;
        case 107:
            currentLocation = 94;
            break;
        case 108:
            currentLocation = 95;
            break;
        case 109:
            currentLocation = 98;
            break;
        case 110:
            currentLocation = 99;
            break;
        case 111:
            currentLocation = 100;
            break;
        case 112:
            currentLocation = 101;
            break;
        case 113:
            currentLocation = 102;
            break;
        case 114:
            currentLocation = 103;
            break;
        case 115:
            currentLocation = 104;
            break;
        case 117:
            currentLocation = 105;
            break;
        case 118:
            currentLocation = 106;
            break;
        case 119:
            currentLocation = 107;
            break;
        case 120:
            currentLocation = 108;
            break;
        case 121:
            currentLocation = 109;
            break;
        case 122:
            currentLocation = 110;
            break;
        case 123:
            currentLocation = 112;
            break;
        case 124:
            currentLocation = 113;
            break;
        case 125:
            currentLocation = 114;
            break;
        case 126:
            currentLocation = 115;
            break;
        case 127:
            currentLocation = 116;
            break;

        case 130:
            currentLocation = 131;
            break;
        case 131:
            currentLocation = 132;
            break;
        case 134:
            currentLocation = 171;
            break;
        case 136:
            currentLocation = 143;
            break;
        case 137:
            currentLocation = 136;
            break;
        case 138:
            currentLocation = 137;
            break;
        case 143:
            currentLocation = 144;
            break;
        case 147:
            currentLocation = 146;
            break;
        case 148:
            currentLocation = 147;
            break;
        case 152:
            currentLocation = 153;
            break;
        case 153:
            currentLocation = 154;
            break;
        case 154:
            currentLocation = 155;
            break;
        case 155:
            currentLocation = 156;
            break;
        case 156:
            currentLocation = 157;
            break;
        case 157:
            currentLocation = 158;
            break;
        case 162:
            currentLocation = 172;
            break;
        case 163:
            currentLocation = 162;
            break;
        case 168:
            currentLocation = 167;
            break;
        case 169:
            currentLocation = 168;
            break;
        case 170:
            currentLocation = 169;
            break;
        case 171:
            currentLocation = 170;
            break;
        case 180:
            currentLocation = 181;
            break;
        case 181:
            currentLocation = 182;
            break;
    }
}

void moveEast(){

    if (currentLocation < 128) {
        if (currentLocation != 0 && currentLocation != 1 && currentLocation != 8 && currentLocation != 15 &&
            currentLocation != 38 && currentLocation != 47 && currentLocation != 55 && currentLocation != 62 &&
            currentLocation != 77 && currentLocation != 87 && currentLocation != 91 && currentLocation != 99 &&
            currentLocation != 105 && currentLocation != 108 && currentLocation != 110 && currentLocation != 116 &&
            currentLocation != 120 && currentLocation != 122 && currentLocation != 127) {
            currentLocation++;
        } else if (currentLocation == 1) {
            currentLocation = 9;
        } else if (currentLocation == 8) {
            currentLocation = 1;
        }
    }else {
        if (currentLocation >= 132 && currentLocation <= 135) {
            currentLocation++;
        } else if (currentLocation >= 138 && currentLocation <= 141) {
            currentLocation++;
        } else if (currentLocation >= 144 && currentLocation <= 145 || currentLocation == 179) {
            currentLocation++;
        }else if (currentLocation == 146){
            currentLocation = 179;
        }else if (currentLocation >= 148 && currentLocation <= 151){
            currentLocation++;
        }else if (currentLocation >= 159 && currentLocation <= 162){
            currentLocation--;
        }else if (currentLocation >= 164 && currentLocation <= 167){
            currentLocation--;
        }else if (currentLocation >= 173 && currentLocation <= 178){
            currentLocation--;
        }
    }
}

void searchArea()
{
    printText(locationList[currentLocation].seek, locationList[currentLocation].lines);

    if (strlen(locationList[currentLocation].foodPresent.name) != 0) {
        printf("There are some %s\n", locationList[currentLocation].foodPresent.name);
    }

    if (strlen(locationList[currentLocation].itemPresent.name) != 0){
        printf("There is a %s\n", locationList[currentLocation].itemPresent.name);
    }

    if (strlen(locationList[currentLocation].enemyPresent.name) != 0){
        printf("There is a %s\n", locationList[currentLocation].enemyPresent.name);
    }
}

void showStats()
{
    printf("Health: %d\nCurrent Location: %d\nStrength: %d\nHunger: %d\n", health, currentLocation, strength, hunger);

    printf("Inventory: \n");
    int i = 0;
    while (strlen(inventory[i].name) != 0){
        printf("\t%s\n", inventory[i].name);
        i++;
    }

    if (i == 0){
        printf("\t[Empty]\n");

    }

}

void randomItems()
{
//    printf("%s\n", listOfLocations[currentLocation].foodPresent.name);

    if (strlen(locationList[currentLocation].foodPresent.name) == 0 && currentLocation < 128){
        srand(time(NULL));
        int ran = rand() % 100;
        if (ran < 60){

            if (ran == 42){
                locationList[currentLocation].foodPresent = foodList[6];
            }else{
                ran /= 10;

                locationList[currentLocation].foodPresent = foodList[ran];
            }

//            printf("There are some %s\n", locationList[currentLocation].foodPresent.name);
        }
    }

    if (strlen(locationList[currentLocation].enemyPresent.name) == 0 && currentLocation < 128){
        srand(time(NULL));
        int ran1 = rand() % 100;

        if (ran1 < 20){
            locationList[currentLocation].enemyPresent = enemyList[0];
        }else if (ran1 < 40) {
            locationList[currentLocation].enemyPresent = enemyList[4];
        }
    }
}

void pickUp(char input[])
{
    if (!strncasecmp(input, locationList[currentLocation].foodPresent.name, 4)) {
        int i = 0;
        while (strlen(inventory[i].name) != 0) {
            i++;
        }

        inventory[i] = locationList[currentLocation].foodPresent;

        locationList[currentLocation].foodPresent = foodList[19];

        printf("The %s are now in your inventory\n", inventory[i].name);
    }else if (!strncasecmp(input, locationList[currentLocation].itemPresent.name, 4)){
        strength += locationList[currentLocation].itemPresent.strengthValue;

        health += locationList[currentLocation].itemPresent.healthValue;

        if (locationList[currentLocation].itemPresent.seek != 0){
            printText(locationList[currentLocation].itemPresent.seek, locationList[currentLocation].itemPresent.lines);
        }else {
            printf("You picked up a %s\n", locationList[currentLocation].itemPresent.name);
        }

        locationList[currentLocation].itemPresent = itemList[19];
    }else{
        printf("That isn't here\n");
    }
}

void randomHunger()
{
    if (hunger > 0) {
        srand(time(NULL));

        int ran = rand() % 100;

        if (ran >= 50) {
            hunger--;
            printf("Your hunger has gone down");
        }
        if (ran > 85) {
            hunger--;
            printf(" by two\n");
        }

        if(ran >= 50 && ran <= 85){
            printf("\n");
        }

        if (hunger < 0){
            hunger = 0;
        }
    }else if (hunger == 0){
        health -= 25;
    }else{
        hunger = 0;
        health -= 25;
    }
}

void eat(char input[])
{
//    printf("%s\n", input);

    int i = 0;
    int j = 0;

    while(strlen(inventory[j].name) != 0){
        j++;
//        printf("Loop");
    }

    while (i < j){
        if (!strncasecmp(input, inventory[i].name, 4)) {
            break;
        }else {
//            printf("loop");
            i++;
        }
    }

//    printf("i = %d\nj = %d\n", i, j);

    if (i == j){
        printf("That isn't in the inventory\n");
    }else{
        if (hunger + inventory[i].value <= 10){
            hunger += inventory[i].value;
        }else{
            for (int k = 0; k < inventory[i].value; k++){
                if (hunger < 10){
                    hunger++;
                }else{
                    if (health < 100){
                        health++;
                    }
                }
            }
        }
        printf("The %s have been eaten\n", inventory[i].name);

        for (; i < j; i++){
            inventory[i] = inventory[i + 1];
        }
    }
}

void attack(char input[])
{
    if (!strncasecmp(input, locationList[currentLocation].enemyPresent.name, 5)){
        locationList[currentLocation].enemyPresent.health -= strength;
        printf("The %s took damage\n", locationList[currentLocation].enemyPresent.name);
        if (locationList[currentLocation].enemyPresent.health <= 0){
            printf("You killed the %s\n", locationList[currentLocation].enemyPresent.name);
            locationList[currentLocation].enemyPresent = enemyList[0];
        }
    }else if (strlen(locationList[currentLocation].enemyPresent.name) == 0){
        printf("There is no enemy here\n");
    }else {
        printf("That enemy is not here\n");
    }
}

void damage()
{
    srand(time(NULL));

    int ran = rand() % 100;

    if (ran < 75){
        health -= locationList[currentLocation].enemyPresent.strength;
        printf("The %s attacked you\n", locationList[currentLocation].enemyPresent.name);

        if(health < 50){
            printf("Your health has dropped to %d\n", health);
        }
    }
}

void saveAndExit()
{
    printf("Enter the name of the save file: ");
    char filename[30] = {'\0'};
    scanf(" %s", filename);

    FILE *fileptr = fopen(filename, "w");

    if (fileptr == NULL){
        fprintf(stderr, "Error: %s\n", strerror(errno));
    }

    fprintf(fileptr, "health: %d\n", health);
    fprintf(fileptr, "strength: %d\n", strength);
    fprintf(fileptr, "hunger: %d\n", hunger);
    fprintf(fileptr, "location: %d\n",currentLocation);

    fprintf(fileptr, "Inventory:\n");
    for (int i = 0; strlen(inventory[i].name) != 0; i++){
        fprintf(fileptr, "%s\n",inventory[i].name);
    }

    printf("File has been saved\nExiting\n");
    fclose(fileptr);
    fclose(gameFile);
    exit(-1);
}

void readSaveFile(char filename[])
{
    FILE *fileptr = fopen(filename, "r");

    if (fileptr == NULL){
        fprintf(stderr, "Error: %s\n", strerror(errno));
        exit(-1);
    }

    fseek(fileptr, 8, SEEK_SET);
    fscanf(fileptr, " %d", &health);

    fseek(fileptr, 21, SEEK_SET);
    fscanf(fileptr, " %d", &strength);

    fseek(fileptr, 32, SEEK_SET);
    fscanf(fileptr, " %d", &hunger);

    fseek(fileptr, 45, SEEK_SET);
    fscanf(fileptr, " %d", &currentLocation);

    fseek(fileptr, 58, SEEK_SET);
    char foods[10][10] = {'\0'};
    int i = 0;
    while (fscanf(fileptr, " %s", foods[i]) != EOF){
        i++;
    }

    for (int j = 0; j < i; j++){
        for (int o = 0; o < 7; o++){
            if (!strncasecmp(foods[j], foodList[o].name, 4)){
                inventory[j] = foodList[o];
            }
        }
    }

    fclose(fileptr);
}
