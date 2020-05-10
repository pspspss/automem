#ifndef UI_H
#define UI_H 

#include <LiquidCrystal_I2C.h>
#include <LinkedList.h>

#include "ui/menu.h"
#include "ui/result.h"
#include "ui/menu.h"
#include "ui/ui.h"

#include "parser/parser.h"

#include "arch/e24c.h"

class Ui
{
    private:
        LiquidCrystal_I2C *lcd;

    public:
        LinkedList<View*> *views;
        Ui();
        void render();
};

#endif