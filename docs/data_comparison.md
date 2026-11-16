COMPARE DATA SETS


1. Spotify Million Song Dataset - Found on kaggle

Pros:
 - Contains Artists, duration and tags (expanded genres)
 - CVS file format (separated by commas)
 - large dataset containing around 50k songs


Cons: 
 - Does not contain an explicit/non-explicit attribute

Thoughts(after implementation/testing):
Successfully able to parse through all 50k songs. I combined the genre and tags into one larger category for easier filtering/searching. Unfortunately, the dataset does not contain the explicit/non-explicit information we were looking for. I'll continue looking at other datasets, but this is the most promising one so far due to its size and the amount of metadata it contains.