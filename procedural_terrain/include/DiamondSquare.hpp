#ifndef DIAMONDSQUARE_HPP
#define DIAMONDSQUARE_HPP

#include <vector>
#include <string>

struct DiamondSquare
{

    // Fields
    std::vector<uint8_t> pixelData; // represents the vertices
    std::vector<uint8_t> colorData; // represents the color to be drawn
    unsigned int max; // represents the maximum height of peaks
    unsigned int waterLevel; // represents the level at which water will start 
    std::string terrainName; // name that the terrain maps will be saved as
    unsigned int size; // dimensions of the terrain (width & heigh of the maps)
    int currMode; // color mode
    int currVar; // variance - random value that specifies the frequency that the peaks will generate at 

    // Empty Constructor
    DiamondSquare();

    // Constructor
    DiamondSquare(std::string name, unsigned int water);

    // Destructor
    ~DiamondSquare();

    // Methods
    // Generates a random terrain heightmap
    void genRandom(int r);
    // Generates the corresponding color map
    void genColorMap(int mode);
    // Creates and saves a ppm for the height or color map dictated by "mode" where true is height and false is color
    void save(bool mode);
    // Clears pixelData and colorData
    void clearData();
};

#endif
