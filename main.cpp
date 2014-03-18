//sfml template message
#ifdef __APPLE__

#include "ResourcePath.hpp"


#endif


#include <string>
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>


#include <iostream>
using namespace std;

void setTenorSounds(sf::Sound(allSounds)[29], sf::SoundBuffer(allBuffers)[29]) {
   string soundsLoc = "./resources/sounds/";

    //Sounds
    if (!allBuffers[0].loadFromFile(soundsLoc + "C1.ogg"))
        exit(-1);
    if (!allBuffers[1].loadFromFile(soundsLoc+ "G2.ogg"))
        exit(-1);
    if (!allBuffers[2].loadFromFile(soundsLoc+ "D2.ogg"))
        exit(-1);
    if (!allBuffers[3].loadFromFile(soundsLoc+ "A1.ogg"))
        exit(-1);
    if (!allBuffers[4].loadFromFile(soundsLoc+ "E2.ogg"))
        exit(-1);
    if (!allBuffers[5].loadFromFile(soundsLoc+ "B1.ogg"))
        exit(-1);
    if (!allBuffers[6].loadFromFile(soundsLoc+ "F#2.ogg"))
        exit(-1);
    if (!allBuffers[7].loadFromFile(soundsLoc+ "C#2.ogg"))
        exit(-1);
    if (!allBuffers[8].loadFromFile(soundsLoc+ "G#2.ogg"))
        exit(-1);
    if (!allBuffers[9].loadFromFile(soundsLoc+ "Eb2.ogg"))
        exit(-1);
    if (!allBuffers[10].loadFromFile(soundsLoc+ "Bb1.ogg"))
        exit(-1);
    if (!allBuffers[11].loadFromFile(soundsLoc+ "F2.ogg"))
        exit(-1);
    if (!allBuffers[12].loadFromFile(soundsLoc+ "C3.ogg"))
        exit(-1);
    if (!allBuffers[13].loadFromFile(soundsLoc+ "G3.ogg"))
        exit(-1);
    if (!allBuffers[14].loadFromFile(soundsLoc+ "D3.ogg"))
        exit(-1);
    if (!allBuffers[15].loadFromFile(soundsLoc+ "A2.ogg"))
        exit(-1);
    if (!allBuffers[16].loadFromFile(soundsLoc+ "E3.ogg"))
        exit(-1);
    if (!allBuffers[17].loadFromFile(soundsLoc+ "B2.ogg"))
        exit(-1);
    if (!allBuffers[18].loadFromFile(soundsLoc+ "F#3.ogg"))
        exit(-1);
    if (!allBuffers[19].loadFromFile(soundsLoc+ "C#3.ogg"))
        exit(-1);
    if (!allBuffers[20].loadFromFile(soundsLoc+ "G#3.ogg"))
        exit(-1);
    if (!allBuffers[21].loadFromFile(soundsLoc+ "Eb3.ogg"))
        exit(-1);
    if (!allBuffers[22].loadFromFile(soundsLoc+ "Bb2.ogg"))
        exit(-1);
    if (!allBuffers[23].loadFromFile(soundsLoc+ "F3.ogg"))
        exit(-1);
    if (!allBuffers[24].loadFromFile(soundsLoc+ "C4.ogg"))
        exit(-1);
    if (!allBuffers[25].loadFromFile(soundsLoc+ "D4.ogg"))
        exit(-1);
    if (!allBuffers[26].loadFromFile(soundsLoc+ "E4.ogg"))
        exit(-1);
    if (!allBuffers[27].loadFromFile(soundsLoc+ "Eb4.ogg"))
        exit(-1);
    if (!allBuffers[28].loadFromFile(soundsLoc+ "C#4.ogg"))
        exit(-1);
    
    allSounds[0].setBuffer(allBuffers[0]);
    allSounds[1].setBuffer(allBuffers[1]);
    allSounds[2].setBuffer(allBuffers[2]);
    allSounds[3].setBuffer(allBuffers[3]);
    allSounds[4].setBuffer(allBuffers[4]);
    allSounds[5].setBuffer(allBuffers[5]);
    allSounds[6].setBuffer(allBuffers[6]);
    allSounds[7].setBuffer(allBuffers[7]);
    allSounds[8].setBuffer(allBuffers[8]);
    allSounds[9].setBuffer(allBuffers[9]);
    allSounds[10].setBuffer(allBuffers[10]);
    allSounds[11].setBuffer(allBuffers[11]);
    allSounds[12].setBuffer(allBuffers[12]);
    allSounds[13].setBuffer(allBuffers[13]);
    allSounds[14].setBuffer(allBuffers[14]);
    allSounds[15].setBuffer(allBuffers[15]);
    allSounds[16].setBuffer(allBuffers[16]);
    allSounds[17].setBuffer(allBuffers[17]);
    allSounds[18].setBuffer(allBuffers[18]);
    allSounds[19].setBuffer(allBuffers[19]);
    allSounds[20].setBuffer(allBuffers[20]);
    allSounds[21].setBuffer(allBuffers[21]);
    allSounds[22].setBuffer(allBuffers[22]);
    allSounds[23].setBuffer(allBuffers[23]);
    allSounds[24].setBuffer(allBuffers[24]);
    allSounds[25].setBuffer(allBuffers[25]);
    allSounds[26].setBuffer(allBuffers[26]);
    allSounds[27].setBuffer(allBuffers[27]);
    allSounds[28].setBuffer(allBuffers[28]);
}

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
    if (!font.loadFromFile(imagesLoc + "sansation.ttf")) {
        return EXIT_FAILURE;
    }
   
    
    sf::Sound currentSounds[29];
    sf::SoundBuffer currentBuffers[29];
    setTenorSounds(currentSounds, currentBuffers);
    
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
                            currentSounds[12].play();  // c3
                        }
                        if (event.key.code == sf::Keyboard::N || event.key.code == sf::Keyboard::M){
                            currentSounds[13].play();  // g3
                        }
                        if (event.key.code == sf::Keyboard::Comma || event.key.code == sf::Keyboard::Period){
                            currentSounds[14].play();  // d3
                        }
                        if (event.key.code == sf::Keyboard::L || event.key.code == sf::Keyboard::SemiColon){
                            currentSounds[15].play();  // a2
                        }
                        if (event.key.code == sf::Keyboard::O || event.key.code == sf::Keyboard::P){
                            currentSounds[16].play();  // e3
                        }
                        if (event.key.code == sf::Keyboard::U || event.key.code == sf::Keyboard::I){
                            currentSounds[17].play();  // b2
                        }
                        if (event.key.code == sf::Keyboard::T || event.key.code == sf::Keyboard::Y){
                            currentSounds[18].play();   // fs3
                        }
                        if (event.key.code == sf::Keyboard::E || event.key.code == sf::Keyboard::R){
                            currentSounds[19].play();   //cs3
                        }
                        if (event.key.code == sf::Keyboard::Q || event.key.code == sf::Keyboard::W){
                            currentSounds[20].play();   //gs3
                        }
                        if (event.key.code == sf::Keyboard::A || event.key.code == sf::Keyboard::S){
                            currentSounds[21].play();   //eb3
                        }
                        if (event.key.code == sf::Keyboard::D || event.key.code == sf::Keyboard::C){
                            currentSounds[22].play();   //bb2
                        }
                        if (event.key.code == sf::Keyboard::Z || event.key.code == sf::Keyboard::X){
                            currentSounds[23].play();  // f3
                        }
                        
                    }
                    
                    else if (shiftCounter==1){
                        if (event.key.code == sf::Keyboard::V || event.key.code == sf::Keyboard::B){
                            currentSounds[24].play();  // c4
                        }
                        if (event.key.code == sf::Keyboard::Comma || event.key.code == sf::Keyboard::Period){
                            currentSounds[26].play();  // d4
                        }
                        if (event.key.code == sf::Keyboard::O || event.key.code == sf::Keyboard::P){
                            currentSounds[28].play();  // e4
                        }
                        if (event.key.code == sf::Keyboard::E || event.key.code == sf::Keyboard::R){
                            currentSounds[25].play(); // cs4
                        }
                        if (event.key.code == sf::Keyboard::A || event.key.code == sf::Keyboard::S){
                            currentSounds[27].play(); // eb4
                        }
                        
                    }
                    
                    else{
                        if (event.key.code == sf::Keyboard::V || event.key.code == sf::Keyboard::B){
                            currentSounds[0].play();  // c1
                        }
                        if (event.key.code == sf::Keyboard::N || event.key.code == sf::Keyboard::M){
                            currentSounds[1].play();  // g2
                        }
                        if (event.key.code == sf::Keyboard::Comma || event.key.code == sf::Keyboard::Period){
                            currentSounds[2].play();  // d2
                        }
                        if (event.key.code == sf::Keyboard::L || event.key.code == sf::Keyboard::SemiColon){
                            currentSounds[3].play();  // a1
                        }
                        if (event.key.code == sf::Keyboard::O || event.key.code == sf::Keyboard::P){
                            currentSounds[4].play();  // e2
                        }
                        if (event.key.code == sf::Keyboard::U || event.key.code == sf::Keyboard::I){
                            currentSounds[5].play();  // b1
                        }
                        if (event.key.code == sf::Keyboard::T || event.key.code == sf::Keyboard::Y){
                            currentSounds[6].play(); // fs2
                        }
                        if (event.key.code == sf::Keyboard::E || event.key.code == sf::Keyboard::R){
                            currentSounds[7].play(); // cs2
                        }
                        if (event.key.code == sf::Keyboard::Q || event.key.code == sf::Keyboard::W){
                            currentSounds[8].play();  // gs2
                        }
                        if (event.key.code == sf::Keyboard::A || event.key.code == sf::Keyboard::S){
                            currentSounds[9].play();  // eb2
                        }
                        if (event.key.code == sf::Keyboard::D || event.key.code == sf::Keyboard::C){
                            currentSounds[10].play(); // bb1
                        }
                        if (event.key.code == sf::Keyboard::Z || event.key.code == sf::Keyboard::X){
                            currentSounds[11].play();  // f2
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
