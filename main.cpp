//sfml template message
//#include "stdafx.h"

#ifdef __APPLE__

#include "ResourcePath.hpp"


#endif


#include <string>
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>


#include <iostream>
using namespace std;



void setTenorSounds(sf::Sound(allSounds)[29], sf::SoundBuffer(allBuffers)[29]) {
  string soundsLoc = resourcePath();
    
    
    
  //Sounds
  if (!allBuffers[0].loadFromFile(soundsLoc + "C1.ogg"))
    exit(-1);
  if (!allBuffers[1].loadFromFile(soundsLoc + "G2.ogg"))
    exit(-1);
  if (!allBuffers[2].loadFromFile(soundsLoc + "D2.ogg"))
    exit(-1);
  if (!allBuffers[3].loadFromFile(soundsLoc + "A1.ogg"))
    exit(-1);
  if (!allBuffers[4].loadFromFile(soundsLoc + "E2.ogg"))
    exit(-1);
  if (!allBuffers[5].loadFromFile(soundsLoc + "B1.ogg"))
    exit(-1);
  if (!allBuffers[6].loadFromFile(soundsLoc + "F#2.ogg"))
    exit(-1);
  if (!allBuffers[7].loadFromFile(soundsLoc + "C#2.ogg"))
    exit(-1);
  if (!allBuffers[8].loadFromFile(soundsLoc + "G#2.ogg"))
    exit(-1);
  if (!allBuffers[9].loadFromFile(soundsLoc + "Eb2.ogg"))
    exit(-1);
  if (!allBuffers[10].loadFromFile(soundsLoc + "Bb1.ogg"))
    exit(-1);
  if (!allBuffers[11].loadFromFile(soundsLoc + "F2.ogg"))
    exit(-1);
  if (!allBuffers[12].loadFromFile(soundsLoc + "C3.ogg"))
    exit(-1);
  if (!allBuffers[13].loadFromFile(soundsLoc + "G3.ogg"))
    exit(-1);
  if (!allBuffers[14].loadFromFile(soundsLoc + "D3.ogg"))
    exit(-1);
  if (!allBuffers[15].loadFromFile(soundsLoc + "A2.ogg"))
    exit(-1);
  if (!allBuffers[16].loadFromFile(soundsLoc + "E3.ogg"))
    exit(-1);
  if (!allBuffers[17].loadFromFile(soundsLoc + "B2.ogg"))
    exit(-1);
  if (!allBuffers[18].loadFromFile(soundsLoc + "F#3.ogg"))
    exit(-1);
  if (!allBuffers[19].loadFromFile(soundsLoc + "C#3.ogg"))
    exit(-1);
  if (!allBuffers[20].loadFromFile(soundsLoc + "G#3.ogg"))
    exit(-1);
  if (!allBuffers[21].loadFromFile(soundsLoc + "Eb3.ogg"))
    exit(-1);
  if (!allBuffers[22].loadFromFile(soundsLoc + "Bb2.ogg"))
    exit(-1);
  if (!allBuffers[23].loadFromFile(soundsLoc + "F3.ogg"))
    exit(-1);
  if (!allBuffers[24].loadFromFile(soundsLoc + "C4.ogg"))
    exit(-1);
  if (!allBuffers[25].loadFromFile(soundsLoc + "D4.ogg"))
    exit(-1);
  if (!allBuffers[26].loadFromFile(soundsLoc + "E4.ogg"))
    exit(-1);
  if (!allBuffers[27].loadFromFile(soundsLoc + "Eb4.ogg"))
    exit(-1);
  if (!allBuffers[28].loadFromFile(soundsLoc + "C#4.ogg"))
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

int getTenorBars(string (tenorBars)[14]){
  tenorBars[0] = "F3-BB2-BB2-BB2-BB2-C3-C3-";
  tenorBars[1] = "F3-BB2-BB2-BB2-BB2-C3-C3-";
  tenorBars[2] = "F3-BB2-BB2-BB2-BB2-C3-C3-";
  tenorBars[3] = "F3-BB2-BB2-BB2-BB2-C3-C3-BB2-";
  tenorBars[4] = "D3-D3-D3-D3-EB3";
  tenorBars[5] = "BB2-G3-D3-D3-EB3";
  tenorBars[6] = "BB2-G3-D3-EB3-D3-";
  tenorBars[7] = "C3-C3-C3-D3-C3-";
  tenorBars[8] = "BB2-D3-D3-D3-D3-EB3";
  tenorBars[9] = "BB2-G3-D3-D3-EB3-";
  tenorBars[10] = "BB2-G3-D3-EB3-D3-";
  tenorBars[11] = "C3-C3-C3-D3-C3-BB2-";
  tenorBars[12] = "F3-BB2-BB2-BB2-BB2-BB2-BB2";
  tenorBars[13] = "F3-BB2-BB2-BB2-Bb2-C3-C3-BB2-";
    
  return 14;
}

bool checkMeasure(int barCounter, string &userAttempt,  string& currentBar, int numberOfBars, string (correctBars)[14], sf::Clock clock, sf::Time checkTime){
  bool correct = false;
  if(userAttempt == currentBar){
    cout << "CORRECT" << endl;
    correct = true;
    cout << userAttempt << "==" << currentBar << endl;
    barCounter++;
    //check if complete
    if (barCounter == numberOfBars){
      cout <<"CONGRATS! You completed this section!" << endl;
    }else{
      currentBar = correctBars[barCounter];
      userAttempt = "";
            
    }
  }else {
    cout << "Incorrect! Try Again!" << endl;
    cout << userAttempt << "!=" << currentBar << endl;
    userAttempt = "";
  }
  return correct;
}

int main(int, char const**){
    
  //set resource locations
  string soundsLoc = resourcePath();
  string imagesLoc = resourcePath();
    
    
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
    retur
      checkTime = clock.getElapsedTime();
  }
  music.pause();
    
  string correctBars[14];
  int numberOfBars;
  numberOfBars = getTenorBars(correctBars);
  int barCounter = 0;
  string currentBar = correctBars[barCounter];
    string userAttempt = lapsedTime();
            while (checkTime.asSeconds() < 1.9){
                checkTime = clock.getElapsedTime();
            }
            music.pause();
            userAttempt = "";
        }
