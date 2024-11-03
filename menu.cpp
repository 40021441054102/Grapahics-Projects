//-- Include Project 1
# ifndef RK_GRAPHICS_PROJECT_1
    # include "ScreenSaver.hpp"
# endif // RK_GRAPHICS_PROJECT_1
# include "RKLogger.hpp"

/**
 * @brief Method to Clear Terminal
 */
void clearTerminal() {
    std::cout << "\033[2J\x1b[H";
}

//-- Main Method
int main() {
    clearTerminal();
    logger(RKG_LABEL LIGHT_CYAN "Welcome to Ramtin Kosari's Term 7 Graphics Projects" RESET);
    logRKGraphicsLogo();
    logger(CYAN "Choose a Project to Run :");
    logger(TAB BLUE_GRAY "1." RESET " Screen Saver");
    logger(TAB BLUE_GRAY "2." RESET " 3D Model");
    logger(TAB BLUE_GRAY "3." RESET " ...");
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
            logRKGraphicsLogo();
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
            logger(TAB YELLOW_GRAY "10." RESET " Exit (Not Yet Implemented)");
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
            }
        }
        //-- Polygan
        case 2: {
            break;
        }
        //-- Exit
        case 3: {
            // logger(RKG_LABEL SUCCESS "Terminated" RESET);
            break;
        }
        //-- Default
        default:
            // logger(RKG_LABEL FAILURE YELLOW "Invalid Choice" RESET);
            break;
    }
    return 0;
}


// //-- Include Window Module
// # include "Window.hpp"
// # include "Shapes.hpp"

// # define PADDING 40

// //-- Main Method
// int main() {
//     logger(RKG_LABEL INFO "Main Function Started");
//     //-- Create a Window Object
//     synwin::SynWindow window(
//         "Synestia Graphics",
//         RK_SCREEN_SAVER_WINDOW_HEIGHT,
//         RK_SCREEN_SAVER_WINDOW_WIDTH
//     );
//     RKLine l1, l2;
//     RKPolygon car;
//     Sint32 mouse_x;
//     Sint32 mouse_y;
//     Sint32 angle = 0;
//     // create shape object
//     RKShapes shape;
//     RKGPointColor p1, p2, p3, p4;
//     p1.color.a = 255;
//     p1.color.r = 255;
//     p1.color.g = 100;
//     p1.color.b - 100;
//     p1.x = 200;
//     p1.y = 200;
//     p1.z = 0;
//     // -- 
//     p2.color.a = 255;
//     p2.color.r = 100;
//     p2.color.g = 255;
//     p2.color.b - 255;
//     p2.x = 200;
//     p2.y = 400;
//     p2.z = 0;
//     // -- 
//     // --
//     p3.color.a = 255;
//     p3.color.r = 100;
//     p3.color.g = 255;
//     p3.color.b - 255;
//     p3.x = 400;
//     p3.y = 400;
//     p3.z = 0;
//     // -- 
//     //-- 
//     p4.color.a = 255;
//     p4.color.r = 255;
//     p4.color.g = 100;
//     p4.color.b - 100;
//     p4.x = 400;
//     p4.y = 200;
//     p4.z = 0;
//     // -- 
//     std::deque<RKGPointColor> polyBuffer;
//     polyBuffer.push_back(p1);
//     polyBuffer.push_back(p2);
//     polyBuffer.push_back(p3);
//     polyBuffer.push_back(p4);
//     //-- Set OpenGL Ortho
//     glOrtho(
//         0.0,RK_SCREEN_SAVER_WINDOW_WIDTH,
//         0.0, RK_SCREEN_SAVER_WINDOW_HEIGHT,
//         -1.0, 1.0
//     );
//     int agentSize = 50;
//     //-- Window Loop
//     while (true) {
//         //-- Clear the Window
//         window.clear(30, 30, 30, 255);

