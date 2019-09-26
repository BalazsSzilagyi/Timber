//Include important C++ libraries.

#include "pch.h"
#include <iostream>
#include <SFML/Graphics.hpp>

// Mak code easier to type with "using namespace"
using namespace sf;

int main()
{
	// Create a video mode object
	VideoMode vm(1920, 1080);

	//Create and open a window from the game
	RenderWindow window(vm, "Timber!!!", Style::Fullscreen);
	return 0;
}
