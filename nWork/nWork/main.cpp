#include <Windows.h>
#include <SFML\Graphics.hpp>

int CALLBACK WinMain(_In_ HINSTANCE hInstance,_In_ HINSTANCE hPrevInstance,_In_ LPSTR     lpCmdLine,_In_ int       nCmdShow	)
{
	
	sf::RenderWindow window(sf::VideoMode(1280, 720), "nWork");
	sf::CircleShape shape(100.f);
	shape.setFillColor(sf::Color::Green);

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear();
		window.draw(shape);
		window.display();
	}
	
	return 0;

}