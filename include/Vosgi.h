#ifndef VOSGI_H
#define VOSGI_H

#include "raylib.h"

class Vosgi {
public:
    Vosgi(int screenWidth, int screenHeight);
    ~Vosgi();

    void run();

    // User-defined callbacks
    virtual void onInit() {}
    virtual void onUpdate() {}
    virtual void onDraw() {}
    virtual void onClose() {}

private:
    int screenWidth;
    int screenHeight;
};

#endif // VOSGI_H
