//Perintah ini digunakan untuk mengimport library yang akan digunakan dalam program ini seperti stdio, conio dan stdlib.
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

//mendeklarasikan array q, a, vis, dan stack dengan besaran 20, variabel top, front, rear dengan default value -1. 
int q[20], top = -1, front = -1, rear = -1, a[20][20], vis[20], stack[20];

//mendeklarasikan fungsi del.
int del();

//mendeklarasikan fungsi add, bfs, dfs, push dan pop. 
void add(int item);
void bfs(int s, int n);
void dfs(int s, int n);
void push(int item);
int pop();

//program utama yang akan dijalankan. 
int main(){
//output "Program DFS dan BFS"
    printf("Program DFS dan BFS\n\n");
//mendeklarasikan variabel n, i, s, ch, dan j dengan tipe data integer.
    int n, i, s, ch, j;
//mendeklarasikan variabel c dan dummy dengan tipe data char. 
    char c, dummy;

//menerima input dari keyboard dan dimasukkan kedalam variabel n. 
    printf("Masukkan angka : ");
    scanf("%d",&n);

/*perulangan yang akan menampung angka ke dalam variabel i dan j, kemudian ditiap iterasinya akan memasukkan nilai tersebut
kedalam array a[][].
*/
    for(i=1; i<=n; i++){
        for(j=1; j<=n; j++){
        printf("Masukkan %d jika mempunyai simpul %d selain itu 0 : ", i, j);
        scanf("%d", &a[i][j]);
        }
    }
/*perulangan yang akan mengeluarkan kembali angka-angka yang masuk dalam bentuk matriks.*/
    printf("\nMatriks Adjasensi\n");
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
//perulangan do-while untuk meminta user memilih BFS/DFS. 
do{
    //perulangan yang digunakan apabila user salah memasukkan input. 
    for(i=1;i<=n;i++)
    a:vis[i] = 0;
    printf("\n--MENU--");
    printf("\n1. BFS");
    printf("\n2. DFS");
//menampung input dari keyboard user ke dalam variabel ch. (opsi pilihan BFS atau DFS/)
    printf("\nPilihan : ");
    scanf("%d", &ch);
//menampung input dari keyboard user ke dalam variabel s. (yang ditentukan sebagai simpul sumber)
    printf("\nMasukkan simpul sumber : ");
    scanf("%d", &s);
//conditional yang digunakan untuk menentukan apakah menggunakan fungsi bfs atau dfs berdasarkan variabel ch. 
    switch(ch){
        //menjalankan fungsi bfs.
        case 1:
            bfs(s,n);
            break;
        //menjalankan fungsi dfs.
        case 2:
            dfs(s,n);
            break;
        //tidak menjalankan fungsi apapun dan meminta kembali ke awal. 
        default:
            printf("==SALAH INPUT==");
            goto a;
            break;
    }
    //menanyakan pilihan user dan menampungnya di variabel dummy dan c. 
    printf("\nApakah Ingin Melanjutkan?(Y/N");
    scanf("%c", &dummy);
    scanf("%c", &c);    
}
//ketika user memasukkan y/Y maka, perulangan do while akan terus berlanjut. 
while((c=='y')||(c=='Y'));
return(0);
}

//membuat fungsi bfs. 
void bfs(int s, int n){
//mendeklarasikan variabel p dan i.
    int p, i;
//menggunakan fungsi add dengan input s. 
    add(s);
//mendeklarasikan array vis dengan value 1. 
    vis[s] = 1;
//mendeklarasikan variabel p sebagai fungsi del. 
    p = del();
//condisional apabila p tidak sama dengan 0 maka print variabel p
    if (p != 0 )
        printf("%d \n", p);
//perulangan apabila p tidak sama dengan 0, maka akan menjalankan perulangan berikutnya di dalamnya. 
    while(p!=0){
        for(i = 1; i<=n; i++)
    //conditional apabila array a[][] tidak sama dengan 0 DAN array vis sama dengan 0, maka masukkan kedalam fungsi add dan array vis=1.
            if((a[p][i] != 0) && (vis[i]== 0)){
                add(i);
                vis[i] = 1;
            }
    //mendeklarasikan variabel p sebagai fungsi del. 
        p = del();
        if (p != 0)
            printf("%d \n", p);
    }
    //perulangan apabila vis sama dengan 0, maka jalankan fungsi bfs. 
    for(i=1; i<=n; i++)
        if(vis[i] == 0)
            bfs(i, n);
}

//membuat fungsi add. 
void add(int item){
    //jika variabel rear = 19 maka antriannya full. 
    if (rear == 19)
        printf("antrian full");
    else
    //apabila rear = -1 maka, array q akan diisi oleh increment dari variabel rear dengan value variabel item. 
        if(rear == -1){
            q[++rear] = item;
            //increment variabel front. 
            front++;
        } else
        //jika rear selain -1 array q akan tetap diisi oleh increment dari variabel rear dengan value variabel item.
        q[++rear] = item;
}

//membuat fungsi del 
int del() {
//mendeklarasikan variabel k. 
    int k;
    //conditional yang mana front lebih besar dari rear atau front sama dengan -1, maka akan mengembalikan return 0. 
    if ((front > rear) || (front == -1))
        return (0);
    //jika tidak, maka variabel k akan menampung array dengan inputan increment front, dan mengembalikan variabel k. 
    else {
        k = q[front++];
        return (k);
    }
}

//membuat fungsi dfs 
void dfs(int s, int n){
//mendeklarasikan variabel i dan k. 
    int i, k;
    //menggunakan fungsi push dengan input variabel s. 
    push(s);
    //mendeklarasikan array vis dengan value 1. 
    vis[s] = 1;
    // memasukan fungsi pop kedalam variabel k. 
    k = pop();
    ////condisional apabila k tidak sama dengan 0 maka print variabel k
    if (k!= 0)
        printf("%d \n", k);
    //perulangan apabila k tidak sama dengan 0, maka akan menjalankan perulangan berikutnya di dalamnya. 
    while (k != 0) {
        
        for(i=1;i<=n;i++)
        //conditional apabila array a[][] tidak sama dengan 0 DAN array vis sama dengan 0, maka jalankan fungsi push dan array vis=1
            if((a[k][i] != 0) && (vis[i] == 0)){
                push(i);
                vis[i] = 1;
            }
        // memasukan fungsi pop kedalam variabel k.
        k = pop();
      ////condisional apabila k tidak sama dengan 0 maka print variabel k
        if (k!=0)
            printf("%d \n", k);
    }
    ////perulangan apabila vis sama dengan 0, maka jalankan fungsi dfs. 
    for(i=1; i<=n; i++)
        if(vis[i]==0)
            dfs(i,n);
}

//membuat fungsi push. 
void push(int item){
    //conditional jika top sama dengan 19, maka outputnya stack overflow. 
    if(top == 19)
        printf("stack overflow");
        //jika tidak maka array stack akan diisi oleh variabel top dan value nya item. 
    else
        stack[++top] = item;
}

//membuat fungsi pop
int pop() {
    //mendeklarasikan variabel k 
    int k;
    //conditional jika top sama dengan -1 maka mengembalikan 0. 
    if(top == -1)
        return (0);
    //jika tidak, maka array stack akan diisi oleh decrement top lalu dimasukkan ke variabel k, dan mengembalikan variabel k. 
    else {
        k = stack[top--];
        return (k);
    }
}