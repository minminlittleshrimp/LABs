
#include "shape.h"
#include "rectangle.h"
#include "triangle.h"
#include "circle.h"


int main(){
    // rw: rectangle width, rh: rectangle height
    // bottom-left point coordinate: (rx, ry)
    double rw(2.0), rh(3.5);
    double rx(1.0), ry(1.0);
    Rectangle<double> r(rw,rh);
    r.setCoord(rx, ry);

    //th: triangle height, rb: triangle base
    //bottom-left point coordinate: (tx, ty)
    double th(1.0), tb(3.5);
    double tx(5.0), ty(5.0);
    Triangle<double> t(th, tb);
    t.setCoord(tx,ty);

    //cr: circle ridius
    // center cooridinate: (cx, cy)
    double cr(2.5);
    double cx(0.0), cy(0.0);
    Circle<double> c(cr);
    c.setCoord(cx,cy);

    Shape<double>* polygons [3];
    polygons[0] = &r;
    polygons[1] = &t;
    polygons[2] = &c;

    double sumArea = 0.0;
    for (int i = 0; i<3; ++i) {
        polygons[i]->print();
        sumArea += polygons[i]->getArea();
        cout << endl;
    }

    cout <<"Total area = " << sumArea << endl;
}
