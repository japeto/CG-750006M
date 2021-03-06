#include <math.h>       /* round, floor, ceil, trunc */

#include<iostream>
using namespace std;
 
void drawLineBasic(int x1, int y1, int x2, int y2){
    float dx=abs(x2-x1);
    float dy=abs(y2-y1);
    float m = dy/dx;
    if (m >= 0 && m <= 1){
        float xi, yi;
        int i = x1;
        yi=y1;
        while(i <= x2){
            xi = i;
            cout << "(" << xi << ", " << yi << ") \n";
            yi = roundf(yi+m);
            i=i+1;
        }
    }
}
 
// Driver code
int main()
{
    // To draw a circle of radius 3 centered at (0, 0)
    drawLineBasic(100, 100, 150, 150);
    return 0;
}