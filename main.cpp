#include <iostream>
#include <string>
using namespace std;

void start();

string strToLowercase(string str);

void changeLocation(string newLocation);

void doAction(string action, string currentRoom);

void greyRoom();

void redRoom();

void blueRoom();

void yellowRoom();

void copperRoom();

void silverRoom();

void goldRoom();

void whiteRoom();

void blackRoom();

int main() {
  start();
  cout << "\n---GAME OVER---" << endl;
}

void start() {
  string portal;
  cout << "You wake up in a cold dark room. The room faintly glows grey. In "
          "your pocket is your family heirloom. "
          "Directly in front of you is a "
          "glowing red portal. To your "
          "left and right respectively are a blue and yellow portal.\n"
       << endl;
  cout << "Which do you enter?" << endl;

  while (portal != "red" && portal != "blue" && portal != "yellow") {
    cout << "Type: red, blue, or yellow" << endl;
    cin >> portal;
    portal = strToLowercase(portal);
  }

  changeLocation(portal);
}

string strToLowercase(string str) {
  unsigned int i;
  for (i = 0; i < str.length(); i++) {
    str.at(i) = tolower(str.at(i));
  }
  return str;
}

void changeLocation(string newLocation) {
  system("clear");
  cout << "You walk through ";
  if (newLocation == "grey") {
    cout << "the grey portal" << endl;
    greyRoom();
  }

  else if (newLocation == "red") {
    cout << "the red portal" << endl;
    redRoom();
  }

  else if (newLocation == "blue") {
    cout << "the blue portal" << endl;
    blueRoom();
  }

  else if (newLocation == "yellow") {
    cout << "the yellow portal" << endl;
    yellowRoom();
  }

  else if (newLocation == "copper") {
    cout << "the copper portal" << endl;
    copperRoom();
  }

  else if (newLocation == "silver") {
    cout << "the silver portal" << endl;
    silverRoom();
  }

  else if (newLocation == "gold") {
    cout << "the gold portal" << endl;
    goldRoom();
  }

  else if (newLocation == "black") {
    cout << "the black portal" << endl;
    blackRoom();
  }

  else if (newLocation == "white") {
    cout << "the white portal" << endl;
    whiteRoom();
  }
}

void doAction(string action, string currentRoom) {
  system("clear");
  if (currentRoom == "red") {
    if (action == "water") {
      cout
          << "You pick up the bucket of water and throw it at the fire element."
          << endl;
      cout << "The elemental screams and the room fills with steam. The room "
              "slowly clears of steam, revealing the fire elemental smiling at "
              "you."
           << endl;
      cout << "\"My turn,\" the fire elemental says. A stream of red hot fire "
              "rockets towards you."
           << endl;
      cout << "You scream as your flesh melts from your bones." << endl;
      cout << "You died." << endl;
    } else if (action == "heirloom") {
      cout << "You approach the fire elemental and offer it your family "
              "heirloom."
           << endl;
      cout << "Fire elemental reaches for the heirloom in your hand. The "
              "moment the fire elemental makes contact with your hand, your "
              "hand "
              "ignite on fire. The fire spread to your whole body and burns "
              "until you are nothing but ash."
           << endl;
      cout << "From your ashes a baby fire elemental is born. :)" << endl;
      cout << "You died." << endl;
    }
  }

  else if (currentRoom == "blue") {
    if (action == "heirloom") {
      cout << "You offer your heirloom to the water elemental.\n" << endl;
      cout
          << "\"You dare offer me such fith? Mortals have forgotten their "
             "place in this world.\" the elemental says as it shakes it head.\n"
          << endl;
      cout << "\"Leave my domain!\" the elemental yells as it lashes out with "
              "a water tentacle. \n"
           << endl;

      cout << "The tentacle slaps you across the face, sending you flying into "
              "the grey portal"
           << endl;

      cout << "Press any key(s) and hit enter to continue: " << endl;
      string str;
      cin >> str;

      changeLocation("grey");
    }
  }

  else if (currentRoom == "yellow") {
    if(action == "approach") {
      cout << "You approach the earth elemental\n" << endl;
      cout << "\"Hello traveler, what can I assist you with?\"\n" << endl;
      cout << "\"I need help getting out of here\", you say.\n" << endl; 
      cout << "\"No problem\", the earth beneath your feet begins to shake and split open, revealing a portal. On the other side you see your home. \n" << endl;
      cout << "\"Step into the portal and it will take you home\", the earth elemental says.\n" << endl;
      cout << "You step into the portal and find yourself infront of your home."<< endl;
    }
  }

  else if (currentRoom == "copper") {
    cout << "the copper portal" << endl;
    copperRoom();
  }

  else if (currentRoom == "silver") {
    cout << "the silver portal" << endl;
    silverRoom();
  }

  else if (currentRoom == "gold") {
    cout << "the gold portal" << endl;
    goldRoom();
  }

  else if (currentRoom == "black") {
    if(action == "serve") {
      cout << "The necromancer transforms you into a skeleton" << endl;
    }
    else if (action == "fight") {
      cout << "As soon as you choose to fight the necromancer, he blasts you with a ray of death." << endl;
      cout << "You died." << endl;
    }
  }

  else if (currentRoom == "white") {
    
  }
}

