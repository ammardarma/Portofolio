<?php
include('koneksi.php');
$query = mysqli_query($koneksi,"SELECT * FROM tb_gambar");
?>
<html>
<head>
<title>Animal Kingdom</title>
<link rel="stylesheet" href="style.css">
<meta charset="utf-8">
<meta name="viewport" content="width=device-width, initial-scale=1, shrink-to-fit=no">
<link href='https://fonts.googleapis.com/css?family=Roboto:400,100,300,700' rel='stylesheet' type='text/css'>
<link rel="stylesheet" href="https://stackpath.bootstrapcdn.com/font-awesome/4.7.0/css/font-awesome.min.css">
<link rel="stylesheet" href="css/style.css">
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
    <div class="top-wrapper">
        <div class="container">
            <div class="transbox">
            <h2>BURUNG</h2>
            <p><a href="#menu" class="btn-blue">Let's go!</a></p> 
        </div>
        </div>
    </div>
    <div class="heading">
        <h2>Mengenal Berbagai Macam Burung</h2>
    </div>
    <div id="menu"></div>
    <!--Konten-->

		<div class="container">
			<div class="row justify-content-center">
			</div>
			<div class="row">
				<div class="col-md-12">
						<table class="table">
						  <thead class="thead-primary">
						  </thead>
						  <tbody>

<?php 
$no = 1;
while($row = mysqli_fetch_array($query))
{
?>
		<tr class="alert" role="alert">
			<td>
				<div class="img" style="background-image: url(image_view.php?id_gambar=<?php echo $row['id_gambar'];?>"></div>
			</td>
			<td>
				<div class="email">
					<span><h6><?php echo $row['judul']; ?></h6></span>
                    <span><br></span>
					<span><?php echo $row['keterangan']; ?></span>
				</div>
			</td>
		</tr>
<?php
}
?>
						  </tbody>
						</table>
				</div>
			</div>
		</div>

   <!---->
   <div class="message-wrapper">
        <div class="container">
            <div class="heading">
                <p>Masih ada banyak burung lainnya diluar sana yang belum disebutkan.</p>
                <p>Kamu mau berpartisipasi menambahkan jenis burung lainnya?</p>
            </div> 
            <a class="btn message" href="form_upload.php">Yes!</a>
        </div>
    </div>
    <!---->
    <!-- Footer -->
    <footer>
        <div class="container">
          <img class="logoo" src="Logo.png">
            <p>Jagalah Lingkungan</p>
        </div>   
    </footer>

</body>
</html>