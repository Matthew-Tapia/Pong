//
// Created by Matthew Tapia on 10/10/22.
//

#ifndef HELLOSFML_BALL_H
#define HELLOSFML_BALL_H

#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>

class Ball : public sf::CircleShape{
public:
    void bounce(const sf::RenderWindow &window, const sf::FloatRect leftPaddle, const sf::FloatRect rightPaddle, int &leftScore, int &rightScore);
    void setVelocity(sf::Vector2f velocity);
    void setInitialVelocity(const sf::Vector2f &initialVelocity);

private:
    sf::Vector2f velocity;
    sf::Vector2f initialVelocity;
};


#endif //HELLOSFML_BALL_H
