#ifndef KEY_STATE_HH
#define KEY_STATE_HH

#include "config.hh"

enum Key {
    KS_SPACE,
    KS_UP,
    KS_DOWN,
    KS_LEFT,
    KS_RIGHT,
    KS_QUIT
};

enum KeyState {
    KS_KEY_UP,
    KS_KEY_DOWN,
    KS_GUI_BUTTON
};

typedef std::pair<Key, KeyState> Event;

#endif //KEY_STATE_HH