#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <random>


//-------------------------------------------------------------------------------------------------------------------------
//TABLES
//-------------------------------------------------------------------------------------------------------------------------
std::map<char, std::string> phoneticAlphabet = {
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

std::vector<std::string> wordList = {
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
std::mt19937 rng(std::random_device{}());
std::uniform_int_distribution<std::size_t> dist(0, wordList.size() - 1);

const std::string& randomWord() {
    return wordList[dist(rng)];
}
//-------------------------------------------------------------------------------------------------------------------------


//-------------------------------------------------------------------------------------------------------------------------
//MAIN
//-------------------------------------------------------------------------------------------------------------------------
int main() {
  for (int i = 0; i < 10; i++) {
    std::cout << randomWord() << std::endl;
  }

  std::cin.get();
}
//-------------------------------------------------------------------------------------------------------------------------