//         l1.drawLine(
//             static_cast<int>(0 + PADDING), static_cast<int>(RK_SCREEN_SAVER_WINDOW_HEIGHT * 1 / 3),
//             static_cast<int>(RK_SCREEN_SAVER_WINDOW_WIDTH - PADDING), static_cast<int>(RK_SCREEN_SAVER_WINDOW_HEIGHT * 1 / 3),
//             0.0f, 0.0f, 
//             {
//                 static_cast<int>(255),
//                 static_cast<int>(255),
//                 static_cast<int>(255),
//                 255
//             }
//         );
//         l2.drawLine(
//             static_cast<int>(0 + PADDING), static_cast<int>(RK_SCREEN_SAVER_WINDOW_HEIGHT * 2 / 3),
//             static_cast<int>(RK_SCREEN_SAVER_WINDOW_WIDTH - PADDING), static_cast<int>(RK_SCREEN_SAVER_WINDOW_HEIGHT * 2 / 3),
//             0.0f, 0.0f, 
//             {
//                 static_cast<int>(255),
//                 static_cast<int>(255),
//                 static_cast<int>(255),
//                 255
//             }
//         );
//         mouse_x = window.mouse.x;
//         mouse_y = window.mouse.y;
//         angle = window.mouse.angle; //* M_PI / 180;
//         std::cout << angle << std::endl;
//         polyBuffer[0].x = mouse_x + agentSize * cos(90 + angle);
//         polyBuffer[0].y = (RK_SCREEN_SAVER_WINDOW_HEIGHT - mouse_y) + agentSize * sin(90 + angle);
//         polyBuffer[1].x = mouse_x + agentSize * cos(angle);
//         polyBuffer[1].y = (RK_SCREEN_SAVER_WINDOW_HEIGHT - mouse_y) + agentSize * sin(angle);
//         polyBuffer[2].x = mouse_x + agentSize * cos(360 - angle);
//         polyBuffer[2].y = (RK_SCREEN_SAVER_WINDOW_HEIGHT - mouse_y) + agentSize * sin(360 - angle);
//         polyBuffer[3].x = mouse_x + agentSize * cos(180 + angle);
//         polyBuffer[3].y = (RK_SCREEN_SAVER_WINDOW_HEIGHT - mouse_y) + agentSize * sin(180 + angle);
//         // p1.x = window.mo





//         car.drawPolygon(polyBuffer);


//         //-- Update the Window
//         window.update();
//     }
// }








// // Shader source code
// const char* vertexShaderSource = R"(
// #version 330 core
// layout (location = 0) in vec3 aPos;

// void main() {
//     gl_Position = vec4(aPos, 1.0);
// }
// )";

// const char* fragmentShaderSource = R"(
// #version 330 core
// out vec4 FragColor;

// void main() {
//     FragColor = vec4(1.0, 0.5, 0.2, 1.0);
// }
// )";

// // Function to compile shaders
// GLuint compileShader(GLenum shaderType, const char* source) {
//     GLuint shader = glCreateShader(shaderType);
//     glShaderSource(shader, 1, &source, NULL);
//     glCompileShader(shader);

//     // Check for compile-time errors
//     GLint success;
//     glGetShaderiv(shader, GL_COMPILE_STATUS, &success);
//     if (!success) {
//         char infoLog[512];
//         glGetShaderInfoLog(shader, 512, NULL, infoLog);
//         std::cout << "ERROR::SHADER::COMPILATION_FAILED\n" << infoLog << std::endl;
//     }
//     return shader;
// }

// int main() {
//     // Initialize SDL
//     if (SDL_Init(SDL_INIT_VIDEO) < 0) {
//         std::cerr << "Failed to initialize SDL" << std::endl;
//         return -1;
//     }

//     // Set SDL OpenGL attributes
//     SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 3);
//     SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 3);
//     SDL_GL_SetAttribute(SDL_GL_CONTEXT_PROFILE_MASK, SDL_GL_CONTEXT_PROFILE_CORE);

//     // Create SDL window
//     SDL_Window* window = SDL_CreateWindow(
//         "OpenGL Triangle", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
//         800, 600, SDL_WINDOW_OPENGL | SDL_WINDOW_SHOWN
//     );
//     if (!window) {
//         std::cerr << "Failed to create window" << std::endl;
//         SDL_Quit();
//         return -1;
//     }

//     // Create OpenGL context
//     SDL_GLContext context = SDL_GL_CreateContext(window);
//     if (!context) {
//         std::cerr << "Failed to create OpenGL context" << std::endl;
//         SDL_DestroyWindow(window);
//         SDL_Quit();
//         return -1;
//     }

//     // Initialize GLEW
//     glewExperimental = GL_TRUE;
//     GLenum status = glewInit();
//     if (status != GLEW_OK) {
//         std::cerr << "Failed to initialize GLEW" << std::endl;
//         SDL_DestroyWindow(window);
//         SDL_Quit();
//         return -1;
//     }

//     // Define vertices for the triangle
//     GLfloat vertices[] = {
//         -0.5f, -0.5f, 0.0f,  // bottom left
//          0.5f, -0.5f, 0.0f,  // bottom right
//          0.0f,  0.5f, 0.0f   // top center
//     };

//     // Create VAO and VBO
//     GLuint VAO, VBO;
//     glGenVertexArrays(1, &VAO);
//     glGenBuffers(1, &VBO);

//     // Bind the Vertex Array Object first
//     glBindVertexArray(VAO);

