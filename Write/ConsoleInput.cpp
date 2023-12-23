#include "pch.h"
#include "ConsoleInput.h"
#include <Song.h>
#include <Note.h>

//using std::wcout, std::cin, std::endl;
//using std::string, std::getline;
//using std::ofstream, std::ifstream;
//
//Song ConsoleInput::CreateSongFromUserInput() {
//    
//}
//
//const char* ConsoleInput::GetSongTitle() {
//    string title;
//    getline(cin, title);
//
//
//
//    ofstream(title + ".txt");
//
//    return title;
//}
//
//void ConsoleInput::ShowLyricsPositions(const char* lyrics, int size) {
//    wcout << "\nLyrics:\n" << lyrics << endl;
//    wcout << "Positions:\n0";
//    for (int i = 1; i < size; ++i) {
//        if (lyrics[i - 1] == ' ' || lyrics[i - 1] == '\n')
//            wcout << i;
//        else
//            wcout << ' ';
//
//        if (lyrics[i] == '\n')
//            wcout << '\n';
//    }
//
//    wcout << endl;
//}
