# ifndef RK_GRAPHICS_SHAPE
    /**
     * @file Shapes.hpp
     * @author Ramtin Kosari (ramtinkosari@gmail.com)
     * @brief Shapes Header File
     * @date 2024-10-08
     */
    # define RK_GRAPHICS_SHAPE
    //-- Check if Library is being Compiled by RKACPB
    # ifdef RKACPB
        //-- Check if Line Header File is Configured
        # ifndef HAS_RKACPB_MODULE_LINE
            error "Line Header File is Required for RK Graphics Shapes Module"
        # endif // HAS_RKACPB_MODULE_SHAPECNF
    # endif // RKACPB
    //-- Include Line File
    # ifndef RK_GRAPHICS_LINE
        # include "Line.hpp"
    # endif // RK_GRAPHICS_LINE
    //-- Include Polygon File
    # ifndef RK_GRAPHICS_POLYGON
        # include "Polygon.hpp"
    # endif // RK_GRAPHICS_POLYGON
    /**
     * @brief Ramtin Kosari's Shapes Class
     * @class RKShapes
     */
    class RKShapes {
        public:
            /**
             * @brief Construct a New RKShapes Object
             */
            RKShapes();
            /**
             * @brief Destroy the RKShapes Object
             */
            ~RKShapes();
    };
# endif // RK_GRAPHICS_SHAPE