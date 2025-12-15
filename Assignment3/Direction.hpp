/* Ekaterina Budnikova  st107207@student.spbu.ru
Hello_world task */

#ifndef DIRECTION_H
#define DIRECTION_H

class Direction {
    Direction(int valueX, int valueY);
    ~Direction();

    int getX();
    int getY();

    void setName(int newX);
    void setType(int newY);

private:
    int _valueX;
    int _valueY;
    
};

#endif