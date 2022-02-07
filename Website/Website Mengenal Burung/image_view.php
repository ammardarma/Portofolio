<?php
include('koneksi.php');
if(isset($_GET['id_gambar'])) 
{
    $query = mysqli_query($koneksi,"select * from tb_gambar where id_gambar='".$_GET['id_gambar']."'");
    $row = mysqli_fetch_array($query);
    header("Content-type: " . $row["tipe_gambar"]);
    echo $row["gambar"];
}
else
{
    header('location:index.php');
}
?>