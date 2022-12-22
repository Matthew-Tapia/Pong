//
// Created by Matthew Tapia on 10/10/22.
//

#include "Paddle.h"

Paddle::Paddle(const sf::Vector2f &size, const sf::Vector2f &position) : sf::RectangleShape(){
    setSize(size);
    setPosition(position);
}

Paddle::Paddle(const sf::Vector2f &size, const sf::Vector2f &position, sf::Color color) : Paddle(size, position){
    setFillColor(color);
}

void Paddle::shiftUp(const sf::RenderWindow &window){
    if(sf::Keyboard::isKeyPressed(up) && getPosition().y > 0){
        move({0, -0.1});
    }

}
void Paddle::shiftDown(const sf::RenderWindow &window){
    if(sf::Keyboard::isKeyPressed(down) && getPosition().y < window.getSize().y - getSize().y){
        move({0, 0.1});
    }
}

void Paddle::setUp(sf::Keyboard::Key up) {
    Paddle::up = up;
}

void Paddle::setDown(sf::Keyboard::Key down) {
    Paddle::down = down;
}


