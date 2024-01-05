//Tashfeen Abbasi
//i22-2041
//DS-D
#include <SFML/Graphics.hpp>
#include <time.h>
#include <iostream>
using namespace sf;

int ts = 54; //tile size
Vector2i offset(48,24);

// assigning images to textures
void loadTextures(Texture& m, Texture& o, Texture& t1, Texture& t2) {
    m.loadFromFile("./Menu.png");
    o.loadFromFile("./Over.png");
    t1.loadFromFile("./background.png");
    t2.loadFromFile("./animals.png");
}


// assiging textures to sprites
void assignTexture(Texture t1, Texture t2, Texture m, Texture o, Sprite& menu, Sprite& gameOver, Sprite& backgrouns, Sprite& gems) {
    menu.setTexture(m);
    gameOver.setTexture(o);
    backgrouns.setTexture(t1);
    gems.setTexture(t2);
}

// assiging default values to grid elements
void assignDefaultValues(int gridKind[][10], int gridCol[][10], int gridRow[][10], int gridX[][10], int gridY[][10], int gridMatch[][10], int gridAlpha[][10]) {
    for (int i = 1; i <= 8; i++){
        for (int j = 1; j <= 8; j++) {   
            gridKind[i][j] = rand() % 3; 
            gridCol[i][j] = j;
            gridRow[i][j] = i;
            gridX[i][j] = j * ts;
            gridY[i][j] = i * ts;
            gridMatch[i][j] = 0;
            gridAlpha[i][j] = 255;
        }
    }
}

// swaping elements
void swap(int gridKind[][10], int gridCol[][10], int gridRow[][10], int gridX[][10], int gridY[][10], int gridMatch[][10], int gridAlpha[][10], int x0, int y0, int x, int y) {
    int p1Row = gridRow[y][x];
    int p1Col = gridCol[y][x];
    int p1Kind = gridKind[y0][x0];
    int p1X = gridX[y0][x0];
    int p1Y = gridY[y0][x0];
    int p1Match = gridMatch[y0][x0];
    int p1Alpha = gridAlpha[y0][x0];

    int p2Row = gridRow[y0][x0];
    int p2Col = gridCol[y0][x0];
    int p2Kind = gridKind[y][x];
    int p2X = gridX[y][x];
    int p2Y = gridY[y][x];
    int p2Match = gridMatch[y][x];
    int p2Alpha = gridAlpha[y][x];


    gridRow[p1Row][p1Col] = p1Row;
    gridCol[p1Row][p1Col] = p1Col;
    gridKind[p1Row][p1Col] = p1Kind;
    gridX[p1Row][p1Col] = p1X;
    gridY[p1Row][p1Col] = p1Y;
    gridMatch[p1Row][p1Col] = p1Match;
    gridAlpha[p1Row][p1Col] = p1Alpha;

    gridRow[p2Row][p2Col] = p2Row;
    gridCol[p2Row][p2Col] = p2Col;
    gridKind[p2Row][p2Col] = p2Kind;
    gridX[p2Row][p2Col] = p2X;
    gridY[p2Row][p2Col] = p2Y;
    gridMatch[p2Row][p2Col] = p2Match;
    gridAlpha[p2Row][p2Col] = p2Alpha;
}

// finding matching animal pairs
void finMatch(int gridKind[][10], int gridMatch[][10]) {
    for (int i = 1; i <= 8; i++)
        for (int j = 1; j <= 8; j++)
        {
            if (gridKind[i][j] == gridKind[i + 1][j])
                if (gridKind[i][j] == gridKind[i - 1][j])
                    for (int n = -1; n <= 1; n++) gridMatch[i + n][j]++;

            if (gridKind[i][j] == gridKind[i][j + 1])
                if (gridKind[i][j] == gridKind[i][j - 1])
                    for (int n = -1; n <= 1; n++) gridMatch[i][j + n]++;
        }
}

