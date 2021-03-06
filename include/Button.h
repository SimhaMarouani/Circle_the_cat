#pragma once
#include "resourcesManager.h"
#include <SFML/Graphics.hpp>
#include <string>
#include "Macros.h"

class Button
{
public:
	Button();
	Button(sf::Vector2f buttonPos, sf::Vector2f textPos, sf::Vector2f buttonSize, std::string buttonName, int textSize);

	void printButton(sf::RenderWindow& window);
	bool contain(sf::Vector2f location);
	sf::Vector2f getSize() const;
	
private:
	void setButtonSize(sf::Vector2f buttonSize);

	sf::Vector2f m_buttonSize;
	sf::Font* m_font;
	sf::RectangleShape m_button;
	sf::Text m_buttonText;
};


