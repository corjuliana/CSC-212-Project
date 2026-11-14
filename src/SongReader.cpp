#include "songReader.h"

#include <fstream>
#include <iostream>

std::vector<Song> SongReader::loadSongs(const std::string& filename)
{
    std::vector<Song> songs;

    std::ifstream file(filename);

    if (!file.is_open())
    {
        std::cout << "Failed to open file.\n";
        return songs;
    }

    int idCounter = 0;
    std::string line;

        // skip first csv line
    std::getline(file, line);

    while (std::getline(file, line))
    {
        Song song;

        song.id = idCounter;
        idCounter+=1;

        
        songs.push_back(song);
    }

    return songs;
}

