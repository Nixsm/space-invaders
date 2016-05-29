#include <iostream> 
#include "point2D.hh"
#include "sdl_window.hh"
#include <memory>

int main() {
	std::cout << "Space Invaders" << std::endl;

    auto p = Math::Point2D(10, 10);
    std::cout << p << std::endl;
    
    std::shared_ptr<Window> win = std::make_shared<SDLWindow>(Math::Point2D(400, 400), "Space Invaders");
    while (true) {
        continue;
    }

	return EXIT_SUCCESS;
}
