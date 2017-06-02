
#ifdef _WIN32
#  include <windows.h>
#endif
#include <stdio.h>
#ifdef _WIN32
#  define snprintf _snprintf
#endif
#include <string.h>
#ifdef __APPLE__
#  include <GLUT/glut.h>
#else
#  include <GL/glut.h>
#endif

#include <AR/ar.h>
#include <AR/arMulti.h>
#include <AR/video.h>
#include <AR/gsub_lite.h>
#include <AR/arFilterTransMat.h>
#include <AR2/tracking.h>
#include <SDL2/SDL.h>

#include "ARMarkerNFT.h"
#include "trackingSub.h"

int simpleMain (char* filename);
