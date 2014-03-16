//sfml template message
#ifdef __APPLE__

#include "ResourcePath.hpp"


#endif


#include <string>
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>


#include <iostream>
using namespace std;

void setTenorSounds(sf::Sound(&allSounds)[29]) {
    string soundsLoc = "./resources/sounds/";

    //Sounds
    sf::SoundBuffer buffer1;
    if (!buffer1.loadFromFile(soundsLoc + "C1.ogg"))
        exit(-1);
    sf::SoundBuffer buffer2;
    if (!buffer2.loadFromFile(soundsLoc+ "G2.ogg"))
        exit(-1);
    sf::SoundBuffer buffer3;
    if (!buffer3.loadFromFile(soundsLoc+ "D2.ogg"))
        exit(-1);
    sf::SoundBuffer buffer4;
    if (!buffer4.loadFromFile(soundsLoc+ "A1.ogg"))
        exit(-1);
    sf::SoundBuffer buffer5;
    if (!buffer5.loadFromFile(soundsLoc+ "E2.ogg"))
        exit(-1);
    sf::SoundBuffer buffer6;
    if (!buffer6.loadFromFile(soundsLoc+ "B1.ogg"))
        exit(-1);
    sf::SoundBuffer buffer7;
    if (!buffer7.loadFromFile(soundsLoc+ "F#2.ogg"))
        exit(-1);
    sf::SoundBuffer buffer8;
    if (!buffer8.loadFromFile(soundsLoc+ "C#2.ogg"))
        exit(-1);
    sf::SoundBuffer buffer9;
    if (!buffer9.loadFromFile(soundsLoc+ "G#2.ogg"))
        exit(-1);
    sf::SoundBuffer buffer10;
    if (!buffer10.loadFromFile(soundsLoc+ "Eb2.ogg"))
        exit(-1);
    sf::SoundBuffer buffer11;
    if (!buffer11.loadFromFile(soundsLoc+ "Bb1.ogg"))
        exit(-1);
    sf::SoundBuffer buffer12;
    if (!buffer12.loadFromFile(soundsLoc+ "F2.ogg"))
        exit(-1);
    sf::SoundBuffer buffer13;
    if (!buffer13.loadFromFile(soundsLoc+ "C3.ogg"))
        exit(-1);
    sf::SoundBuffer buffer14;
    if (!buffer14.loadFromFile(soundsLoc+ "G3.ogg"))
        exit(-1);
    sf::SoundBuffer buffer15;
    if (!buffer15.loadFromFile(soundsLoc+ "D3.ogg"))
        exit(-1);
    sf::SoundBuffer buffer16;
    if (!buffer16.loadFromFile(soundsLoc+ "A2.ogg"))
        exit(-1);
    sf::SoundBuffer buffer17;
    if (!buffer17.loadFromFile(soundsLoc+ "E3.ogg"))
        exit(-1);
    sf::SoundBuffer buffer18;
    if (!buffer18.loadFromFile(soundsLoc+ "B2.ogg"))
        exit(-1);
    sf::SoundBuffer buffer19;
    if (!buffer19.loadFromFile(soundsLoc+ "F#3.ogg"))
        exit(-1);
    sf::SoundBuffer buffer20;
    if (!buffer20.loadFromFile(soundsLoc+ "C#3.ogg"))
        exit(-1);
    sf::SoundBuffer buffer21;
    if (!buffer21.loadFromFile(soundsLoc+ "G#3.ogg"))
        exit(-1);
    sf::SoundBuffer buffer22;
    if (!buffer22.loadFromFile(soundsLoc+ "Eb3.ogg"))
        exit(-1);
    sf::SoundBuffer buffer23;
    if (!buffer23.loadFromFile(soundsLoc+ "Bb2.ogg"))
        exit(-1);
    sf::SoundBuffer buffer24;
    if (!buffer24.loadFromFile(soundsLoc+ "F3.ogg"))
        exit(-1);
    sf::SoundBuffer buffer25;
    if (!buffer25.loadFromFile(soundsLoc+ "C4.ogg"))
        exit(-1);
    sf::SoundBuffer buffer26;
    if (!buffer26.loadFromFile(soundsLoc+ "D4.ogg"))
        exit(-1);
    sf::SoundBuffer buffer27;
    if (!buffer27.loadFromFile(soundsLoc+ "E4.ogg"))
        exit(-1);
    sf::SoundBuffer buffer28;
    if (!buffer28.loadFromFile(soundsLoc+ "Eb4.ogg"))
        exit(-1);
    sf::SoundBuffer buffer29;
    if (!buffer29.loadFromFile(soundsLoc+ "C#4.ogg"))
        exit(-1);
    
    sf::Sound c1;
    allSounds[0].setBuffer(buffer1);
    
    sf::Sound g2;
    allSounds[1].setBuffer(buffer2);
    
    sf::Sound d2;
    allSounds[2].setBuffer(buffer3);
    
    sf::Sound a1;
    allSounds[3].setBuffer(buffer4);
    
    sf::Sound e2;
    allSounds[4].setBuffer(buffer5);
    
    sf::Sound b1;
    allSounds[5].setBuffer(buffer6);
    
    sf::Sound fs2;
    allSounds[6].setBuffer(buffer7);
    
    sf::Sound cs2;
    allSounds[7].setBuffer(buffer8);
    
    sf::Sound gs2;
    allSounds[8].setBuffer(buffer9);
    
    sf::Sound eb2;
    allSounds[9].setBuffer(buffer10);
    
    sf::Sound bb1;
    allSounds[10].setBuffer(buffer11);
    
    sf::Sound f2;
    allSounds[11].setBuffer(buffer12);
    
    sf::Sound c3;
    allSounds[12].setBuffer(buffer13);
    
    allSounds[13].setBuffer(buffer14);
    
    sf::Sound d3;
    allSounds[14].setBuffer(buffer15);
    
    sf::Sound a2;
    allSounds[15].setBuffer(buffer16);
    
    sf::Sound e3;
    allSounds[16].setBuffer(buffer17);
    
    sf::Sound b2;
    allSounds[17].setBuffer(buffer18);
    
    sf::Sound fs3;
    allSounds[18].setBuffer(buffer19);
    
    sf::Sound cs3;
    allSounds[19].setBuffer(buffer20);
    
    sf::Sound gs3;
    allSounds[20].setBuffer(buffer21);
    
    sf::Sound eb3;
    allSounds[21].setBuffer(buffer22);
    
    sf::Sound bb2;
    allSounds[22].setBuffer(buffer23);
    
    sf::Sound f3;
    allSounds[23].setBuffer(buffer24);
    
    sf::Sound c4;
    allSounds[24].setBuffer(buffer25);
    
    sf::Sound cs4;
    allSounds[25].setBuffer(buffer26);
    
    sf::Sound d4;
    allSounds[26].setBuffer(buffer27);
    
    sf::Sound eb4;
    allSounds[27].setBuffer(buffer28);
    
    sf::Sound e4;
    allSounds[28].setBuffer(buffer29);
    
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
    
    setTenorSounds(currentSounds);
    
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


