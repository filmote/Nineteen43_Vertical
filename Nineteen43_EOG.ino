#include "src/Utils/Arduboy2Ext.h"


/* -----------------------------------------------------------------------------------------------------------------------------
 *  End of mission / game loop ..
 * -----------------------------------------------------------------------------------------------------------------------------
 */
void endOfSequence_Render(bool endOfLevel) {

  if (gameState == GameState::End_Of_Mission) {

    #ifdef SAVE_MEMORY
    SpritesB::drawOverwrite(114, 0, mission_successful_1, 0);
    SpritesB::drawOverwrite(101, 0, mission_successful_2, 0);
    #else
    Sprites::drawOverwrite(114, 0, mission_successful_1, 0);
    Sprites::drawOverwrite(101, 0, mission_successful_2, 0);
    #endif
  }
  else {

    if (endOfLevel) {
      #ifdef SAVE_MEMORY
      SpritesB::drawOverwrite(114, 0, level_complete_1, 0);
      SpritesB::drawOverwrite(101, 0, level_complete_2, 0);
      #else
      Sprites::drawOverwrite(114, 0, level_complete_1, 0);
      Sprites::drawOverwrite(101, 0, level_complete_2, 0);
      #endif
    }
    else {
      #ifdef SAVE_MEMORY
      SpritesB::drawOverwrite(101, 0, game_over, 0);
      #else
      Sprites::drawOverwrite(101, 0, game_over, 0);
      #endif
    }

  }

  arduboy.drawVerticalDottedLine(0, HEIGHT, 97);
  arduboy.drawVerticalDottedLine(0, HEIGHT, 127);

}

void drawFlyingPair() {

  arduboy.fillRect(97, intro - 38, 127, 200, BLACK);
  #ifdef SAVE_MEMORY
  SpritesB::drawOverwrite(97, intro - 38, zero_S, 0);
  SpritesB::drawOverwrite(111, intro - 20, zero_S, 0);
  #else
  Sprites::drawOverwrite(97, intro - 38, zero_S, 0);
  Sprites::drawOverwrite(111, intro - 20, zero_S, 0);
  #endif
  intro++;

}

void endOfSequence(const uint8_t level) {

  bool endOfLevel = false;

  if (level == 0 && mission == 30) { gameState = GameState::End_Of_Game; endOfLevel = true; } 
  if (level == 1 && mission == 60) { gameState = GameState::End_Of_Game; endOfLevel = true; }

  #ifdef SAVE_MEMORY
    uint16_t high = eeprom_read_word((uint16_t *)(EEPROM_SCORE + (level * 2)));
  #else
    uint16_t high = EEPROM_Utils::getHighScore();
  #endif

  if (player.getScore() > high) { 
    #ifdef SAVE_MEMORY
    eeprom_update_word((uint16_t *)(EEPROM_SCORE + (level * 2)), player.getScore());
    #endif
    high = player.getScore();
  }

  endOfSequence_Render(endOfLevel); 

  if (intro < 120) {

    drawFlyingPair();

  }
  else {

    #ifdef SAVE_MEMORY
    SpritesB::drawOverwrite(68, 15, usaf, 0);
    #else
    Sprites::drawOverwrite(68, 15, usaf, 0);
    #endif

    // Score ..
    {
      #ifdef SAVE_MEMORY
      SpritesB::drawOverwrite(55, 21, score_img, 0);
      #else
      Sprites::drawOverwrite(55, 21, score_img, 0);
      #endif
      uint8_t digits[4] = {};
      extractDigits(digits, player.getScore());

      for (uint8_t i = 0, y = 38; i < 4; ++i, y -= 6) {
        #ifdef SAVE_MEMORY
        SpritesB::drawSelfMasked(45, y, numbers_vert, digits[i]);
        #else
        Sprites::drawSelfMasked(45, y, numbers_vert, digits[i]);
        #endif
      }
      
    }

    // Total ..
    {
      uint8_t digits[4] = {};
      #ifdef SAVE_MEMORY
      SpritesB::drawOverwrite(29, 13, highScore_img, 0);
      #else
      Sprites::drawOverwrite(29, 13, highScore_img, 0);
      #endif
      extractDigits(digits, high);
      
      for (uint8_t i = 0, y = 38; i < 4; ++i, y -= 6) {
        #ifdef SAVE_MEMORY
        SpritesB::drawSelfMasked(20, y, numbers_vert, digits[i]);
        #else
        Sprites::drawSelfMasked(20, y, numbers_vert, digits[i]);
        #endif
      }
      
    }

    #ifdef SAVE_MEMORY
    SpritesB::drawOverwrite(0, 15, splash_press_a, 0);
    #else
    Sprites::drawOverwrite(0, 15, splash_press_a, 0);
    #endif

  }

  {
    uint8_t justPressed = arduboy.justPressedButtons();
    uint8_t pressed = arduboy.pressedButtons();

    if (gameState == GameState::End_Of_Mission) {
      if (justPressed & A_BUTTON) { gameState = GameState::Game_Init; }
    }
    else {
      #ifdef SAVE_MEMORY
      if ((pressed & UP_BUTTON) && (pressed & DOWN_BUTTON)) { EEPROM_Utils::initEEPROM(true); player.setScore(0); high = 0; }
      if (justPressed & A_BUTTON) { gameState = GameState::Intro_Init; }
      #else
      if (justPressed & A_BUTTON) { gameState = GameState::Save_Score; }
      #endif

    }

  }

}
