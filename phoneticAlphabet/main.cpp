#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
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
//LICENSE
//-------------------------------------------------------------------------------------------------------------------------
void printLicense() {
cout << R"(MIT License

Copyright (c) 2025 Jiorgose

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
)" << endl;
}

//-------------------------------------------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------------------------------------------
//MAIN
//-------------------------------------------------------------------------------------------------------------------------
int main() {
  printLicense();
  cout << "\nPress Enter to continue..." << endl;
  cin.get();

  cout << "\nWelcome to the phonetic alphabet practice tool." << endl;
  cout << "In order to exit the tool, enter 'leave'." << endl;
  cout << "\nThe tool is going to provide you with a word." << endl;
  cout << "For each letter of the word, enter the phonetic alphabet letter and enter." << endl;
  bool running = true;

  while (running) {
    bool correct = true;
    string word = randomWord();

    cout << "\nCurrent word: " << word << endl;

    for (char letter : word) {
      cout << "\nCurrent letter: " << letter << endl;

      string input;
      cin >> input;
      transform(input.begin(), input.end(), input.begin(), ::tolower);

      if (input == "leave") { running = false; break; }

      if (input == phoneticAlphabet[letter]) {
        continue;
      }
      else {
        cout << "\nYour answer is wrong, this was the correct answer: " << endl;
        cout << phoneticAlphabet[letter] << endl;
        cout << "\nretry." << endl;
        correct = false;
        break;
      }
    }

    if (correct) { cout << "\nCorrect!" << endl; }
  }
}
//-------------------------------------------------------------------------------------------------------------------------