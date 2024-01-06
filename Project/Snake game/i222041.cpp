/*
Tashfeen Abbasi
i22-2041
Snake Game
abbasitashfeen7@gmail.com
*/

#include <GL/glut.h>
#include<ctime>
#include <time.h>
#include<cmath>      
//using namespace std;

GLfloat colors[][3] =
{
    {1.0, 0.0, 0.0}, // Red
    {0.0, 1.0, 0.0}, // Green
    {0.0, 0.0, 1.0}, // Blue
};

#define GLUT_YELLOW 1 
int N = 30;
int M = 20;
int size = 16;
int w = size * N;
int h = size * M;
int dir;
int num = 4;
int snakeX[100];
int snakeY[100];
int fruitX;
int fruitY;


void SetCanvasSize(int width, int height) 
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0, width, 0, height, -1, 1);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}

void DrawSquare(float x, float y)
{
    glBegin(GL_QUADS);
    glVertex2f(x, y);
    glVertex2f(x + size, y);
    glVertex2f(x + size, y + size);
    glVertex2f(x, y + size);
    glEnd();
}
double startx = 320, starty = 400;
const int boardSize = 650; 
int gameBoard[boardSize][boardSize]; 
int foodX, foodY, a;

void Food() 
{
    srand(static_cast<unsigned int>(std::time(nullptr)));

    for (int i = 0; i < 5; i++) {
        foodX = rand() % boardSize;
        foodY = rand() % boardSize;
        a = foodX;
        glColor3f(1.0, 0.0, 0.0); // Red color
        DrawSquare(fruitX * size, fruitY * size);
    }
}

void Tick()
{
    for (int i = num; i > 0; --i)
    {
        snakeX[i] = snakeX[i - 1];
        snakeY[i] = snakeY[i - 1];
    }
    if (dir == 0)
    {
        snakeY[0] += 1;
    }
    if (dir == 1)
    {
        snakeX[0] -= 1;
    }
    if (dir == 2)
    {
        snakeX[0] += 1;
    }
    if (dir == 3)
    {
        snakeY[0] -= 1;
    }
    if ((snakeX[0] == fruitX) && (snakeY[0] == fruitY))
    {
        num++;
        fruitX = rand() % N;
        fruitY = rand() % M;
    }

    if (snakeX[0] > N)
    {
        snakeX[0] = 0;
    }
    if (snakeX[0] < 0)
    {
        snakeX[0] = N;
    }
    if (snakeY[0] > M)
    {
        snakeY[0] = 0;
    }
    if (snakeY[0] < 0)
    {
        snakeY[0] = M;
    }

    for (int i = 1; i < num; i++)
    {
        if (snakeX[0] == snakeX[i] && snakeY[0] == snakeY[i])
        {
            num = i;
        }
    }
}
void DrawString(float x, float y, const char* str, float color[3])
{
    glColor3fv(color);
    glRasterPos2f(x, y);
    for (int i = 0; str[i] != '\0'; ++i)
    {
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, str[i]);
    }
}
void DrawLine(float x1, float y1, float x2, float y2, int lwidth, float color[3])
{
    glColor3fv(color);
    glLineWidth(lwidth);
    glBegin(GL_LINES);
    glVertex2f(x1, y1);
    glVertex2f(x2, y2);
    glEnd();
}
void DrawCircle(float x, float y, float radius)
{
    glBegin(GL_TRIANGLE_FAN);
    for (int i = 0; i < 360; i++)
    {
        float theta = i * (3.1415926 / 180.0);
        float dx = radius * cos(theta);
        float dy = radius * sin(theta);
        glVertex2f(x + dx, y + dy);
    }
    glEnd();
}
void DrawSnake()
{
    for (int i = 0; i < num; i++)
    {
        if (i == 0)
            glColor3f(1.0, 0.0, 0.0); // Red color for the head
        else
            glColor3f(0.0, 1.0, 0.0); // Green color for the body
        if (i == 0)
            DrawCircle(snakeX[i] * size + size / 2.0, snakeY[i] * size + size / 2.0, size / 2.0);
        else
            DrawSquare(snakeX[i] * size, snakeY[i] * size);
    }
}
void RestrictSnake()
{
    if (snakeX[0] >= N)
    {
        snakeX[0] = N - 1;
    }
    if (snakeX[0] < 0)
    {
        snakeX[0] = 0;
    }
    if (snakeY[0] >= M)
    {
        snakeY[0] = M - 1;
    }
    if (snakeY[0] < 0)
    {
        snakeY[0] = 0;
    }
}
void display()
{
    glClearColor(0.0, 0.0, 0.5, 0.0);
    glClear(GL_COLOR_BUFFER_BIT);     

    DrawString(50, 600, "Here are some basic shapes", colors[GLUT_YELLOW]);
    DrawString(50, 570, "You will use these to make your game", colors[GLUT_YELLOW]);

    DrawLine(550, 50, 550, 600, 20, colors[GLUT_YELLOW]);

    DrawSnake();
    RestrictSnake();
    Food();

    glutSwapBuffers();
}
void keyboard(int key, int, int)
{
    switch (key)
    {
    case GLUT_KEY_UP:
        dir = 3;
        break;
    case GLUT_KEY_DOWN:
        dir = 0;
        break;
    case GLUT_KEY_LEFT:
        dir = 1;
        break;
    case GLUT_KEY_RIGHT:
        dir = 2;
        break;
    }
}
void timer(int)
{
    glutPostRedisplay();
    Tick();
    glutTimerFunc(100, timer, 0); 
}
int main(int argc, char** argv)
{
    srand(time(0));
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutCreateWindow("Snake Game!");
    glutInitWindowSize(w, h);
    gluOrtho2D(0, w, 0, h);
    glutDisplayFunc(display);
    glutSpecialFunc(keyboard);
    glutTimerFunc(100, timer, 0); 
    fruitX = 10;
    fruitY = 10;
    glutMainLoop();
    return 0;
}