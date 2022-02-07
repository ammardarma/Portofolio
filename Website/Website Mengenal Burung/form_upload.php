<?php 
include('koneksi.php');
if(isset($_POST['tombol']))
{
    if(!isset($_FILES['gambar']['tmp_name'])){
        echo '<span style="color:red"><b><u><i>Pilih file gambar</i></u></b></span>';
    }
    else
    {
        $file_name = $_FILES['gambar']['name'];
        $file_size = $_FILES['gambar']['size'];
        $file_type = $_FILES['gambar']['type'];
        if ($file_size < 2048000 and ($file_type =='image/jpeg' or $file_type == 'image/png'))
        {
            $image   = addslashes(file_get_contents($_FILES['gambar']['tmp_name']));
            $keterangan = $_POST['keterangan'];
            $judul = $_POST['judul'];
            mysqli_query($koneksi,"insert into tb_gambar (gambar,nama_gambar,tipe_gambar,ukuran_gambar,keterangan,judul) values ('$image','$file_name','$file_type','$file_size','$keterangan','$judul')");
            header("location:index.php");
        }
        else
        {
            echo '<span style="color:red"><b><u><i>Ukuruan File / Tipe File Tidak Sesuai</i></u></b></span>';
        }
    }
}
?>
<html>
    <head>
        <title>Form Input Data</title>
    	<meta charset="utf-8">
	<meta name="viewport" content="width=device-width, initial-scale=1">
	<link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/4.4.1/css/bootstrap.min.css">
    <link rel="stylesheet" href="upload.css">
    </head>
    <body>
        <!-- Header -->
        <header>
        <div class="container">
            <div class="header-left">
                <img class="logo" src="Logo.png">
            </div>

            <div class="header-right">
                <a class="home" href="index.php">Home</a>       
            </div>
        </div>
        </header>
        <!-- Header -->

        <div class="tcontainer">
		<h2 style="text-align: center;">Tambah Data Burung</h2>
        <form method="post" action="" enctype="multipart/form-data">
			<div class="form-group">
				<label>Nama Burung</label>
				<input type="text" class="form-control" placeholder="Masukkan Nama Burung" name="judul" required="required">
			</div>
			<div class="form-group">
				<label>Deskripsi Burung</label>
                <textarea class="form-control" placeholder="Masukkan Deskripsi Burung" name="keterangan" required="required"></textarea>
			</div>
			<div class="form-group">
				<label>Gambar</label>
				<input type="file" name="gambar" required="required">
				<p style="color: #ff0000">Ekstensi yang diperbolehkan .png | .jpg | .jpeg </p>
			</div>				
			<input type="submit" name="tombol" value="Simpan" class="btn btn-primary">
		</form>
	</div>
    <!-- Footer -->
    <footer>
        <div class="container">
          <img class="logoo" src="Logo.png">
            <p>Jagalah Lingkungan</p>
        </div>   
    </footer>
    </body>
</html>