#include "menu.h"

Menu::Menu(char *title, Menu *submenus) {
    this->title = title;
    this->submenus = submenus;

    pinMode(UP, INPUT);
    pinMode(DOWN, INPUT);
    pinMode(ENTER, INPUT);
    pinMode(BACK, INPUT);

    bouncer_up = Bounce();
    bouncer_up.attach(UP);
    bouncer_up.interval(20);

    bouncer_down = Bounce();
    bouncer_down.attach(DOWN);
    bouncer_down.interval(20);

    bouncer_enter = Bounce();
    bouncer_enter.attach(ENTER);
    bouncer_enter.interval(20);

    bouncer_back = Bounce();
    bouncer_back.attach(BACK);
    bouncer_back.interval(20);
}


void render(LiquidCrystal_I2C *lcd) {

}

void up() {

}

void down() {

}

void enter() {

}

void back() {

}