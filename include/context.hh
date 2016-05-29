#ifndef CONTEXT_HH
#define CONTEXT_HH

#include "window.hh"
#include "event_handler.hh"

class Context {
public:
    Context() { }
    virtual std::shared_ptr<Window> createWindow(Math::Point2D size, std::string winName) = 0;
    virtual std::shared_ptr<EventHandler> createEventHandler() = 0;
};

#endif //CONTEXT_HH