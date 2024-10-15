# ifndef RKOGLT
    /**
     * @file RKOGLT.hpp
     * @author Ramtin Kosari (ramtinkosari@gmail.com)
     * @brief Ramtin Kosari OpenGL Tools Header Library
     * @def RKOGLT
     * @date 2024-10-11
     */
    # define RKOGLT
    /**
     * @brief RKOGLT Color Base
     * @def RKOGLT_COLOR_BASE
     */
    # define RKOGLT_COLOR_BASE 255.0f
    /**
     * @def COLOR2FLOAT
     * @brief Method to Convert Color to Float
     */
    # define COLOR2FLOAT(color) (color / RKOGLT_COLOR_BASE)
    /**
     * @brief RKOGLT Color Structure
     * @struct RKGColor
     */
    struct RKGColor {
        float r;
        float g;
        float b;
        float a;
    };
    /**
     * @brief RKOGLT Point Structure
     * @struct RKGPoint
     */
    struct RKGPoint {
        int x;
        int y;
        int z;
    };
    /**
     * @brief RKOGLT Line Structure
     * @struct RKGLine
     */
    struct RKGLine {
        RKGPoint start;
        RKGPoint end;
        RKGColor color;
    };
# endif // RKOGLT