#include <iostream>
#include <raylib.h>

using namespace std;
Color darkgreen = {43,51,24,255};
Color lightBlue = {226, 240, 243, 255};

int cellSize = 30;
// int cellSize2 = 9;
int cellCount = 25;
double lastupdatetime=0;

bool evenTriggered(double interval)
{
    double currentTime = GetTime();
    if(currentTime - lastupdatetime>=interval){
        lastupdatetime = currentTime;
        return true;
    }
    return false;
}

int getRandomYPosition()
{
    int choices[3] = {60, 180, 378};
    return (float)choices[GetRandomValue(0, 2)];
}
class doraemon
{
public :
    
    Vector2 position ={2,0};
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
class dora //dorayaki
{
public :
    Vector2 position ={2,0};
    Texture2D texture;
    
    dora()
    {
        Image image = LoadImage("gg/dora.png");
        texture = LoadTextureFromImage(image);
        UnloadImage(image);
        position.y = getRandomYPosition();
    }
    ~dora()
    {
        UnloadTexture(texture);
    }
    void Draw()
    {
        DrawTexture(texture,position.x*120,position.y,WHITE);

    }

    void Update_dora()
    {
        position.x-=0.01;
        
    }

};

class nobe //nobita
{
public :
    Vector2 position ={2,6};
    Texture2D texture;
  

    nobe()
    {
        Image image = LoadImage("gg/nobe.png");
        texture = LoadTextureFromImage(image);
        UnloadImage(image);
        position.y = getRandomYPosition();
    }
    ~nobe()
    {
        UnloadTexture(texture);
    }
    void Draw()
    {
        DrawTexture(texture,position.x*220,position.y,WHITE);

    }

    void Update_nobe()
    {
        position.x-=0.01;
        
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
        position.y = getRandomYPosition();
    }
    ~rat()
    {
        UnloadTexture(texture);
    }
    void Draw()
    {
        DrawTexture(texture,position.x*320,position.y,WHITE);

    }

    void Update_rat()
    {
        position.x-=0.01;
        
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

    void Update_che()
    {
        position.x-=1;
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

class game{
public:
    doraemon Doraemon = doraemon();
    dora Dora = dora();
    nobe Nobe = nobe();
    rat Rat = rat ();
    che Che = che();

    void update(){
        Dora.Update_dora();
        Nobe.Update_nobe();
        Rat.Update_rat();
        Che.Update_che();
    }
    void CheckcollisionWithFood(){
        //mon y 0 6 12
        
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
    game Game = game();

    while (WindowShouldClose () == false)
    {
        // if()
        if(evenTriggered(0.02)){
            Dora.Update_dora();
            Rat.Update_rat();
            Nobe.Update_nobe();
        }
        if(IsKeyPressed(KEY_W)){
            Doraemon.position.y+=6;
        }
        if(IsKeyPressed(KEY_S)){
            Doraemon.position.y-=6;
        }
        if(Nobe.position.x<=0.6){
            Nobe.position.x+=10;
            
            float oldY = Nobe.position.y;
            float newY;
            do {
                newY = getRandomYPosition();
            } while (newY == oldY);
            Nobe.position.y = newY;
        }
        if(Dora.position.x<=0.6){
            Dora.position.x+=10;
            //cout<<Dora.position.x<<endl;
        }
        if(Rat.position.x<=0.6){
            Rat.position.x;
        }
        //บน 60 กลาง 180 ล่าง 378
        
        //3.Drawing
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
   