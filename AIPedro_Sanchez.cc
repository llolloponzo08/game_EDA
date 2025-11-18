#include "Player.hh"

/**
 * Player name
 */
#define PLAYER_NAME Pedro_Sanchez


struct PLAYER_NAME : public Player {

  /**
   * Factory: returns a new instance of this class.
   * Do not modify this function.
   */
  static Player* factory () {
    return new PLAYER_NAME;
  }

  /**
   * Types and attributes for your player can be defined here.
   */

  /**
   * Play method, invoked once per each round.
   */
  virtual void play () {
    //get my soldiers
    vector<int> s = soldiers(me());
  }

};


/**
 * Do not modify the following line.
 */
RegisterPlayer(PLAYER_NAME);
