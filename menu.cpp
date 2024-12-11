//-- Include Project 1
# ifndef RK_GRAPHICS_PROJECT_1
    # include "ScreenSaver.hpp"
# endif // RK_GRAPHICS_PROJECT_1
//-- Include Project 2
# ifndef RK_GRAPHICS_PROJECT_2
    # include "WorldModel.hpp"
# endif // RK_GRAPHICS_PROJECT_2
//-- Include Project 3
# ifndef RK_GRAPHICS_PROJECT_3
    # include "BouncingBall.hpp"
# endif // RK_GRAPHICS_PROJECT_3
//-- Include Project 4
# ifndef RK_GRAPHICS_PROJECT_4
    # include "Clock.hpp"
# endif // RK_GRAPHICS_PROJECT_4
//-- Include Project 5
# ifndef RK_GRAPHICS_PROJECT_5
    # include "MouseFunctions.hpp"
# endif // RK_GRAPHICS_PROJECT_5
# include "RKLogger.hpp"

/**
 * @brief Method to Clear Terminal
 */
void clearTerminal() {
    std::cout << "\033[2J\x1b[H";
}

// int main2(int argc, char **argv) {
//     synwin::SynWindow window(
//         "Synestia Graphics",
//         RK_SCREEN_SAVER_WINDOW_HEIGHT,
//         RK_SCREEN_SAVER_WINDOW_WIDTH
//     );
//     glutInit(&argc, argv);
//     glFrustum(-10.0, 10.0, -10.0, 10.0, 1.5, 20.0);
//     while (true) {
//         //-- Clear the Window
//         window.clear(30, 30, 30, 255);
//         glColor3f(0.0, 1.0, 1.0);
//         glutWireSphere(2, 16, 70);
//         window.update();
//         std::this_thread::sleep_for(std::chrono::milliseconds(20));
//     }
// }

