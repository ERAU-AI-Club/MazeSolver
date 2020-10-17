#pragma once
#include <SFML/Graphics.hpp>
#include <iostream> 
using namespace std;

class MazeGui
{
private:

	sf::RenderWindow window(sf::VideoMode(800, 600), "MazeGui");

	sf::Event event;


public:
	

	

	void startGui() 
	{

		while (window.isOpen()) {

			while (window.pollEvent(event)) {

				if (event.type == sf::Event::Closed) {

					window.close();
				}
			}
		}
	}

	MazeGui() 
	{

	}
};

