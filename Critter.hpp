#ifndef CRITTER_HPP
#define CRITTER_HPP

class Critter
{
    protected:
        int xLocation;      //Current x location on the board
        int yLocation;      //Current y location on the board
        char gameBoardCharacter;
    public:
        virtual void Move() = 0;
        char getCritterType();
};
#endif
