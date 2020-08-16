//
// https://qiita.com/BitPositive/items/db8b13e7d34e5349237b
//


#include <GL/glut.h>


GLdouble vertex[][3] = 
{
    {0.0,0.0,0.0},
    {1.0,0.0,0.0},
    {1.0,1.0,0.0},
    {0.0,1.0,0.0},
    {0.0,0.0,1.0},
    {1.0,0.0,1.0},
    {1.0,1.0,1.0},
    {0.0,1.0,1.0}
};

int edge[][2]=
{
    {0,1},
    {1,2},
    {2,3},
    {3,0},
    {4,5},
    {5,6},
    {6,7},
    {7,4},
    {0,4},
    {1,5},
    {2,6},
    {3,7}
};

// void show(void);

void resize(int w,int h)
{
    glViewport(0,0,w,h);

    glLoadIdentity();
    gluPerspective(30.0,(double)w/(double)h,1.0,100.0);
    glTranslated(0.0,0.0,-5.0);
    // glOrtho(-2.0,2.0,-2.0,2.0,-2.0,2.0);
}

void show(void)
{
    int i;

    glClear(GL_COLOR_BUFFER_BIT);

    glColor3d(1.0, 0.0, 0.0);
    //glBegin(GL_LINE_LOOP);
    glBegin(GL_LINES);
    for(i=0;i<12;++i)
    {
        glVertex3dv(vertex[edge[i][0]]);
        glVertex3dv(vertex[edge[i][1]]);     
    }

    // glVertex2d(-0.5,-0.5);
    // glVertex2d(-0.5, 0.5);
    // glVertex2d( 0.5, 0.5);
    // glVertex2d( 0.5,-0.5);

    glEnd();

    glFlush();
}


int main(int argc, char** argv)
{
    glutInit(&argc, argv);

    //glutInitDisplayMode(GLUT_RGBA);
    // glutInitWindowSize(400, 300);
    // glutInitWindowPosition(200, 200);

    glutInitDisplayMode(GLUT_RGBA);
    glutCreateWindow("GLUT test");
    glutDisplayFunc(show);
    glutReshapeFunc(resize);
    // init();
    glClearColor(1.0, 1.0, 1.0, 1.0);
    glutMainLoop();



    // glutMainLoop();

  return 0;
}