// swapping closer animal animation
void moveAmination(int gridX[][10], int gridY[][10], int gridCol[][10], int gridRow[][10], bool& isMoving) {
    isMoving = false;
    for (int i = 1; i <= 8; i++)
        for (int j = 1; j <= 8; j++)
        {
            int dx, dy;
            for (int n = 0; n < 4; n++)   // 4 - speed
            {
                dx = gridX[i][j] - gridCol[i][j] * ts;
                dy = gridY[i][j] - gridRow[i][j] * ts;
                if (dx) gridX[i][j] -= dx / abs(dx);
                if (dy) gridY[i][j] -= dy / abs(dy);
            }
            if (dx || dy) isMoving = 1;
        }
}

// removing animation of elemets that are similar
void removeAnimation(bool& isMoving, int gridMatch[][10], int gridAlpha[][10]) {
    if (!isMoving)
        for (int i = 1; i <= 8; i++)
            for (int j = 1; j <= 8; j++)
                if (gridMatch[i][j]) if (gridAlpha[i][j] > 10) { gridAlpha[i][j] -= 10; isMoving = true; }
}

// displaying elemsts on screen (mostly images)
void addItems(Sprite& gems, RenderWindow& app, int gridX[][10], int gridKind[][10], int gridY[][10], int gridAlpha[][10]) {
    for (int i = 1; i <= 8; i++)
        for (int j = 1; j <= 8; j++)
        {
            gems.setTextureRect(IntRect(gridKind[i][j] * 49, 0, 49, 49));
            gems.setColor(Color(255, 255, 255, gridAlpha[i][j]));
            gems.setPosition(gridX[i][j], gridY[i][j]);
            gems.move(offset.x - ts, offset.y - ts);
            app.draw(gems);
        }
}

