#include "songReader.h"

int main()
{
    SongReader reader;

    std::vector<Song> songs =
        reader.loadSongs("../data/music.csv");

    return 0;
}