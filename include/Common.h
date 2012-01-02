#ifndef COMMON_H
#define COMMON_H

enum Status {DEFAULT=0, X=1, O=5};

class Position {
public:
    Position();
    Position(int x, int y);

    void setPosition(int x, int y);
    int getX();
    int getY();

private:
    int x;
    int y;

    void setX(int x);
    void setY(int y);
};

#endif // COMMON_H
