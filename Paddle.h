//
// Created by Matthew Tapia on 10/10/22.
//

#ifndef HELLOSFML_PADDLE_H
#define HELLOSFML_PADDLE_H

#include <SFML/Graphics.hpp>
#include <iostream>

class Paddle : public sf::RectangleShape{
public:
    Paddle(const sf::Vector2f &size, const sf::Vector2f &position);
    Paddle(const sf::Vector2f &size, const sf::Vector2f &position, sf::Color color);

    void shiftUp(const sf::RenderWindow &window);
    void shiftDown(const sf::RenderWindow &window);

    void setUp(sf::Keyboard::Key up);

    void setDown(sf::Keyboard::Key down);


private:
    sf::Vector2f velocity;
    sf::Keyboard::Key up, down;
};


#endif //HELLOSFML_PADDLE_H
