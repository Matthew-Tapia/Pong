//
// Created by Matthew Tapia on 10/10/22.
//

#include "Ball.h"

void Ball::bounce(const sf::RenderWindow &window, const sf::FloatRect leftPaddle, const sf::FloatRect rightPaddle, int &leftScore, int &rightScore){
    //Bounce off left paddle
    if(getPosition().x < leftPaddle.left + leftPaddle.width && getPosition().y > leftPaddle.top - (getRadius() / 2)  &&
       getPosition().y < leftPaddle.top + leftPaddle.height + (getRadius() / 2)){
        velocity.x *= -1;
    }

    //Bounce off right paddle
    if(getPosition().x > rightPaddle.left - (getRadius()*2)  && getPosition().y > rightPaddle.top - (getRadius() / 2) &&
       getPosition().y < rightPaddle.top + leftPaddle.height + (getRadius() / 2)){
        velocity.x *= -1;
    }

    //Bounce off top and bottom
    if(getPosition().y > window.getSize().y - (getRadius()*2)  || getPosition().y < 0){
        velocity.y *= -1;
    }

    //Right scored
    if(getPosition().x < leftPaddle.left - getRadius()){
        velocity.x = initialVelocity.x;
        velocity.y = initialVelocity.y;
        setPosition(window.getSize().x/2, window.getSize().y/2);
        rightScore++;

    }

    //Left scored
    if(getPosition().x > rightPaddle.left + rightPaddle.width + getRadius()){
        velocity.x = initialVelocity.x;
        velocity.y = initialVelocity.y;
        setPosition(window.getSize().x/2, window.getSize().y/2);
        leftScore++;
    }

    move(velocity.x, velocity.y);
}

void Ball::setVelocity(sf::Vector2f velocity){
    this->velocity = velocity;
}

void Ball::setInitialVelocity(const sf::Vector2f &initialVelocity) {
    Ball::initialVelocity = initialVelocity;
}

