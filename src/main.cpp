#include "songReader.h"
#include <iostream>

// g++ main.cpp SongReader.cpp -o program

int main()
{
    SongReader reader;

    std::vector<Song> songs =
        reader.loadSongs("../data/Music Info.csv");

    std::cout << "Loaded "
              << songs.size()
              << " songs\n";

              //  test case 1
    Song firstSong = songs[0];

    std::cout << firstSong.name << '\n';
    std::cout << firstSong.artist << '\n';
    std::cout << firstSong.year << '\n';
    std::cout << firstSong.durationMS << '\n';

    std::cout << "Tags:\n";

    for (const std::string& tag : firstSong.tags)
    {
        std::cout << tag << '\n';
    }

    return 0;
}
