#ifndef EVENT_HANDLER_HH
#define EVENT_HANDLER_HH

#include "key_state.hh"

class EventHandler {
public:
    EventHandler() { }
    virtual Event pollEvent() = 0;
    virtual bool hasEvent() = 0;
    
protected:
    Event _event;
};

#endif // EVENT_HANDLER_HH