#ifndef __MENU_H__
#define __MENU_H__

#include "GameState.h"

#include "../Panel/Panel.h"

class Menu : public GameState
{
private:
    Panel *panel;

public:
    void dispose(void);
    void update(Mouse mouse);
    void render(void);

    Menu(float x, float y, float width, float height);
    ~Menu();
};

#endif