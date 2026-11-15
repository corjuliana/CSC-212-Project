#include <string>
#include <vector>

// Contains song data
struct Song
{
    int id = -1;

    std::string name;
    std::string artist;

    int year = 0;
    int durationMS = 0;

    // vector will combine both genre & tags of song
    std::vector<std::string> tags;
};