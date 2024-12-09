//#include <SFML/Graphics.hpp>
//#include <SFML/Window.hpp>
//#include <SFML/System.hpp>
//#include <SFML/Audio.hpp>
//#include <iostream>
//#include <fstream>
//#include<iomanip>
//
//using namespace std;
//using namespace sf;
//
//
//int main()
//{
//
//    // Declarations
//
//   
//    RenderWindow gameplay(VideoMode(1160, 680), "The Maze Runner : Level 3", Style::Default);
//    gameplay.setFramerateLimit(60);
//
//    //Auto maximise
//    VideoMode desktopMode = VideoMode::getDesktopMode();
//    gameplay.setSize(Vector2u(desktopMode.width - 2, desktopMode.height - 39));
//    gameplay.setPosition(Vector2i(-7, -33));
//    cout << gameplay.getSize().x << endl;
//
//
//    char arr[17][29];
//    Sprite maze[17][29];
//
//    //Gameover flag
//    bool gameOver = false;
//
//    //Font
//    Font font;
//    font.loadFromFile("KnightWarrior.otf");
//
//    //Sprites
//    Sprite flame;
//
//    // Load maze from file
//    ifstream file("maze.txt");
//    for (int i = 0; i < 17; i++) {
//        for (int j = 0; j < 29; j++) {
//            file >> arr[i][j];
//        }
//    }
//    file.close();
//
//
//    // Initialize maze tiles
//    for (int i = 0; i < 17; i++) {
//        for (int j = 0; j < 29; j++)
//        {
//            if (arr[i][j] == 'o')
//                maze[i][j] = flame;
//
//            maze[i][j].setPosition(j * 40, i * 40);
//        }
//    }
//
//    //Main loop
//    while (gameplay.isOpen() && gameOver == false)
//    {
//        Event evnt;
//        while (gameplay.pollEvent(evnt)) {
//            if (evnt.type == Event::Closed) {
//                gameplay.close();
//                return 0;
//            }
//            if (Keyboard::isKeyPressed(Keyboard::Key::Escape)) {
//                gameplay.close();
//            }
//        }
//
//
//
//        
//    return 0;
//}
