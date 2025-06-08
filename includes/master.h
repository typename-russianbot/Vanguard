////////////////////////////////////////////////////////////////////////////////////////////////////
//? @author: Matthew J. Hong
//? @brief: Vanguard is a game engine using SFML for drawing/rendering our 2D objects
////////////////////////////////////////////////////////////////////////////////////////////////////

//~ @dependencies:
#pragma once
#include <iostream>
#include <string.h>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <SFML/Window/Keyboard.hpp>
#include <SFML/OpenGL.hpp>
using namespace std;
using namespace sf;

//& @structs:

//& @macros:
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//~ Display
#define DISPLAY \
    VideoMode { VideoMode::getDesktopMode().width, VideoMode::getDesktopMode().height } //? @var: DISPLAY
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//~ Fonts
#define SixtyFourConvergence "resources/fonts/SixtyfourConvergence-Regular.ttf" //? @var: SixtyFourConvergence
#define RubikWetPaint "resources/fonts/RubikWetPaint-Regular.ttf"               //? @var: RubikWetPaint
#define Kablammo "resources/fonts/Kablammo-Regular.ttf"                         //? @var: Kablammo
#define BungeeSpice "resources/fonts/BungeeSpice-Regular.ttf"                   //? @var: BungeeSpice
#define Roboto "resources/fonts/Roboto-Regular.ttf"                             //? @var: Roboto
#define Kadawa "resources/fonts/Kadwa-Regular.ttf"                              //? @var: Kadawa
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//~ Colors
#define Transparent Color::Transparent //? @var: Transparent
#define White Color::White             //? @var: White
#define Black Color::Black             //? @var: Black
#define Green Color::Green             //? @var: Green
#define Blue Color::Blue               //? @var: Blue
#define Red Color::Red                 //? @var: Red
#define Yellow Color{255, 255, 0}      //? @var: Yellow
#define Gray Color{128, 128, 128}      //? @var: Gray
#define DarkGray Color{64, 64, 64}     //? @var: DarkGray
#define Brown Color{165, 42, 42}       //? @var: Brown
#define Tan Color{210, 180, 140}       //? @var: Tan
#define Indigo Color{75, 0, 130}       //? @var: Indigo
#define Navy Color{0, 0, 128}          //? @var: Navy
#define DarkRed {139, 0, 0}            //? @var: DarkRed

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////