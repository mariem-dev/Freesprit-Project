#ifndef ENIGME_H_INCLUDED
#define ENIGME_H_INCLUDED
#include <stdio.h>
#include "SDL/SDL_image.h"
#include "SDL/SDL.h"
#include "SDL/SDL_mixer.h"
#include <stdlib.h>
#include "SDL/SDL_ttf.h"

typedef struct{
SDL_Surface *back;
SDL_Surface *butgame;
SDL_Surface *butsettings;
SDL_Surface *butshop;
SDL_Surface *butgame2;
SDL_Surface *butsettings2;
SDL_Surface *butshop2;
SDL_Surface *butcredits2;
SDL_Surface *butcredits;
SDL_Surface *butsound;
SDL_Surface *butmusic;
SDL_Surface *butsound2;
SDL_Surface *butmusic2;
SDL_Surface *buthelp;
SDL_Surface *butquit;
SDL_Surface *butquit2;
}menuComponents;

typedef struct{
SDL_Rect posback;
SDL_Rect posbutgame;
SDL_Rect posbutsettings;
SDL_Rect posbutshop;
SDL_Rect posbutgame2;
SDL_Rect posbutsettings2;
SDL_Rect posbutshop2;
SDL_Rect posbutcredits2;
SDL_Rect posbutcredits;
SDL_Rect posbutsound;
SDL_Rect posbutmusic;
SDL_Rect posbutsound2;
SDL_Rect posbutmusic2;
SDL_Rect posbuthelp;
SDL_Rect posbutquit;
SDL_Rect posbutquit2;
}menuPosComponents;

typedef struct {
   SDL_Surface *map;
   SDL_Rect posMap;
}backgroundMaps;

void initEnigme();
void showEnigme(enigme e);

#endif 