//-- Main Method
int main(int argc, char** argv) {
    glutInit(&argc, argv);
    clearTerminal();
    logger(RKG_LABEL LIGHT_CYAN "Welcome to Ramtin Kosari's Term 7 Graphics Projects" RESET);
    logRKGraphicsLogo();
    logger(CYAN "Choose a Project to Run :");
    logger(TAB BLUE_GRAY "1." RESET " Screen Saver");
    logger(TAB BLUE_GRAY "2." RESET " 3D Model");
    logger(TAB BLUE_GRAY "3." RESET " Bouncing Ball");
    logger(TAB BLUE_GRAY "4." RESET " Clock");
    logger(TAB BLUE_GRAY "5." RESET " Mouse Functions");
    logger(TAB BLUE_GRAY "0." RESET " Exit");
    //-- Define Choice
    int choice;
    //-- Get User Choice
    std::cout << TAB "Enter Your Choice : " CYAN; std::cin >> choice; std::cout << RESET;
    //-- Handle Switch
    switch (choice) {
        //-- Screen Saver
        case 1: {
            //-- Clear Terminal
            clearTerminal();
            logger(RKG_LABEL LIGHT_CYAN "Enjoy My Screen Savers" RESET);
            //-- Log RK Graphics Logo
            logRKGraphicsLogo();
            //-- Log Screen Saver Choices
            logger(YELLOW "Choose a Screen Saver :");
            logger(TAB YELLOW_GRAY "0." RESET " Test");
            logger(TAB YELLOW_GRAY "1." RESET " Circle");
            logger(TAB YELLOW_GRAY "2." RESET " Random");
            logger(TAB YELLOW_GRAY "3." RESET " Infinity");
            logger(TAB YELLOW_GRAY "4." RESET " Wish Flower");
            logger(TAB YELLOW_GRAY "5." RESET " Custom Line");
            logger(TAB YELLOW_GRAY "6." RESET " Custom Polygon");
            logger(TAB YELLOW_GRAY "7." RESET " Custom Line Polygon");
            logger(TAB YELLOW_GRAY "8." RESET " Custom Circle Polygon");
            logger(TAB YELLOW_GRAY "9." RESET " Triangle Screen Saver");
            logger(TAB YELLOW_GRAY "10." RESET " Scaling Circle with Footprints");
            logger(TAB YELLOW_GRAY "11." RESET " Scaling Circle without Footprints");
            logger(TAB YELLOW_GRAY "12." RESET " Exit (Not Yet Implemented)");
            //-- Get User Choice
            std::cout << TAB "Enter Your Choice : " YELLOW; std::cin >> choice; std::cout << RESET;
            //-- Handle Switch
            switch (choice) {
                //-- Test Screen Saver
                case RK_SCREEN_SAVER_TEST: {
                    RKScreenSaver screen_saver(RK_SCREEN_SAVER_TEST);
                    break;
                }
                //-- Circle Screen Saver
                case RK_SCREEN_SAVER_CIRCLE: {
                    RKScreenSaver screen_saver(RK_SCREEN_SAVER_CIRCLE);
                    break;
                }
                //-- Random Screen Saver
                case RK_SCREEN_SAVER_RANDOM: {
                    RKScreenSaver screen_saver(RK_SCREEN_SAVER_RANDOM);
                    break;
                }
                //-- Infinite Screen Saver
                case RK_SCREEN_SAVER_INFINITE: {
                    RKScreenSaver screen_saver(RK_SCREEN_SAVER_INFINITE);
                    break;
                }
                //-- Wish Flower Screen Saver
                case RK_SCREEN_SAVER_WISH_FLOWER: {
                    RKScreenSaver screen_saver(RK_SCREEN_SAVER_WISH_FLOWER);
                    break;
                }
                //-- Custom Line Screen Saver
                case RK_SCREEN_SAVER_CUSTOM: {
                    RKScreenSaver screen_saver(RK_SCREEN_SAVER_CUSTOM);
                    break;
                }
                //-- Custon Polygon Screen Saver
                case RK_SCREEN_SAVER_CUSTOM_POLYGON: {
                    RKScreenSaver screen_saver(RK_SCREEN_SAVER_CUSTOM_POLYGON);
                    break;
                }
                //-- Custom Line Polygon Screen Saver
                case RK_SCREEN_SAVER_CUSTOM_POLYGON_LINE: {
                    RKScreenSaver screen_saver(RK_SCREEN_SAVER_CUSTOM_POLYGON_LINE);
                    break;
                }
                //-- Custom Circle Screen Saver
                case RK_SCREEN_SAVER_CUSTOM_CIRCLE: {
                    RKScreenSaver screen_saver(RK_SCREEN_SAVER_CUSTOM_CIRCLE);
                    break;
                }
                //-- Triangle Screen Saver
                case RK_SCREEN_SAVER_TRIANGLE: {
                    RKScreenSaver screen_saver(RK_SCREEN_SAVER_TRIANGLE);
                    break;
                }
                //-- Scaling Circle with Footprints
                case RK_SCREEN_SAVER_SCALING_CIRCLE_WITH_FOOTPRINTS: {
                    RKScreenSaver screen_saver(RK_SCREEN_SAVER_SCALING_CIRCLE_WITH_FOOTPRINTS);
                    break;
                }
                //-- Scaling Circle without Footprints
                case RK_SCREEN_SAVER_SCALING_CIRCLE_WITHOUT_FOOTPRINTS: {
                    RKScreenSaver screen_saver(RK_SCREEN_SAVER_SCALING_CIRCLE_WITHOUT_FOOTPRINTS);
                    break;
                }
            }
        }
        //-- 3D Model
        case 2: {
            //-- Clear Terminal
            clearTerminal();
            logger(RKG_LABEL LIGHT_CYAN "Enjoy My 3D Models" RESET);
            //-- Log RK Graphics Logo
            logRKGraphicsLogo();
            //-- Log Screen Saver Choices
            logger(YELLOW "Choose a 3D Model :");
            logger(TAB YELLOW_GRAY "0." RESET " Volumes on 3D World Model");
            logger(TAB YELLOW_GRAY "1." RESET " Exit (Not Yet Implemented)");
            //-- Get User Choice
            std::cout << TAB "Enter Your Choice : " YELLOW; std::cin >> choice; std::cout << RESET;
            //-- Handle Switch
            switch (choice) {
                //-- Volumes on 3D World Model
                case 0: {
                    RKWorldModel world_model;
                    break;
                }
            }
            break;
        }
        //-- Bouncing Ball
        case 3: {
            //-- Clear Terminal
            clearTerminal();
            logger(RKG_LABEL LIGHT_CYAN "Enjoy My Bouncing Ball" RESET);
            //-- Log RK Graphics Logo
            logRKGraphicsLogo();
            //-- Log Screen Saver Choices
            logger(YELLOW "Choose a Bouncing Ball Model :");
            logger(TAB YELLOW_GRAY "0." RESET " Test");
            logger(TAB YELLOW_GRAY "1." RESET " with Gravity");
            logger(TAB YELLOW_GRAY "2." RESET " with Impact");
            logger(TAB YELLOW_GRAY "3." RESET " Faster Smaller Impact");
            //-- Get User Choice
            std::cout << TAB "Enter Your Choice : " YELLOW; std::cin >> choice; std::cout << RESET;
            //-- Handle Switch
            switch (choice) {
                //-- Test Bouncing Ball
                case RK_BOUNCING_BALL_TEST: {
                    RKBouncingBall bouncing_ball(RK_BOUNCING_BALL_TEST);
                    break;
                }
                //-- Bouncing Ball with Gravity
                case RK_BOUNCING_BALL_GRAVITY: {
                    RKBouncingBall bouncing_ball(RK_BOUNCING_BALL_GRAVITY);
                    break;
                }
                //-- Bouncing Ball with Impact
                case RK_BOUNCING_BALL_IMPACT: {
                    RKBouncingBall bouncing_ball(RK_BOUNCING_BALL_IMPACT);
                    break;
                }
                //-- Faster Smaller Impact
                case RK_BOUNCING_BALL_FASTER_SMALLER_IMPACT: {
                    RKBouncingBall bouncing_ball(RK_BOUNCING_BALL_FASTER_SMALLER_IMPACT);
                    break;
                }
            }
            break;
        }
        //-- Clock
        case 4: {
            //-- Clear Terminal
            clearTerminal();
            logger(RKG_LABEL LIGHT_CYAN "Enjoy My Clock" RESET);
            //-- Log RK Graphics Logo
            logRKGraphicsLogo();
            //-- Log Screen Saver Choices
            logger(YELLOW "Choose a Clock Model :");
            logger(TAB YELLOW_GRAY "0." RESET " Test");
            logger(TAB YELLOW_GRAY "1." RESET " Analog Clock");
            logger(TAB YELLOW_GRAY "2." RESET " Digital Clock");
            logger(TAB YELLOW_GRAY "3." RESET " Modern Clock");
            logger(TAB YELLOW_GRAY "4." RESET " Exit (Not Yet Implemented)");
            //-- Get User Choice
            std::cout << TAB "Enter Your Choice : " YELLOW; std::cin >> choice; std::cout << RESET;
            //-- Handle Switch
            switch (choice) {
                //-- Test Clock
                case RK_CLOCK_TEST: {
                    RKClock clock(RK_CLOCK_TEST);
                    break;
                }
                //-- Analog Clock
                case RK_CLOCK_ANALOG: {
                    RKClock clock(RK_CLOCK_ANALOG);
                    break;
                }
                //-- Digital Clock
                case RK_CLOCK_DIGITAL: {
                    RKClock clock(RK_CLOCK_DIGITAL);
                    break;
                }
                //-- Modern Clock
                case RK_CLOCK_MODERN: {
                    RKClock clock(RK_CLOCK_MODERN);
                    break;
                }
            }
            break;
        }
        //-- Mouse Functions
        case 5: {
            //-- Clear Terminal
            clearTerminal();
            logger(RKG_LABEL LIGHT_CYAN "Enjoy My Mouse Functions" RESET);
            //-- Log RK Graphics Logo
            logRKGraphicsLogo();
            //-- Log Screen Saver Choices
            logger(YELLOW "Choose a Mouse Function :");
            logger(TAB YELLOW_GRAY "1." RESET " Mouse Functions");
            logger(TAB YELLOW_GRAY "2." RESET " Exit (Not Yet Implemented)");
            //-- Get User Choice
            std::cout << TAB "Enter Your Choice : " YELLOW; std::cin >> choice; std::cout << RESET;
            //-- Handle Switch
            switch (choice) {
                //-- Create Mouse Functions Object
                case 1: {
                    RKMouseFunctions mouse_functions;
                    break;
                }
            }
            break;
        }
        //-- Default
        default:
            // logger(RKG_LABEL FAILURE YELLOW "Invalid Choice" RESET);
            break;
    }
    return 0;
}
