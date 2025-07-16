#include <iostream>
#include <string>
#include <map>
#include <vector>

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

int main() {
  for (const auto& pair : phoneticAlphabet) {
    std::cout << pair.first << ": " << pair.second << std::endl;
  }

  for (const std::string& word : wordList) {
    std::cout << word << std::endl;
  }

  std::cin.get();
}
