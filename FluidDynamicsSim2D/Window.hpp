#ifndef WINDOW_H //same thing as #pragma once
#define WINDOW_H

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <stdio.h>
#include <GL/glew.h>
#include <iostream>
#include <vector>
#include "Renderer.hpp"
#include "Program.hpp"
#include "CFDynamics.hpp"

//Extern/global vars
int winSizeX = 500;     //Tile size will automatically adjust according to this
int winSizeY = 500;     //Tile size will automatically adjust according to this
int tileRows = 25;
int tileCols = 25;
int cellBuffer = 15;    //note that this is not px

class Main {
    public:
        Main();
        void handleEvents();
        void initialize();
        SDL_Renderer* getRenderer();

    private:
        SDL_Window *window;
        SDL_Renderer *renderer;
        Renderer dataRenderer;  //Object is cosntructed with default constructor when defined
        bool windowRunning = true;
        void cleanup();
        int currentFPS = 0;
};

#endif