int main()
{
    Texture t1, t2, m, o;
    Sprite menu, gameover, background, gems;
    Event e;
    loadTextures(m, o, t1, t2);
    menu.setTexture(m);
    gameover.setTexture(o);
    background.setTexture(t1);
    gems.setTexture(t2);
    int moves = 5;

    int gridX[10][10];
    int gridY[10][10];
    int gridCol[10][10];
    int gridRow[10][10];
    int gridKind[10][10];
    int gridMatch[10][10];
    int gridAlpha[10][10];
    bool flag = false;
    srand(time(0));

    RenderWindow app(VideoMode(740,480), "PF Project Game");
    app.setFramerateLimit(60);

   
    assignDefaultValues(gridKind, gridCol, gridRow, gridX, gridY, gridMatch, gridAlpha);

    
    int x0,y0,x,y; int click=0; Vector2i pos;
    bool isSwap=false, isMoving=false;

    bool showMenu = true, showGameOver = false, showGame= false;

    while (app.isOpen())
    {
        if (showGame == true) {
            while (app.pollEvent(e))
            {
                if (e.type == Event::Closed)
                    app.close();

                if (e.type == Event::MouseButtonPressed)
                    if (e.key.code == Mouse::Left)
                    {
                        if (!isSwap && !isMoving) if (click < 2) click++;
                        pos = Mouse::getPosition(app) - offset;
                    }
            }

            if (moves <= 0) {
                showGameOver = true;
                showGame = false;
                moves = 20;
            }

            // mouse click
            if (click == 1)
            {
                x0 = pos.x / ts + 1;
                y0 = pos.y / ts + 1;
            }
            if (click == 2)
            {
                x = pos.x / ts + 1;
                y = pos.y / ts + 1;
                moves--;
                if (abs(x - x0) + abs(y - y0) == 1) {
                    swap(gridKind, gridCol, gridRow, gridX, gridY, gridMatch, gridAlpha, x0, y0, x, y);
                    isSwap = 1;
                    click = 0;
                    flag = true;
                }
                else click = 1;
            }



            //Match finding
            finMatch(gridKind, gridMatch);
            

            //Moving animation
            moveAmination(gridX, gridY, gridCol, gridRow, isMoving);

            //Deleting amimation
            removeAnimation(isMoving, gridMatch, gridAlpha);

            //Get score
            int score = 0;
            for (int i = 1; i <= 8; i++)
                for (int j = 1; j <= 8; j++)
                    score += gridMatch[i][j];

            //Second swap if no match
            if (isSwap && !isMoving) {
                if (!score) {
                    swap(gridKind, gridCol, gridRow, gridX, gridY, gridMatch, gridAlpha, x0, y0, x, y);
                    
                    isSwap = 0;
                }
            }

            //Update grid
            if (!isMoving)
            {
                for (int i = 8; i > 0; i--)
                    for (int j = 1; j <= 8; j++)
                        if (gridMatch[i][j])
                            for (int n = i; n > 0; n--)
                                if (!gridMatch[n][j]) {
                                    int p1Row = gridRow[i][j];
                                    int p1Col = gridCol[i][j];
                                    int p1Kind = gridKind[n][j];
                                    int p1X = gridX[n][j];
                                    int p1Y = gridY[n][j];
                                    int p1Match = gridMatch[n][j];
                                    int p1Alpha = gridAlpha[n][j];

                                    int p2Row = gridRow[n][j];
                                    int p2Col = gridCol[n][j];
                                    int p2Kind = gridKind[i][j];
                                    int p2X = gridX[i][j];
                                    int p2Y = gridY[i][j];
                                    int p2Match = gridMatch[i][j];
                                    int p2Alpha = gridAlpha[i][j];

                                    gridRow[p1Row][p1Col] = p1Row;
                                    gridCol[p1Row][p1Col] = p1Col;
                                    gridKind[p1Row][p1Col] = p1Kind;
                                    gridX[p1Row][p1Col] = p1X;
                                    gridY[p1Row][p1Col] = p1Y;
                                    gridMatch[p1Row][p1Col] = p1Match;
                                    gridAlpha[p1Row][p1Col] = p1Alpha;

                                    gridRow[p2Row][p2Col] = p2Row;
                                    gridCol[p2Row][p2Col] = p2Col;
                                    gridKind[p2Row][p2Col] = p2Kind;
                                    gridX[p2Row][p2Col] = p2X;
                                    gridY[p2Row][p2Col] = p2Y;
                                    gridMatch[p2Row][p2Col] = p2Match;
                                    gridAlpha[p2Row][p2Col] = p2Alpha;

                                    break;
                                };

                for (int j = 1; j <= 8; j++)
                    for (int i = 8, n = 0; i > 0; i--)
                        if (gridMatch[i][j])
                        {
                            gridKind[i][j] = rand() % 7;
                            gridY[i][j] = -ts * n++;
                            gridMatch[i][j] = 0;
                            gridAlpha[i][j] = 255;
                        }
            }


            //////draw///////
            app.draw(background);
            addItems(gems, app, gridX, gridKind, gridY, gridAlpha);
            
            flag = false;
        }
        
        if (showMenu) {
            app.draw(menu);
            while (app.pollEvent(e))
            {
                if (e.type == Event::Closed)
                    app.close();

                if (e.type == Event::MouseButtonPressed)
                    if (e.key.code == Mouse::Left)
                    {
                        if (Mouse::getPosition(app).x > 130 && Mouse::getPosition(app).x < 560 && Mouse::getPosition(app).y < 293 && Mouse::getPosition(app).y > 187) {
                            showGame = true;
                            showMenu = false;
                        }
                    }
            }
        }

        if (showGameOver) {
            app.draw(gameover);
            while (app.pollEvent(e))
            {
                if (e.type == Event::Closed)
                    app.close();

                if (e.type == Event::MouseButtonPressed)
                    if (e.key.code == Mouse::Left)
                    {
                        if (Mouse::getPosition(app).x > 130 && Mouse::getPosition(app).x < 560 && Mouse::getPosition(app).y < 293 && Mouse::getPosition(app).y > 187) {
                            showGame = true;
                            showGameOver = false;
                        }

                        if (Mouse::getPosition(app).x > 130 && Mouse::getPosition(app).x < 560 && Mouse::getPosition(app).y < 415 && Mouse::getPosition(app).y > 309) {
                            showMenu = true;
                            showGameOver = false;
                        }
                    }
            }
        }

     app.display();
    }
    return 0;
}
