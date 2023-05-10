// Maja
#include <graphics.h>
main()
{
    int gd = DETECT,gm;
    initgraph(&gd, &gm, "Test");
    setcolor(BLUE);

    rectangle(150,180,420,300);           // prjamougoljniki
    rectangle(290,220,330,250);
    rectangle(200,220,260,250);
    rectangle(350,220,400,300);

    line(200,100,150,180);                // linii
    line(200,100,370,100);
    line(370,100,420,180);

    setfillstyle(SOLID_FILL, YELLOW);    //cvet doma - zheltij
    floodfill(152,200, BLUE);
    setfillstyle(SOLID_FILL, RED);       // cvet krishi - krasnij
    floodfill(200,105, BLUE);

    circle(290,150,20);                  //koordinati kruglogo okna i ego okraska
    setfillstyle(SLASH_FILL, LIGHTBLUE);
    floodfill(280,150, BLUE);
    setfillstyle(SOLID_FILL, LIGHTBLUE); // koordinati prjamougolnih okon i ih okraska
    floodfill(220,240, BLUE);
    setfillstyle(SOLID_FILL, LIGHTBLUE);
    floodfill(300,240, BLUE);
    setfillstyle(SOLID_FILL, RED);       // koordinati dveri i ejo okraska
    floodfill(360,240, BLUE);

    outtextxy(365,190," Maja 1 ");       // nadpisj i ejo koordinati


for(int i=0;i<670;i++)                    // animacija zeljonoj travi
    {
    setcolor(GREEN);
    circle(0+i, 380,80);

    if(i==700)i=0;
    delay(10);
}
    getch();
    closegraph();
    return 0;
}
