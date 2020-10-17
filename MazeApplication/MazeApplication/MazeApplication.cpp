#include <SFML/Graphics.hpp>


class MazeGui
{
private:
	
	
	
	
	

public:
	// needs to be passed a 2d array of booleans 
	MazeGui()
	{

		int height = 20;
		int width = 20;
		bool canEnter = true;
		
		sf::RectangleShape maze[400];
		sf::RenderWindow window(sf::VideoMode(1000, 1000), "Maze Solver");
		sf::Event evnt;
		
		while (window.isOpen())
		{
			window.clear();
			for (int i = 0; i < height;i++)
			{
				for (int j = 0; j < width; j++)
				{

					maze[height * i + j] = sf::RectangleShape(sf::Vector2f(10, 10));
					maze[height * i + j].setPosition(sf::Vector2f((20 * i), (20 * j)));
					if (canEnter) 
					{
						maze[height * i + j].setFillColor(sf::Color::Red);
					}
					else {
						maze[height * i + j].setFillColor(sf::Color::Blue);
					}
					
					window.draw(maze[height * i + j]);


				}
			}
			window.display();
			sf::Event event;
			while (window.pollEvent(event))
			{
				if (event.type == sf::Event::Closed)
					window.close();
			}

		}
		
	}
};


int main()
{

	MazeGui test;
	

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
