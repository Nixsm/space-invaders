#include <iostream> 
#include "point2D.hh"
#include "sdl_context.hh"

int main() {
	std::cout << "Space Invaders" << std::endl;
    
    std::shared_ptr<Context> context = std::make_shared<SDLContext>();

    std::shared_ptr<Window> win = context->createWindow(Math::Point2D(400, 400), "Space Invaders");
    std::shared_ptr<EventHandler> eh = context->createEventHandler();
    
    bool running = true;
    while (running) {
        if (eh->hasEvent()) {
            auto event = eh->pollEvent();
            
            if (event.first == KS_QUIT) {
                running = false;
            }
        }
        
        continue;
    }

	return EXIT_SUCCESS;
}
