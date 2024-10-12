# ifndef RK_GRAPHICS_LINE
    # include "Line.hpp"
    /**
     * @brief Construct a New RKLine Object
     */
    RKLine::RKLine() {
    }
    /**
     * @brief Destroy the RKLine Object
     */
    RKLine::~RKLine() {
    }
    /**
     * @brief Draw a Line
     * @param x1 X Coordinate of First Point
     * @param y1 Y Coordinate of First Point
     * @param x2 X Coordinate of Second Point
     * @param y2 Y Coordinate of Second Point
     */
    void RKLine::drawLine(
        int x1,
        int y1,
        int x2,
        int y2,
        int z1 = 0.0f,
        int z2 = 0.0f,
        std::array<int, 4> color = RK_LINE_DEFAULT_COLOR
    ) {
        //-- Draw Line
        glBegin(GL_LINES);
            //-- Set Color
            glColor4f(
                COLOR2FLOAT(color[0]),
                COLOR2FLOAT(color[1]),
                COLOR2FLOAT(color[2]),
                COLOR2FLOAT(color[3])
            );
            //-- Set Vertices for Point 1
            glVertex3f(x1, y1, z1);
            //-- Set Vertices for Point 2
            glVertex3f(x2, y2, z2);
        glEnd();
    }
# endif // RK_GRAPHICS_LINE