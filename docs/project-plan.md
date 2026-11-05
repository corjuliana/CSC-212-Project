 Project Plan


 Create a playlist generator based on user selected input. 

 Songs must contain:
 - Title 
 - Artist
 - Genres 
 - Explicitness


 GENERATOR OUTPUT
Users must be able to select:
 - Playlist Size
 - Genre inclusions/exclusions
 - Artist inclusions/exclusions
 - Only non explicit (playlist defaults to allowing explict)

 Generator must return:
 - Playlist Matching selected criteria 
 - Requested number of songs


 DATA STRUCTURES

 Advanced Data Stucture: Inverted Index
 - indexes will allow songs to be retrived by tags such as Genre and Artist




PLAYLIST GENERATOR LOGIC
 - Songs matching each selected inclusion criteria will be retrieved from the inverted index.
 These song sets will be combined using AND logic until only songs matching all selected requirements remain.

 - The resulting set will then be compared against exclusion criteria. Any songs matching excluded genres, artists, or other filters will be removed.

 - The remaining songs will be considered valid candidates for the playlist.
 Songs will then be randomly selected from the candidate set until the user's requested playlist size is reached.


 - After playlist generation, users may remove songs they do not wish to keep.

 - Removed songs can either be replaced individually or automatically refilled until the originally requested playlist size is restored.

 - Replacement songs must still satisfy the original inclusion and exclusion criteria and should not include songs previously removed by the user.



 NEED

 - To determine what happens when a playlist does not meet it's size requirement when generating. (Not enough songs meet criteria) What happens?

 - Are we implementing time, if so how?

