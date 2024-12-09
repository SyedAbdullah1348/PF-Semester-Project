//#include <SFML/Graphics.hpp>
//#include <SFML/Window.hpp>
//#include <SFML/System.hpp>
//
//int main() {
//    // Create the window
//    sf::RenderWindow window(sf::VideoMode(1015, 595), "17x29 Flame Animation Grid");
//    window.setFramerateLimit(60);
//
//    // Load the texture
//    sf::Texture flameTexture;
//    if (!flameTexture.loadFromFile("flame.jpg")) { // Update with the correct path
//        return -1; // Exit if failed to load texture
//    }
//
//    // Animation variables
//    const int frameWidth = 94.8;   // Width of each frame
//    const int frameHeight = 145;  // Height of each frame
//    const int numFrames = 15;     // Total number of frames
//    const int framesPerRow = 5;   // Number of frames in each row of the sprite sheet
//    sf::Time frameDuration = sf::milliseconds(100); // Time per frame
//
//    // Create a 2D array of flames (17x29 grid)
//    const int gridRows = 17;
//    const int gridCols = 29;
//
//    sf::RectangleShape flames[gridRows][gridCols]; // Raw array of flame shapes
//    int currentFrames[gridRows][gridCols] = { 0 };   // Raw array to track the current animation frame
//    sf::Clock animationClock;
//
//    // Initialize flames
//    const float tileSize = 35.0f; // Size and spacing for the flames
//    for (int row = 0; row < gridRows; ++row) {
//        for (int col = 0; col < gridCols; ++col) {
//            if (row == 0 || col == 0 || row == gridRows - 1 || col == gridCols - 1) {
//                // Create and position each flame
//                flames[row][col] = sf::RectangleShape(sf::Vector2f(tileSize, tileSize));
//                flames[row][col].setTexture(&flameTexture);
//                flames[row][col].setPosition(col * tileSize, row * tileSize);
//            }
//        }
//    }
//
//    while (window.isOpen()) {
//        // Event handling
//        sf::Event event;
//        while (window.pollEvent(event)) {
//            if (event.type == sf::Event::Closed) {
//                window.close();
//            }
//        }
//
//        // Update animation for each flame
//        if (animationClock.getElapsedTime() > frameDuration) {
//            for (int row = 0; row < gridRows; ++row) {
//                for (int col = 0; col < gridCols; ++col) {
//                    if (row == 0 || col == 0 || row == gridRows - 1 || col == gridCols - 1) {
//                        // Update the current frame
//                        currentFrames[row][col] = (currentFrames[row][col] + 1) % numFrames;
//
//                        // Calculate the texture rectangle
//                        int x = (currentFrames[row][col] % framesPerRow) * frameWidth; // Column in the sprite sheet
//                        int y = (currentFrames[row][col] / framesPerRow) * frameHeight; // Row in the sprite sheet
//                        flames[row][col].setTextureRect(sf::IntRect(x, y, frameWidth, frameHeight));
//                    }
//                }
//            }
//            animationClock.restart();
//        }
//
//        // Render all flames
//        window.clear();
//        for (int row = 0; row < gridRows; ++row) {
//            for (int col = 0; col < gridCols; ++col) {
//                if (row == 0 || col == 0 || row == gridRows - 1 || col == gridCols - 1) {
//                    window.draw(flames[row][col]);
//                }
//            }
//        }
//        window.display();
//    }
//
//    return 0;
//}
