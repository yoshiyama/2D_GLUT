//
// https://qiita.com/BitPositive/items/db8b13e7d34e5349237b
//


#include <GL/glut.h>

void show(void);

int main(int argc, char** argv)
{
    glutInit(&argc, argv);

    //glutInitDisplayMode(GLUT_RGBA);
    glutInitWindowSize(400, 300);
    glutInitWindowPosition(200, 200);

    glutInitDisplayMode(GLUT_RGBA);
    glutCreateWindow("GLUT test");

    glutDisplayFunc(show);

    glClearColor(1.0, 1.0, 1.0, 1.0);

    glutMainLoop();

  return 0;
}

void show(void)
{
  glClear(GL_COLOR_BUFFER_BIT);
  glColor3d(1.0, 0.0, 0.0);
  glBegin(GL_LINE_LOOP);

  glVertex2d(-0.5,-0.5);
  glVertex2d(-0.5, 0.5);
  glVertex2d( 0.5, 0.5);
  glVertex2d( 0.5,-0.5);

  glEnd();
  glFlush();
}
