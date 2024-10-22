# ifndef RK_GRAPHICS_POLYGON
    # include "Polygon.hpp"
    /**
     * @brief Construct a New RKPolygon Object
     */
    RKPolygon::RKPolygon() {
    }
    /**
     * @brief Destroy the RKPolygon Object
     */
    RKPolygon::~RKPolygon() {
    }
    /**
     * @brief Draw a Line
     * @param point Points of Polygon
     */
    void RKPolygon::drawPolygon(
        std::deque<RKGPointColor> points
    ) {
        //-- Draw Line
        glBegin(GL_POLYGON);
            for (int i = 0; i < points.size(); i++) {
                //-- Set Color
                glColor4f(
                    COLOR2FLOAT(points[i].color.r),
                    COLOR2FLOAT(points[i].color.g),
                    COLOR2FLOAT(points[i].color.b),
                    COLOR2FLOAT(points[i].color.a)
                );
                //-- Draw Vertex
                glVertex3f(
                    points[i].x,
                    points[i].y,
                    points[i].z
                );
            }
        glEnd();
    }
    /**
     * @brief Draw a Line Polygon
     * @param point Points of Polygon
     */
    void RKPolygon::drawLinePolygon(
        std::deque<RKGPointColor> points
    ) {
        //-- Draw Line
        glBegin(GL_LINE_LOOP);
            for (int i = 0; i < points.size(); i++) {
                //-- Set Color
                glColor4f(
                    COLOR2FLOAT(points[i].color.r),
                    COLOR2FLOAT(points[i].color.g),
                    COLOR2FLOAT(points[i].color.b),
                    COLOR2FLOAT(points[i].color.a)
                );
                //-- Draw Vertex
                glVertex3f(
                    points[i].x,
                    points[i].y,
                    points[i].z
                );
            }
        glEnd();
    }
# endif // RK_GRAPHICS_POLYGON