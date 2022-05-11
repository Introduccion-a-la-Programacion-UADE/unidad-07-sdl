// main.cpp

#include <iostream>
#include <SDL.h>
#include "Utils.h"

using namespace std;


int main(int argc, char* args[])
{
    SDL_Init(SDL_INIT_EVERYTHING);

    initializeRandom();

    int a = getRandom(10);

    cout << a << "\n";

    system("pause");

    return 0;
}
