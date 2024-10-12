# ifndef RK_GRAPHICS_LINE
    /**
     * @file Line.hpp
     * @author Ramtin Kosari (ramtinkosari@gmail.com)
     * @brief Ramtin Kosari Graphics Library - Line Header File
     * @date 2024-10-11
     */
    # define RK_GRAPHICS_LINE
    //-- Check if Project is being Compiled by RKACPB
    # ifdef RKACPB
        //-- Check if RKOGLT is Configured
        # ifndef HAS_RKACPB_MODULE_RKOGLT
            # error "RKOGLT is Required for RK Graphics Line Module"
        # endif // HAS_RKACPB_MODULE_RKOGLT
    # endif // RKACPB
    //-- Include GLEW Library
    # ifndef __GLEW_H__
        # include <GL/glew.h>
    # endif // __GLEW_H__
    //-- Include Array Library
    # ifndef _GLIBCXX_ARRAY
        # include <array>
    # endif // _GLIBCXX_ARRAY
    //-- Include RKOGLT
    # ifndef RKOGLT
        # include "RKOGLT.hpp"
    # endif // RKOGLT
    /**
     * @brief Default Line Color (RGBA)
     * @def RK_LINE_DEFAULT_COLOR
     */
    # define RK_LINE_DEFAULT_COLOR {0, 0, 0, 255}
    /**
     * @brief Line Class Definition
     * @class RKLine
     */
    class RKLine {
        public:
            /**
             * @brief Construct a New RKLine Object
             */
            RKLine();
            /**
             * @brief Destroy the RKLine Object
             */
            ~RKLine();
            /**
             * @brief Draw a Line
             * @param x1 X Coordinate of First Point
             * @param y1 Y Coordinate of First Point
             * @param z1 Z Coordinate of First Point
             * @param x2 X Coordinate of Second Point
             * @param y2 Y Coordinate of Second Point
             * @param z2 Z Coordinate of Second Point
             */
            void drawLine(
                int x1,
                int y1,
                int x2,
                int y2,
                int z1,
                int z2,
                std::array<int, 4> color
            );
    };
# endif // RK_GRAPHICS_LINE