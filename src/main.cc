#include <iostream> 
#include "point2D.hh"
#include "sdl/sdl_context.hh"
#include "sdl/sdl_image_loader.hh"

int main() {
	std::cout << "Space Invaders" << std::endl;
    
    std::shared_ptr<Context> context = std::make_shared<SDLContext>();

    std::shared_ptr<Window> win = context->createWindow(Math::Point2D(400, 400), "Space Invaders");
    std::shared_ptr<EventHandler> eh = context->createEventHandler();
    std::shared_ptr<ImageLoader> imLoader = std::make_shared<SDLImageLoader>(win);
    std::shared_ptr<Image> spaceship = imLoader->loadImage("spaceship.png");
    
    bool running = true;
    while (running) {
        if (eh->hasEvent()) {
            auto event = eh->pollEvent();
            
            if (event.first == KS_QUIT) {
                running = false;
            }
        }
        
        spaceship->draw(Math::Point2D(110,0));
        win->update();
    }

	return EXIT_SUCCESS;
}
