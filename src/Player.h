#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <SFML/Graphics.HPP>

using namespace std;

class Player{
    private:
        string name;
        int score;
        int xPos;
        int yPos;
        sf::Image image;
        sf::Sprite sprite;

    public:
        Player(string name_, sf::Image image_);
        string getName();
        int getScore();
        void resetScore();
        void incrementScore(int value);
        int getxPos();
        int getyPos();
        void alterX(int x);
        void alterY(int y);
        sf::Image getImage();
        void setImage(sf::Image image_);
        sf::Sprite getSprite();
        void setSprite(sf::Sprite sprite);
        void handle_input(sf::Event input);
        ~Player();
};

#endif // PLAYER_H