
#include <windows.h>
#include <GL/glut.h>

//fungsi yang akan digunakan

//menginisiasi fungsi display()
void display();
//menginisiasi fungsi reshape()
void reshape(int,int);
//menginisiasi fungsi timer()
void timer(int);

//fungsi myinit()
void myinit(){
//Digunakan untuk memilih warna yang digunakan untuk membersihkan latar dalam mode RGBA
    glClearColor(0.0,0.0,0.0,1);
}

//fungsi main yang bertindak sebagai fungsi utama
int main(int argc,char** argv){
    glutInit(&argc,argv);
    // fungsi untuk mendisplay dengan warna RGB 
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
      //menentukan posisi window
    glutInitWindowPosition(0,0);
    ////fungsi untuk mengatur besaran window
    glutInitWindowSize(600,600);
     //membuat judul program
    glutCreateWindow("Pertemuan 3");
     // untuk memanggil fungsi yang ada didalamnya
    glutDisplayFunc(display);
    //menjalankan fungsi Reshape()
    glutReshapeFunc(reshape);
    //menjalankan fungsiTimer()
    glutTimerFunc(1000,timer, 0);
    //menjalankan fungsi myinit()
    myinit();
    // digunakan untuk menjalankan program. Semua fungsi sebelumnya akan berpengaruh setelah fungsi ini dieksekusi.
    glutMainLoop();
}

//menginisiasi variabel x_position dan state
float x_position = -10.0;
int state = 1;

//fungsi display, menampilkan polygon
void display(){
    //Digunakan untuk membersihkan layar latar belakang dengan warna hitam.
    glClear(GL_COLOR_BUFFER_BIT);
    //Digunakan untuk menentukan warna garis/titik.
    glColor3f(1, 1,1);
    ////Function glLoadIdentity() digunakan untuk memanggil matriks identitas dan dijadikan status matriks (proyeksi) saat ini.
    glLoadIdentity();
    //Digunakan untuk menggambar poligon.
    glBegin(GL_POLYGON);
    //Digunakan untuk menentukan koordinat garis poligon akan dibuat
    glVertex2f(x_position,1.0);
    glVertex2f(x_position,-1.0);
    glVertex2f(x_position+2.0,-1.0);
    glVertex2f(x_position+2.0,1.0);
//Digunakan untuk mengakhiri poligon.
    glEnd();
//Digunakan untuk menukar bagian belakang buffer menjadi buffer layar
    glutSwapBuffers();
}

//fungsi reshape
void reshape(int w, int h){
    //digunakan untuk menspesifikasikan viewport digunakan fungsi glViewPort.
    glViewport(0,0, (GLsizei)w, (GLsizei)h);
    //Dalam pemetaan world window harus diawali dengan dua buah fungsi setup
    // Function glMatrixMode() digunakan untuk memberikan inisialisasi matriks.
    glMatrixMode(GL_PROJECTION);
    //Function glLoadIdentity() digunakan untuk memanggil matriks identitas dan dijadikan status matriks (proyeksi) saat ini.
    glLoadIdentity();
    //Fungsi gluOrtho2D akan membuat window dengan sudut kiri bawah di left, bottom dan sudut kanan atas di right,top.
    gluOrtho2D(-10,10,-10,10);
    //// Function glMatrixMode() digunakan untuk memberikan inisialisasi matriks.
    glMatrixMode(GL_MODELVIEW);
}

//fungsi timer
void timer(int){
    //Function glutPostRedisplay() digunakan untuk mengirimkan perintah saat mengaktifkan display secara berkala (looping).
    glutPostRedisplay();
    //Function glutTimerFunc() digunakan untuk membuat animasi yang dapat dikontrol oleh waktu
    glutTimerFunc(1000/60, timer, 0);
    //statement percabangan yang menentukan posisi untuk poligon
    switch(state){
    case 1:
        if(x_position<8)
            x_position += 0.15;
        else
            state = -1;
        break;
    case -1:
        if(x_position>-10)
            x_position -= 0.15;
        else
            state =1;
        break;
    }
}