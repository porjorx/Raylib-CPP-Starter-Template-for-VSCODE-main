#include <iostream>
#include <raylib.h>

using namespace std;
Color darkgreen = {43,51,24,255};
Color lightBlue = {226, 240, 243, 255};

int cellSize = 30;
// int cellSize2 = 9;
int cellCount = 25;

class doraemon
{
public :
    Vector2 position ={2,6};
    Texture2D texture;
   

    doraemon()
    {
        Image image = LoadImage("gg/doraemon.png");
        texture = LoadTextureFromImage(image);
        UnloadImage(image);

    }
    ~doraemon()
    {
        UnloadTexture(texture);
    }
    void Draw()
    {
        DrawTexture(texture,position.x*20,position.y*30,WHITE);

    }




};
class dora
{
public :
    Vector2 position ={2,6};
    Texture2D texture;
   

    dora()
    {
        Image image = LoadImage("gg/dora.png");
        texture = LoadTextureFromImage(image);
        UnloadImage(image);

    }
    ~dora()
    {
        UnloadTexture(texture);
    }
    void Draw()
    {
        DrawTexture(texture,position.x*120,position.y*10,WHITE);

    }




};

class nobe
{
public :
    Vector2 position ={2,6};
    Texture2D texture;
   

    nobe()
    {
        Image image = LoadImage("gg/nobe.png");
        texture = LoadTextureFromImage(image);
        UnloadImage(image);

    }
    ~nobe()
    {
        UnloadTexture(texture);
    }
    void Draw()
    {
        DrawTexture(texture,position.x*220,position.y*30,WHITE);

    }




};
class rat
{
public :
    Vector2 position ={2,6};
    Texture2D texture;
   

    rat()
    {
        Image image = LoadImage("gg/rat.png");
        texture = LoadTextureFromImage(image);
        UnloadImage(image);

    }
    ~rat()
    {
        UnloadTexture(texture);
    }
    void Draw()
    {
        DrawTexture(texture,position.x*320,position.y*63,WHITE);

    }




};

class dora2
{
public :
    Vector2 position ={2,6};
    Texture2D texture;
   

    dora2()
    {
        Image image = LoadImage("gg/dora2.png");
        texture = LoadTextureFromImage(image);
        UnloadImage(image);

    }
    ~dora2()
    {
        UnloadTexture(texture);
    }
    void Draw()
    {
        DrawTexture(texture,position.x*10,position.y*73,WHITE);

    }




};
class che
{
public :
    Vector2 position ={2,6};
    Texture2D texture;
   

    che()
    {
        Image image = LoadImage("gg/che.png");
        texture = LoadTextureFromImage(image);
        UnloadImage(image);

    }
    ~che()
    {
        UnloadTexture(texture);
    }
    void Draw()
    {
        DrawTexture(texture,position.x*60,position.y*75,WHITE);

    }




};
class papa1
{
public :
    Vector2 position ={2,6};
    Texture2D texture;
   

    papa1()
    {
        Image image = LoadImage("gg/papa.png");
        texture = LoadTextureFromImage(image);
        UnloadImage(image);

    }
    ~papa1()
    {
        UnloadTexture(texture);
    }
    void Draw()
    {
        DrawTexture(texture,position.x*60,position.y*3,WHITE);

    }




};
class papa2
{
public :
    Vector2 position ={2,6};
    Texture2D texture;
   

    papa2()
    {
        Image image = LoadImage("gg/papa.png");
        texture = LoadTextureFromImage(image);
        UnloadImage(image);

    }
    ~papa2()
    {
        UnloadTexture(texture);
    }
    void Draw()
    {
        DrawTexture(texture,position.x*60,position.y*32,WHITE);

    }




};
class red1
{
public :
    Vector2 position ={2,6};
    Texture2D texture;
   

    red1()
    {
        Image image = LoadImage("gg/red.png");
        texture = LoadTextureFromImage(image);
        UnloadImage(image);

    }
    ~red1()
    {
        UnloadTexture(texture);
    }
    void Draw()
    {
        DrawTexture(texture,position.x*360,position.y*3,WHITE);

    }




};
class red2
{
public :
    Vector2 position ={2,6};
    Texture2D texture;
   

    red2()
    {
        Image image = LoadImage("gg/red.png");
        texture = LoadTextureFromImage(image);
        UnloadImage(image);

    }
    ~red2()
    {
        UnloadTexture(texture);
    }
    void Draw()
    {
        DrawTexture(texture,position.x*385,position.y*3,WHITE);

    }




};
class red3
{
public :
    Vector2 position ={2,6};
    Texture2D texture;
   

    red3()
    {
        Image image = LoadImage("gg/red.png");
        texture = LoadTextureFromImage(image);
        UnloadImage(image);

    }
    ~red3()
    {
        UnloadTexture(texture);
    }
    void Draw()
    {
        DrawTexture(texture,position.x*410,position.y*3,WHITE);

    }




};
class red4
{
public :
    Vector2 position ={2,6};
    Texture2D texture;
   

    red4()
    {
        Image image = LoadImage("gg/red.png");
        texture = LoadTextureFromImage(image);
        UnloadImage(image);

    }
    ~red4()
    {
        UnloadTexture(texture);
    }
    void Draw()
    {
        DrawTexture(texture,position.x*435,position.y*3,WHITE);

    }




};
class red5
{
public :
    Vector2 position ={2,6};
    Texture2D texture;
   

    red5()
    {
        Image image = LoadImage("gg/red.png");
        texture = LoadTextureFromImage(image);
        UnloadImage(image);

    }
    ~red5()
    {
        UnloadTexture(texture);
    }
    void Draw()
    {
        DrawTexture(texture,position.x*460,position.y*3,WHITE);

    }




};
int main () 
{
    cout << "starting the game..."<< endl;
    InitWindow(1000,500 ,"doraemon");
    SetTargetFPS(60);

    doraemon Doraemon = doraemon();
    dora Dora = dora();
    nobe Nobe = nobe();
    rat Rat = rat ();
    dora2 Dora2 = dora2();
    che Che = che();
    papa1 Papa1 = papa1();
    papa2 Papa2 = papa2();
    red1 Rad1 = red1();
    red2 Rad2 = red2();
    red3 Rad3 = red3();
    red4 Rad4 = red4();
    red5 Rad5 = red5();

    while (WindowShouldClose () == false)
    {
        BeginDrawing();

        ClearBackground(lightBlue);
        Doraemon.Draw();
        Dora.Draw();
        Nobe.Draw();
        Rat.Draw();
        Dora2.Draw();
        Che.Draw();
        Papa1.Draw();
        Papa2.Draw();
        Rad1.Draw();
        Rad2.Draw();
        Rad3.Draw();
        Rad4.Draw();
        Rad5.Draw();
        EndDrawing ();





    }
    CloseWindow();
    return 0;

}

   