//     // Bind and set the vertex buffer
//     glBindBuffer(GL_ARRAY_BUFFER, VBO);
//     glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);

//     // Configure vertex attributes
//     glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(float), (void*)0);
//     glEnableVertexAttribArray(0);

//     // Unbind VAO (not necessary, but good practice)
//     glBindVertexArray(0);

//     // Compile the vertex and fragment shaders
//     GLuint vertexShader = compileShader(GL_VERTEX_SHADER, vertexShaderSource);
//     GLuint fragmentShader = compileShader(GL_FRAGMENT_SHADER, fragmentShaderSource);

//     // Link shaders to create a shader program
//     GLuint shaderProgram = glCreateProgram();
//     glAttachShader(shaderProgram, vertexShader);
//     glAttachShader(shaderProgram, fragmentShader);
//     glLinkProgram(shaderProgram);

//     // Check for linking errors
//     GLint success;
//     glGetProgramiv(shaderProgram, GL_LINK_STATUS, &success);
//     if (!success) {
//         char infoLog[512];
//         glGetProgramInfoLog(shaderProgram, 512, NULL, infoLog);
//         std::cerr << "ERROR::PROGRAM::LINKING_FAILED\n" << infoLog << std::endl;
//         SDL_DestroyWindow(window);
//         SDL_Quit();
//         return -1;
//     }

//     // Clean up shaders (they are no longer needed once linked)
//     glDeleteShader(vertexShader);
//     glDeleteShader(fragmentShader);

//     // Main render loop
//     bool running = true;
//     SDL_Event event;
//     while (running) {
//         // Handle events
//         while (SDL_PollEvent(&event)) {
//             if (event.type == SDL_QUIT) {
//                 running = false;
//             }
//         }

//         // Render
//         glClear(GL_COLOR_BUFFER_BIT);

//         // Use the shader program and draw the triangle
//         glUseProgram(shaderProgram);
//         glBindVertexArray(VAO);  // Bind the VAO (the triangle)
//         glDrawArrays(GL_TRIANGLES, 0, 3);

//         // Swap buffers
//         SDL_GL_SwapWindow(window);
//     }

//     // Clean up VAO, VBO, and shader program
//     glDeleteVertexArrays(1, &VAO);
//     glDeleteBuffers(1, &VBO);
//     glDeleteProgram(shaderProgram);

//     // Quit SDL subsystems
//     SDL_DestroyWindow(window);
//     SDL_Quit();

//     return 0;
// }


// int main() {
//     logger(RKG_LABEL INFO "Main Function Started");
//     // Variables for fading effect
//     const float PI = 3.14159265f;
//     float time = 0.0f;
//     float fadeSpeed = 0.137f; // Speed of fading
//     Uint32 lastTime = SDL_GetTicks();
//     int width = 737;
//     int height = 737;
//     synwin::SynWindow window("Synestia Graphics", 737, 737);
//     while (true) {
//         Uint32 currentTime = SDL_GetTicks();
//         if (currentTime - lastTime >= 100) { // RK_SCREEN_SAVER_WINDOW_WIDTH milliseconds = 1 second
//             width += 5; // Increase the width by 1 pixel
//             height += 5; // Increase the height by 1 pixel
//             // std::cout << "Width: " << width << " Height: " << height << std::endl;
//             // Resize the window
//             SDL_SetWindowSize(window.getSDLWindow(), width, height);
//             // Center the window on the screen
//             SDL_SetWindowPosition(window.getSDLWindow(), SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED);
//             lastTime = currentTime; // Update the last time
//         }
//         // Calculate RGB values using sine waves with phase shifts for variety
//         int redValue = static_cast<int>((sin(time) + 1.0f) / 2.0f * 255.0f);    // Map to range 0-255
//         int greenValue = static_cast<int>((sin(time + 2.0f) + 1.0f) / 2.0f * 255.0f); // Phase shift for green
//         int blueValue = static_cast<int>((sin(time + 4.0f) + 1.0f) / 2.0f * 255.0f);  // Phase shift for blue
//         float sineValue = sin(time);
//         int colorValue = static_cast<int>((sineValue + 1.0f) / 2.0f * 155.0f) + 10; // Map sineValue to range 100-255

//         // Increase time to create oscillation
//         time += fadeSpeed; // Faster increase for quicker fading

//         // Clear and update the window with calculated color values
//         window.clear(redValue, greenValue, blueValue, colorValue); // Use RGB values for color fading
//         window.update();

//         // Optional: delay to reduce CPU usage
//         // SDL_Delay(16); // Roughly 60 FPS
//         // window.clear();
//         // window.update();
//     }
//     return 0;
// }