// Process events
sf::Event event;
while (window.pollEvent(event))
{
            
                if (shiftCounter == 0){
                        if (event.key.code == sf::Keyboard::V || event.key.code == sf::Keyboard::B){
                            currentSounds[12].play();  // c3
                            userAttempt += "C3-";
                            if (event.key.code == sf::Keyboard::O || event.key.code == sf::Keyboard::P){
                            currentSounds[16].play();  // e3
                            userAttempt += "E3-";
                        }
                        if (event.key.code == sf::Keyboard::U || event.key.code == sf::Keyboard::I){
        e == sf::Keyboard::W){
                            currentSounds[20].play();   //gs3
                            userAttempt += "GS3-";
                        }
                        if (event.key.code == sf::Keyboard::A || event.key.code == sf::Keyboard::S){
                          f (event.key.code == sf::Keyboard::V || event.key.code == sf::Keyboard::B){
                            currentSounds[24].play();  // c4
                            userAttempt += "C4-";
                        }
                        if (event.key.code == sf::Keyboard::Co::Keyboard::S){
                            currentSounds[27].play(); // eb4
                            userAttempt += "EB4-";
                        }
                        
         oard::L || event.key.code == sf::Keyboard::SemiColon){
                            currentSounds[3].play();  // a1
                            userAttempt += "A1-";
                        }
                        if (event.key.code == sf::Keyboard::O || event.key.code == sf::Keyboard::P){
                            currentSounds[4].play();  // e2
                currentSounds[7].play(); // cs2
                            userAttempt += "CS-";
                        }
                        if (event.key.code == sf::Keyboard::Q || event.key.code == sf::Keyboard::W){
                            currentSounds[8].play();  // gs2
                            userAttempt += "GS2-";
                        }
                        if (event.key.code == sf::Keyboard::A || event.key.code == sf::Keyboard::S){
                            currentSounds[9].play();  // eb2
                            userAttempt += "EB2-";
    userAttempt += "F2-";
                        }
                    }
                    
                    break;
                    
                default:
                    break;
}
}
        
// Clear screen
window.clear();
        
// Draw
