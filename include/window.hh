#ifndef WINDOW_HH
#define WINDOW_HH

#include "config.hh"

class Window {
public:
    Window(Math::Point2D size, std::string name)
    :_size(size), _winName(name)
    { }
    virtual ~Window() { }
    virtual void update() = 0;
protected:
    Math::Point2D _size;
    std::string _winName;
};

#endif //WINDOW_HH