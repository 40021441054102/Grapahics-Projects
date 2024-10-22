# ifndef RK_GRAPHICS_POLYGON
    /**
     * @file Polygon.hpp
     * @author Ramtin Kosari (ramtinkosari@gmail.com)
     * @brief Ramtin Kosari Graphics Library - Polygon
     * @date 2024-10-16
     */
    # define RK_GRAPHICS_POLYGON
    //-- Include GLEW Library
    # ifndef __GLEW_H__
        # include <GL/glew.h>
    # endif // __GLEW_H__
    //-- Include Array Library
    # ifndef _GLIBCXX_ARRAY
        # include <array>
    # endif // _GLIBCXX_ARRAY
    //-- Include Deque
    # ifndef _GLIBCXX_DEQUE
        # include <deque>
    # endif // _GLIBCXX_DEQUE
    //-- Include RKOGLT
    # ifndef RKOGLT
        # include "RKOGLT.hpp"
    # endif // RKOGLT
    /**
     * @brief Default Polygon Color (RGBA)
     * @def RK_POLYGON_DEFAULT_COLOR
     */
    # define RK_POLYGON_DEFAULT_COLOR {0, 0, 0, 255}
    /**
     * @brief Polygon Class Definition
     * @class RKPolygon
     */
    class RKPolygon{
        public:
            /**
             * @brief Construct a New RKPolygon Object
             */
            RKPolygon();
            /**
             * @brief Destroy the RKPolygon Object
             */
            ~RKPolygon();
            /**
             * @brief Draw a Polygon
             * @param point Points of Polygon
             */
            void drawPolygon(
                std::deque<RKGPointColor> points
            );
            /**
             * @brief Draw a Line Polygon
             * @param point Points of Polygon
             */
            void drawLinePolygon(
                std::deque<RKGPointColor> points
            );
    };
# endif // RK_GRAPHICS_POLYGON