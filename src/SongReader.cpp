#include "songReader.h"

#include <fstream>
#include <iostream>
#include <sstream>

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
        
        // needed data
        std::string tags, genre, year, duration, throwaway;

        std::stringstream row(line);

        // track ID - not needed atm
        std::getline(row,throwaway, ',');

        // name
        std::getline(row, song.name, ',');

        // artist
        std::getline(row, song.artist, ',');

        // spotify url
        std::getline(row, throwaway, ',');

        // spotify_id
        std::getline(row, throwaway, ',');

        // tags are in ""
       std::getline(row, tags, '"'); // open
       std::getline(row, tags, '"'); // close

       std::stringstream tagStream(tags);

       std::string singleTag;

        // split tags by commas
       while (std::getline(tagStream, singleTag, ',')){
        song.tags.push_back(singleTag);
       }

       std::getline(row, throwaway, ','); // consume the comma


        // genre
        std::getline(row, genre, ',');

        // year
        std::getline(row, year, ',');

        // duration (ms)
        std::getline(row, duration, ',');

        if (song.id == 0)
{
    
}

        if (!year.empty() && std::isdigit(year[0]))
{
        song.year = std::stoi(year);
}

        if (!duration.empty() && std::isdigit(duration[0])){
        song.durationMS = std::stoi(duration);
        }

        // some songs have the genre empty
        if (!genre.empty())
        {
            song.tags.push_back(genre);
        }


        songs.push_back(song);
     }

            

    return songs;
}

