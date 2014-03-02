//sfml template message
#ifdef __APPLE__

#include "ResourcePath.hpp"


#endif


#include <string>
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>


#include <iostream>
using namespace std;

int main(int, char const**){
    
    //set resource locations
    string soundsLoc = "./resources/sounds/";
    string imagesLoc = "./resources/images/";

    // Create the main window
    sf::RenderWindow window(sf::VideoMode(800, 800), "Steel Drum Game");
    window.setPosition(sf::Vector2i(0, 0));
    
    // Load a sprite to display
    sf::Texture texture;
    if (!texture.loadFromFile(imagesLoc + "lead_diagram.jpg")) {
        return EXIT_FAILURE;
    }
    sf::Sprite sprite(texture);
    
    // Create a graphical text to display
    sf::Font font;
    if (!font.loadFromFile("sansation.ttf")) {
        return EXIT_FAILURE;
    }


    //Sounds
    sf::SoundBuffer buffer1;
    if (!buffer1.loadFromFile(soundsLoc + "C1.ogg"))
        return -1;
    sf::SoundBuffer buffer2;
    if (!buffer2.loadFromFile(soundsLoc+ "G2.ogg"))
        return -1;
    sf::SoundBuffer buffer3;
    if (!buffer3.loadFromFile(soundsLoc+ "D2.ogg"))
        return -1;
    sf::SoundBuffer buffer4;
    if (!buffer4.loadFromFile(soundsLoc+ "A1.ogg"))
        return -1;
    sf::SoundBuffer buffer5;
    if (!buffer5.loadFromFile(soundsLoc+ "E2.ogg"))
        return -1;
    sf::SoundBuffer buffer6;
    if (!buffer6.loadFromFile(soundsLoc+ "B1.ogg"))
        return -1;
    sf::SoundBuffer buffer7;
    if (!buffer7.loadFromFile(soundsLoc+ "F#2.ogg"))
        return -1;
    sf::SoundBuffer buffer8;
    if (!buffer8.loadFromFile(soundsLoc+ "C#2.ogg"))
        return -1;
    sf::SoundBuffer buffer9;
    if (!buffer9.loadFromFile(soundsLoc+ "G#2.ogg"))
        return -1;
    sf::SoundBuffer buffer10;
    if (!buffer10.loadFromFile(soundsLoc+ "Eb2.ogg"))
        return -1;
    sf::SoundBuffer buffer11;
    if (!buffer11.loadFromFile(soundsLoc+ "Bb1.ogg"))
        return -1;
    sf::SoundBuffer buffer12;
    if (!buffer12.loadFromFile(soundsLoc+ "F2.ogg"))
        return -1;
    sf::SoundBuffer buffer13;
    if (!buffer13.loadFromFile(soundsLoc+ "C3.ogg"))
        return -1;
    sf::SoundBuffer buffer14;
    if (!buffer14.loadFromFile(soundsLoc+ "G3.ogg"))
        return -1;
    sf::SoundBuffer buffer15;
    if (!buffer15.loadFromFile(soundsLoc+ "D3.ogg"))
        return -1;
    sf::SoundBuffer buffer16;
    if (!buffer16.loadFromFile(soundsLoc+ "A2.ogg"))
        return -1;
    sf::SoundBuffer buffer17;
    if (!buffer17.loadFromFile(soundsLoc+ "E3.ogg"))
        return -1;
    sf::SoundBuffer buffer18;
    if (!buffer18.loadFromFile(soundsLoc+ "B2.ogg"))
        return -1;
    sf::SoundBuffer buffer19;
    if (!buffer19.loadFromFile(soundsLoc+ "F#3.ogg"))
        return -1;
    sf::SoundBuffer buffer20;
    if (!buffer20.loadFromFile(soundsLoc+ "C#3.ogg"))
        return -1;
    sf::SoundBuffer buffer21;
    if (!buffer21.loadFromFile(soundsLoc+ "G#3.ogg"))
        return -1;
    sf::SoundBuffer buffer22;
    if (!buffer22.loadFromFile(soundsLoc+ "Eb3.ogg"))
        return -1;
    sf::SoundBuffer buffer23;
    if (!buffer23.loadFromFile(soundsLoc+ "Bb2.ogg"))
        return -1;
    sf::SoundBuffer buffer24;
    if (!buffer24.loadFromFile(soundsLoc+ "F3.ogg"))
        return -1;
    sf::SoundBuffer buffer25;
    if (!buffer25.loadFromFile(soundsLoc+ "C4.ogg"))
        return -1;
    
    sf::SoundBuffer buffer26;
    if (!buffer26.loadFromFile(soundsLoc+ "D4.ogg"))
        return -1;
    
    sf::SoundBuffer buffer27;
    if (!buffer27.loadFromFile(soundsLoc+ "E4.ogg"))
        return -1;
    sf::SoundBuffer buffer28;
    if (!buffer28.loadFromFile(soundsLoc+ "Eb4.ogg"))
        return -1;
    
    sf::SoundBuffer buffer29;
    if (!buffer29.loadFromFile(soundsLoc+ "C#4.ogg"))
        return -1;
    
    
    sf::Sound c1;
    c1.setBuffer(buffer1);
    
    sf::Sound g2;
    g2.setBuffer(buffer2);
    
    sf::Sound d2;
    d2.setBuffer(buffer3);
    
    sf::Sound a1;
    a1.setBuffer(buffer4);
    
    sf::Sound e2;
    e2.setBuffer(buffer5);
    
    sf::Sound b1;
    b1.setBuffer(buffer6);
    
    sf::Sound fs2;
    fs2.setBuffer(buffer7);
    
    sf::Sound cs2;
    cs2.setBuffer(buffer8);
    
    sf::Sound gs2;
    gs2.setBuffer(buffer9);
    
    sf::Sound eb2;
    eb2.setBuffer(buffer10);
    
    sf::Sound bb1;
    bb1.setBuffer(buffer11);
    
    sf::Sound f2;
    f2.setBuffer(buffer12);
    
    sf::Sound c3;
    c3.setBuffer(buffer13);
    
    sf::Sound g3;
    g3.setBuffer(buffer14);
    
    sf::Sound d3;
    d3.setBuffer(buffer15);
    
    sf::Sound a2;
    a2.setBuffer(buffer16);
    
    sf::Sound e3;
    e3.setBuffer(buffer17);
    
    sf::Sound b2;
    b2.setBuffer(buffer18);
    
    sf::Sound fs3;
    fs3.setBuffer(buffer19);
    
    sf::Sound cs3;
    cs3.setBuffer(buffer20);
    
    sf::Sound gs3;
    gs3.setBuffer(buffer21);
    
    sf::Sound eb3;
    eb3.setBuffer(buffer22);
    
    sf::Sound bb2;
    bb2.setBuffer(buffer23);
    
    sf::Sound f3;
    f3.setBuffer(buffer24);
    
    sf::Sound c4;
    c4.setBuffer(buffer25);
    
    sf::Sound cs4;
    cs4.setBuffer(buffer26);
    
    sf::Sound d4;
    d4.setBuffer(buffer27);
    
    sf::Sound eb4;
    eb4.setBuffer(buffer28);
    
    sf::Sound e4;
    e4.setBuffer(buffer29);
    
    
    sf::Text text("Learn the Steel Drums!", font, 50);
    text.setColor(sf::Color::Red);
    
    int shiftCounter = 0; // variable to determine octave
    // Start the game loop
    while (window.isOpen())
    {
        // Process events
        sf::Event event;
        while (window.pollEvent(event))
        {
            switch (event.type) {
            
                // Close window : exit
                case sf::Event::Closed:
                window.close();
                break;
            
                case sf::Event::KeyPressed:
                    
                    //Octave Shift 
                    if (event.key.code == sf::Keyboard::LShift || event.key.code == sf::Keyboard::RShift){
                        shiftCounter = (shiftCounter + 1) % 3; //calc shiftCounter using modulo
                        cout << "shiftCounter changed!" << endl;
                        cout << "shiftCounter = " << shiftCounter << endl;
                    }

                  
                    if (shiftCounter == 0){
                        if (event.key.code == sf::Keyboard::V || event.key.code == sf::Keyboard::B){
                            c3.play();
                        }
                        if (event.key.code == sf::Keyboard::N || event.key.code == sf::Keyboard::M){
                            g3.play();
                        }
                        if (event.key.code == sf::Keyboard::Comma || event.key.code == sf::Keyboard::Period){
                            d3.play();
                        }
                        if (event.key.code == sf::Keyboard::L || event.key.code == sf::Keyboard::SemiColon){
                            a2.play();
                        }
                        if (event.key.code == sf::Keyboard::O || event.key.code == sf::Keyboard::P){
                            e3.play();
                        }
                        if (event.key.code == sf::Keyboard::U || event.key.code == sf::Keyboard::I){
                            b2.play();
                        }
                        if (event.key.code == sf::Keyboard::T || event.key.code == sf::Keyboard::Y){
                            fs3.play();
                        }
                        if (event.key.code == sf::Keyboard::E || event.key.code == sf::Keyboard::R){
                            cs3.play();
                        }
                        if (event.key.code == sf::Keyboard::Q || event.key.code == sf::Keyboard::W){
                            gs3.play();
                        }
                        if (event.key.code == sf::Keyboard::A || event.key.code == sf::Keyboard::S){
                            eb3.play();
                        }
                        if (event.key.code == sf::Keyboard::D || event.key.code == sf::Keyboard::C){
                            bb2.play();
                        }
                        if (event.key.code == sf::Keyboard::Z || event.key.code == sf::Keyboard::X){
                            f3.play();
                        }
                        
                    }

                    else if (shiftCounter==1){
                        if (event.key.code == sf::Keyboard::V || event.key.code == sf::Keyboard::B){
                            c4.play();
                        }
                        if (event.key.code == sf::Keyboard::Comma || event.key.code == sf::Keyboard::Period){
                            d4.play();
                        }
                        if (event.key.code == sf::Keyboard::O || event.key.code == sf::Keyboard::P){
                            e4.play();
                        }
                        if (event.key.code == sf::Keyboard::E || event.key.code == sf::Keyboard::R){
                            cs4.play();
                        }
                        if (event.key.code == sf::Keyboard::A || event.key.code == sf::Keyboard::S){
                            eb4.play();
                        }
                
                    }

                    else{
                        if (event.key.code == sf::Keyboard::V || event.key.code == sf::Keyboard::B){
                            c1.play();
                        }
                        if (event.key.code == sf::Keyboard::N || event.key.code == sf::Keyboard::M){
                            g2.play();
                        }
                        if (event.key.code == sf::Keyboard::Comma || event.key.code == sf::Keyboard::Period){
                            d2.play();
                        }
                        if (event.key.code == sf::Keyboard::L || event.key.code == sf::Keyboard::SemiColon){
                            a1.play();
                        }
                        if (event.key.code == sf::Keyboard::O || event.key.code == sf::Keyboard::P){
                            e2.play();
                        }
                        if (event.key.code == sf::Keyboard::U || event.key.code == sf::Keyboard::I){
                            b1.play();
                        }
                        if (event.key.code == sf::Keyboard::T || event.key.code == sf::Keyboard::Y){
                            fs2.play();
                        }
                        if (event.key.code == sf::Keyboard::E || event.key.code == sf::Keyboard::R){
                            cs2.play();
                        }
                        if (event.key.code == sf::Keyboard::Q || event.key.code == sf::Keyboard::W){
                            gs2.play();
                        }
                        if (event.key.code == sf::Keyboard::A || event.key.code == sf::Keyboard::S){
                            eb2.play();
                        }
                        if (event.key.code == sf::Keyboard::D || event.key.code == sf::Keyboard::C){
                            bb1.play();
                        }
                        if (event.key.code == sf::Keyboard::Z || event.key.code == sf::Keyboard::X){
                            f2.play();
                        }
                    }
 
 
                    break;

                default:
                    break;
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
