#include "song.h"

#include <string>
#include <vector>

class SongReader
{
public:
    std::vector<Song> loadSongs(const std::string& filename);
};