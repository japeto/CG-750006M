// Borland Graphics Interface (BGI) for Windows
// 
#include <graphics.h>

int main(){
    //global vars
    int gd = DETECT, gm;
    // initialize graphics system
    initgraph(&gd, &gm, "");

    //random color to line1
    setcolor(random(15));
    // line for x1, y1, x2, y2
    line(150, 150, 450, 150);
    //random color to line2
    setcolor(random(15));
    // line for x1, y1, x2, y2
    line(150, 200, 450, 200);
    
    //color 4 to circle
    setcolor(4);
    // draw a circle
    circle(320, 240, 0, 360, 100);
    //color 4 to eclipse
    setcolor(4);
    // draw a ellipse
    ellipse(320, 240, 0, 360, 50, 100);
    //color 4 to rectangle
    setcolor(4);
    // draw a rectangle
    rectangle(0, 0, 100, 200);
    //color 2 to bar
    setcolor(2);
    // draw a bar
    bar(0, 0, 200, 20);

    settextstyle(4,0,6);
    outtextxy(200, 100, "Texto de Prueba");
    
    // capture device
    getch();
    // deallocate graphics system
    closegraph();
}
//
//// documentation
// https://home.cs.colorado.edu/~main/bgi/doc/
// http://chuwiki.chuidiang.org/index.php?title=Gr%C3%A1ficos_Usando_graphics.h