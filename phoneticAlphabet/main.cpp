#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <random>

using namespace std;


//-------------------------------------------------------------------------------------------------------------------------
//TABLES
//-------------------------------------------------------------------------------------------------------------------------
map<char, string> phoneticAlphabet = {
  {'a', "alpha"},   {'b', "bravo"},    {'c', "charlie"},
  {'d', "delta"},   {'e', "echo"},     {'f', "foxtrot"},
  {'g', "golf"},    {'h', "hotel"},    {'i', "india"},
  {'j', "juliett"}, {'k', "kilo"},     {'l', "lima"},
  {'m', "mike"},    {'n', "november"}, {'o', "oscar"},
  {'p', "papa"},    {'q', "quebec"},   {'r', "romeo"},
  {'s', "sierra"},  {'t', "tango"},    {'u', "uniform"},
  {'v', "victor"},  {'w', "whiskey"},  {'x', "x-ray"},
  {'y', "yankee"},  {'z', "zulu"}
};

vector<string> wordList = {
  "adaptive", "apollo", "astronaut", "balance", "break", "braille", "brisk", "bribery", "brisket", "bunk", "close", "coach", "contamination", "convent", "deal", "deceive", "defile",
  "deliberate", "demonetize", "dependence", "despot", "emerge", "endurance", "excursion", "exit", "extent", "fluid", "foot", "form", "frequency", "fugue", "gentle",
  "get", "go", "gracious", "greece", "germany", "growing", "guy", "hand", "honey", "honesty", "horn", "hunch", "improve", "inclusive", "injection", "instance",
  "intelligent", "invader", "jointure", "jiorgos", "jungle", "kindly", "kindness", "library", "live", "lobby", "low", "lumber", "make", "market", "marketable", "material", "mechanical", 
  "mention", "pagan", "paper", "parson", "past", "payee", "peddling", "performer", "pest", "postal", "prefix", "put", "quit", "quitance", "quotient", "rate", "razor", "recognition", "resurgence",
  "ringside", "runway", "say", "scream", "scrupulosity", "senior", "sloping", "slide", "sorry", "speculum", "talk", "talkative", "thing", "thug", "tosh", "torch", "translation", "trammel", "turn",
  "type", "typecast", "unaided", "unruly", "upbeat", "virtual", "visual", "voluntarily", "warm", "walnut", "way", "weed", "weapon", "well", "whiskey", "whisk", "wind", "wiper",
  "work", "wrapper", "xylophone", "yodel", "zippy", "zodiac", "zoom"
};
//-------------------------------------------------------------------------------------------------------------------------


//-------------------------------------------------------------------------------------------------------------------------
//FUNCTIONS
//-------------------------------------------------------------------------------------------------------------------------
mt19937 rng(random_device{}());
uniform_int_distribution<size_t> dist(0, wordList.size() - 1);

const string& randomWord() {
    return wordList[dist(rng)];
}
//-------------------------------------------------------------------------------------------------------------------------


//-------------------------------------------------------------------------------------------------------------------------
//MAIN
//-------------------------------------------------------------------------------------------------------------------------
int main() {
  cout << "Welcome to the phonetic alphabet practice tool." << endl;
  cout << "In order to exit the tool, enter 'LEAVE'." << endl;
  cout << "The tool is going to provide you with a word." << endl;
  cout << "For each letter of the word, enter the phonetic alphabet letter and enter." << endl;
  bool running = true;

  while (running) {
    string word = randomWord();

    cout << "\nCurrent word: " << word << endl;

    for (char letter : word) {
      string input;
      cin >> input;

      if (input == "LEAVE") { running = false; break; }

      if (input == phoneticAlphabet[letter]) {
        continue;
      }
      else {
        cout << "\nYour answer is wrong, this was the right answer: " << endl;
        cout << phoneticAlphabet[letter] << endl;
        cout << "retry" << endl;
        break;
      }
    }
  }
}
//-------------------------------------------------------------------------------------------------------------------------