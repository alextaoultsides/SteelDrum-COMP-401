
//
// Disclamer:
// ----------
//
// This code will work only if you selected window, graphics and audio.
//
// Note that the "Run Script" build phase will copy the required frameworks
// or dylibs to your application bundle so you can execute it on any OS X
// computer.
//
// Your resource files (images, sounds, fonts, ...) are also copied to your
// application bundle. To get the path to these resource, use the helper
// method resourcePath() from ResourcePath.hpp
//

#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>

// Here is a small helper for you ! Have a look.
#include "ResourcePath.hpp"
#include <iostream>
using namespace std;

int main(int, char const**)
{
    // Create the main window
    sf::RenderWindow window(sf::VideoMode(800, 800), "Steel Drum Game");
    window.setPosition(sf::Vector2i(0, 0));

    // Set the Icon
    sf::Image icon;
    if (!icon.loadFromFile(resourcePath() + "icon.png")) {
        return EXIT_FAILURE;
    }
    window.setIcon(icon.getSize().x, icon.getSize().y, icon.getPixelsPtr());

    // Load a sprite to display
    sf::Texture texture;
    if (!texture.loadFromFile(resourcePath() + "lead_diagram.jpg")) {
        return EXIT_FAILURE;
    }
    sf::Sprite sprite(texture);

    // Create a graphical text to display
    sf::Font font;
    if (!font.loadFromFile(resourcePath() + "sansation.ttf")) {
        return EXIT_FAILURE;
    }
    
    sf::SoundBuffer buffer;
    if (!buffer.loadFromFile(resourcePath()+"C1.ogg"))
        return -1;
    sf::SoundBuffer buffer2;
    if (!buffer2.loadFromFile(resourcePath()+"G2.ogg"))
        return -1;
    sf::SoundBuffer buffer3;
    if (!buffer3.loadFromFile(resourcePath()+"D2.ogg"))
        return -1;
    
    sf::Sound c1;
    c1.setBuffer(buffer);
    
    sf::Sound g1;
    g1.setBuffer(buffer2);
    
    sf::Sound d2;
    d2.setBuffer(buffer3);
    
    sf::Text text("Learn the Steel Drums!", font, 50);
    text.setColor(sf::Color::Red);

    // Load a music to play
    sf::Music music;
    if (!music.openFromFile(resourcePath() + "Mr. Fete.ogg")) {
        return EXIT_FAILURE;
    }
    

    // Play the music
    music.play();

    // Start the game loop
    while (window.isOpen())
    {
        // Process events
        sf::Event event;
        while (window.pollEvent(event))
        {
            // Close window : exit
            if (event.type == sf::Event::Closed) {
                window.close();
            }
            
            // Escape pressed : exit
            if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape) {
                window.close();
            }
            if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::V){
                c1.play();
            }
            if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::B){
                c1.play();
            }
            if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::N){
                g1.play();
            }
            if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::M){
                d2.play();
            }
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) {
                music.pause();
            }
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)){
                music.play();
            }
        }

        // Clear screen
        window.clear();

        // Draw the sprite
        window.draw(sprite);

        // Draw the string
        window.draw(text);

        // Update the window
        window.display();
    }

    return EXIT_SUCCESS;
}
