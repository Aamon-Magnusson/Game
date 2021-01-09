#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <time.h>

FILE *gameFile = NULL;
int currentLocation = 0;
int health = 100;
int strength = 10;
int hunger = 10; // Goes down, at 0 start losing 25 health per turn

typedef struct foods{
    char name[20];
    int value;
}food;

typedef struct items{
    char name[20];
    int strengthValue;
    int healthValue;
    int seek;
    int lines;
}item;

typedef struct enemies{
    int health;
    int strength;
    char name[20];
}enemy;

typedef struct locations{
    int seek;
    int lines;
    int damage;
    food foodPresent;
    item itemPresent;
    enemy enemyPresent;
}location;

location locationList[200];
food foodList[20];
food inventory[20];
item itemList[20];
enemy enemyList[20];

void help();
void printText(int seek, int numberOfLines);

void createLocations();
void createFood();
void createItems();
void createEnemies();

void gameLoop();
void parseCommand();
void move(char input[]);
void searchArea();
void showStats();

void moveNorth();
void moveWest();
void moveSouth();
void moveEast();

void gameWon(); // Need to add to this
void gameOver();
void randomItems();
void pickUp(char input[]);
void randomHunger();
void eat(char input[]);
void attack(char input[]);
void damage();

void saveAndExit();
void readSaveFile(char filename[]);