// DONE
void greyRoom() {
  string portal;
  cout << "You enter the room you woke up in. The room faintly glows grey. In "
          "your pocket is your family heirloom. "
          "Directly in front of you is a "
          "glowing red portal. To your "
          "left and right respectively are a blue and yellow portal. \n"
       << endl;
  cout << "Which do you enter?" << endl;

  while (portal != "red" && portal != "blue" && portal != "yellow") {
    cout << "Type: red, blue, or yellow" << endl;
    cin >> portal;
    portal = strToLowercase(portal);
  }

  changeLocation(portal);
}

// DONE
void redRoom() {
  string action;
  string currentRoom = "red";

  cout << "You arrive in a glowing red room. The room is blazing hot. You "
          "begin to sweat through your clothes. In the center of the room is "
          "a fire elemental. \n"
       << endl;

  cout << "In your pocket is your family heirloom. In the corner of the "
          "room is a bucket of water. \n"
       << endl;

  cout << "To the north is a glowing silver portal. To the south, behind you, "
          "is a glowing grey portal. To the east is a glowing gold portal and "
          "to the "
          "west is a glowing copper portal. \n"
       << endl;

  cout << "What do you do?" << endl;

  while (action != "grey" && action != "silver" && action != "gold" &&
         action != "copper" && action != "heirloom" && action != "water") {
    cout << "Do you enter a portal?" << endl;
    cout << "Type: grey, copper, silver, or gold" << endl;

    cout << "Do you give the fire elemental your heirloom?" << endl;
    cout << "Type: heirloom" << endl;

    cout << "Do you through the bucket of water on the elemental?" << endl;
    cout << "Type: water" << endl;

    cin >> action;
    action = strToLowercase(action);
  }

  if (action == "heirloom" || action == "water") {
    doAction(action, currentRoom);
  } else {
    changeLocation(action);
  }
}

// DONE
void blueRoom() {
  string action;
  string currentRoom = "blue";

  cout << "You arrive in a blue glowing room. The air is humid and you find it "
          "hard to breath. In the center of the room is a water elemental. "
          "Behind you is a glowing grey portal. To the north, is a glowing "
          "white portal. In your pocket is your family heirloom.\n"
       << endl;

  cout << "What do you do?\n" << endl;

  while (action != "grey" && action != "white" && action != "heirloom") {
    cout << "Do you enter a portal?" << endl;
    cout << "Type: grey or white" << endl;
    cout << "Do offer your heirloom to the elemental?" << endl;
    cout << "Type: heirloom" << endl;
    cin >> action;
    action = strToLowercase(action);
  }

  if (action == "grey" || action == "white") {
    changeLocation(action);
  } else {
    doAction(action, currentRoom);
  }
}

// DONE
void yellowRoom() {
  string action;
  string currentRoom = "yellow";
  cout << "You enter a room that glows yellow. In your pocket is your family heirloom. In the center of the room is a earth elemental. She smiles at you and waves you closer. Behind you is a glowing grey portal. On the opposite side of the room is a black glowing portal. \n" << endl;

  while(action != "grey" && action != "black" && action != "approach") {
    cout << "Do you enter a portal?" << endl;
    cout << "Type: grey or black\n" << endl;
    
    cout << "Do you approach the earth elemental?" << endl;
    cout << "Type: approach\n" << endl;

    cin >> action;
    action = strToLowercase(action);
  }

  if (action == "grey" || action == "black") {
    changeLocation(action);
  } else {
    doAction(action, currentRoom);
  }
}

// Dwarf in room forging a sword
// You try to speak to the dwarf by he ignores you
void copperRoom() {}

// There is an elf mediating in the center of the room:
// You try to talk to her but she ignores you
void silverRoom() {}

// Outcomes:
// Dragon eats you for trying to steal treasure
// Dragon burns you for attacking it with a sword
// Dragon accepts your heirloom and you become a dragonborn, bonded to the Dragon for life
void goldRoom() {}

// Outcomes:
// Throw coin in wishing well.
void whiteRoom() {}

// DONE
// Outcomes:
// Become skeleton
// Kill necromacer
void blackRoom() {
  string action;
  string currentRoom = "black";

  cout << "You arrive in a room glowing black. You get an ominous vibe from from the room. Goose bumps sprout on you skin. In your pocket you have your heirloom. In the center of the room is a necromancer. Behind you is a yellow portal.\n" << endl;

  cout << "What do you do next?" << endl;
  cout << "Do you enter the yellow portal?" << endl;
  cout << "Type: yellow" << endl;
  cout << "Do you give the necromancer your heirloom?" << endl;
  cout << "Type: heirloom" << endl;

  while(action != "yellow" && action != "serve" && action != "fight") {
    cin >> action;
    action = strToLowercase(action);
    if(action == "heirloom") {
      cout << "You give the heirloom to the nercomancer. \n" << endl;
      cout << "\"As a reward you may choose to serve as my minion or fight me for my throne!\" The necromancer roars.\n" << endl;
      cout << "Type: serve or fight" << endl;
      cin >> action;
      action = strToLowercase(action);
      if(action != "serve" || action != "fight") {
        cout << "Try again." << endl;
          cout << "What do you do next?" << endl;
          cout << "Do you enter the yellow portal?" << endl;
          cout << "Type: yellow" << endl;
          cout << "Do you give the necromancer your heirloom?" << endl;
          cout << "Type: heirloom" << endl;
        
      }
    }
  } 
  
  if(action == "serve" || action == "fight") {
    doAction(action, currentRoom);
  } else {
    changeLocation(action);
  }
}
