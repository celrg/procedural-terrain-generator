Computer Graphics Final Project

Procedural Terrain Generation

DESCRIPTION:
We used the Diamond Square algorithm to procedurally generate height-maps to create terrain. Additionally, we used the generated height-map to generate a color-map. 

HOW TO USE:

to run:
first run:
./lab [terrain name] [water level] [color mode] [variance]

- the terrain name indicates the filepath the height map and color map are generated to.

- the water level indicates what height water will spawn
at on any generated terrains.

- the color specifies the color scheme to generate the terrain with.

color mode 1 will use colors visible in screenshot 4

color mode 2 will use colors visible in screenshot 3

color mode 3 will use colors visible in screenshots 1 and 2

any other number will use:

- variance defines the random value used to diversify the frequency of peaks in the terrain as the algorithm carries out.

All arguments except [terrain name] are optional.

user-interactions:
- Use WASD keys to move around the terrain.
- Use mouse to look around. 
- Press Q to quit. 
- Press R to re-generate the terrain.


FUTURE IMPROVEMENTS:
In the future we would like to experiment with generating cities on top of the terrain. We would also like to add a sky-box and bill-boarding. 

Since this was made as a class project, a lot of the code is not ours. This is another continuing improvement. We are working on replacing any code authored by our professor with our own implementations based on resources available through https://learnopengl.com/ and the openGL documentation.

