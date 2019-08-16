
enum BiomeType{
  BIOME_VOID = 0,
  BIOME_DESERT = 1,
  BIOME_FOREST = 2,
};

enum BlockType{
  BLOCK_AIR = 0,
  BLOCK_GRASS = 1,
  BLOCK_DIRT = 2,
  BLOCK_SAND = 3,
  BLOCK_CLAY = 4,
  BLOCK_GRAVEL = 5,
  BLOCK_STONE = 6,
  BLOCK_WATER = 7,
  BLOCK_LEAVES = 8,
  BLOCK_WOOD = 9
};

//Drawing Dependencies
#include <GL/glew.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_ttf.h>
#include <glm/glm.hpp>
#include "glm/gtc/matrix_transform.hpp"

//Containers, Math, Other
#include <stdlib.h>
#include <string>
#include <math.h>
#include <noise/noise.h>
#include <vector>
#include <deque>

//File / General IO
#include <iostream>
#include <fstream>
#include <sstream>
#include <boost/archive/text_oarchive.hpp>
#include <boost/archive/text_iarchive.hpp>
#include <boost/serialization/vector.hpp>
#include <boost/filesystem/operations.hpp>
#include <boost/filesystem/path.hpp>

//Pathfinding Classes
#include "include/astar/sltastar.h"
#include "include/astar/astar.h"

//World Classes
#include "include/world/octree.cpp"
#include "include/world/chunk.cpp"
#include "include/world/world.cpp"

//View Classes
#include "include/render/view.cpp"
#include "include/render/model.cpp"
#include "include/render/sprite.cpp"
#include "include/render/shader.cpp"

//Game Classes
#include "include/game/event.cpp"
#include "include/game/item.cpp"
#include "include/game/player.cpp"
#include "include/game/logger.cpp"

//NPC Classes
#include "include/taskbot/state.cpp"
#include "include/taskbot/memory.cpp"
#include "include/taskbot/bot.cpp"
#include "include/taskbot/mandate.cpp"
#include "include/taskbot/population.cpp"
#include "include/taskbot/task.cpp"
