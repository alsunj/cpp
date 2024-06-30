// Timber.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <SFML/Graphics.hpp>
#include <iostream>

int main()
{
	sf::VideoMode vm(1920, 1080);

	sf::RenderWindow window(vm, "Timber!!!", sf::Style::Fullscreen);

	sf::Texture textureBackground;

	textureBackground.loadFromFile("graphics/background.png");

	sf::Sprite spriteBackground;

	spriteBackground.setTexture(textureBackground);
	
	spriteBackground.setPosition(0, 0);

	while (window.isOpen())
	{
		window.clear();
		window.draw(spriteBackground);
		window.display();
	}
	return 0;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
