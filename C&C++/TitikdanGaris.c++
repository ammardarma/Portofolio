#include <windows.h>
#include <GL/glut.h>

void userdraw() {
    // untuk memberikan warna pada garis
    glColor3f(0.0,1.0,2.5);
    // Untuk menentukan besaran titik
    glPointSize(3);
    
    // Untuk menentukan posisi dari TITIK menggunakan vertex2i
    glBegin(GL_POINTS);
    glVertex2i(50,0);
    glVertex2i(-50,0);
    glVertex2i(0,50);
    glVertex2i(0,-50);
glEnd();

// Untuk membuat Garis --> glBegin(GL_LINES);
glBegin(GL_LINES);
    glVertex2i(-50, -50);
    glVertex2i(50,50);
glEnd();
glBegin(GL_LINES);
    glVertex2i(-50,50);
    glVertex2i(50,-50);
glEnd();
}

// Untuk menjalankan fungsi garis yang diatas
void display(void){
    glClear(GL_COLOR_BUFFER_BIT);
    userdraw();
    glutSwapBuffers();
}

// Fungsi Main yang akan menjalankan semuanya
int main(int argc, char **argv) {
    glutInit(&argc, argv);

// fungsi untuk mendisplay dengan warna RGB 
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
//fungsi untuk mengatur besaran window
    glutInitWindowSize(640, 480);
//fungsi untuk mengatur posisi dari window
    glutInitWindowPosition(100,100);
//membuat judul pada windows
    glutCreateWindow("Membuat Titik dan Garis");
//membersihkan warna
    glClearColor(1.0, 1.0, 1.0, 0.0);
//mengatur proyeksi hasil eksekusi dan mendefinisikan besaran koordinat dengan urutan kiri kanan atas bawah
    gluOrtho2D(-320.0, 320., -240, 240);
// untuk merefresh setiap proses menggambar selesai
    glutIdleFunc(display);
// untuk memanggil fungsi yang ada didalamnya
    glutDisplayFunc(display);
// digunakan untuk menjalankan program. Semua fungsi sebelumnya akan berpengaruh setelah fungsi ini dieksekusi.
    glutMainLoop();
    return 0;
}