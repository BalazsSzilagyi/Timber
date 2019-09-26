//Include important C++ libraries.
//The double quation is for including files within Visual Studio
#include "pch.h"
#include <iostream>

//Tells the pre-processor to include the Graphics.hpp
#include <SFML/Graphics.hpp>

// Mak code easier to type with "using namespace"
using namespace sf;

int main()
{
	// Create a video mode object
	VideoMode vm(1920, 1080);

	//Create and open a window from the game
	RenderWindow window(vm, "Timber!!!", Style::Fullscreen);

	//Create a texture to hold a graphic on the GPU
	Texture textureBackground;

	//Load a graphic into the texture
	textureBackground.loadFromFile("graphics/background.png");

	//Create a sprite
	Sprite spriteBackground;
	
	//Attach the texture to the sprite
	spriteBackground.setTexture(textureBackground);

	//Set the spriteBackground to cover the screen
	spriteBackground.setPosition(0, 0);

	while (window.isOpen())
	{
		/*
		*********************************************************
		Handle the players input
		*********************************************************
		*/
		if (Keyboard::isKeyPressed(Keyboard::Escape))
		{
			window.close();
		}
		/*
		*********************************************************
		Update the scene
		*********************************************************
		*/

		/*
		*********************************************************
		Draw the scene
		*********************************************************
		*/

		//Clear everything from the last frame
		window.clear();

		//Draw our game scene here
		window.draw(spriteBackground);

		//Show everything we just drew
		window.display();
	}
	return 0;
}
