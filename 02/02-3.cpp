#include <iostream>

using namespace std;

typedef struct{
    int xpos;
    int ypos;
} Pos;

Pos & PosAdder(const Pos & p1, const Pos & p2){
    Pos * ret = new Pos;

    ret->xpos = p1.xpos + p2.xpos;
    ret->ypos = p1.ypos + p2.ypos;

    return *ret;
}

int main(void){
    Pos* p1 = new Pos{1, 2};
    Pos* p2 = new Pos{3, 4};

    Pos & rsum = PosAdder(*p1, *p2); //

    cout << rsum.xpos << rsum.ypos << endl;

    delete p1;
    delete p2;
}