<div class="d-flex flex-column flex-md-row align-items-center p-3 px-md-4 mb-3 bg-white border-bottom shadow-sm">
	<h5 class="my-0 mr-md-auto font-weight-normal">Penjualan Tukang Sayur</h5>
	<nav class="my-2 my-md-0 mr-md-3">
		<a class="p-2 text-dark" href="#">Tambah Data</a>
	</nav>
	<a class="btn btn-outline-primary" href="<?=base_url('pweb/logout')?>">Sign Out</a>
</div>

<div class="container">
	<div class="row justify-content-md-center">
		<div class="col-md-6">
			<div class="card bg-light my-5">
				<div class="card-header text-center">Edit Data</div>
				<div class="card-body">


					<form action="" method="post" class="needs-validation" novalidate>
						<input type="" name="id_nilai" value="<?= $nilai['id_nilai']?>">
						<div class="form-group">
							<label for="nama_mhs">Tanggal</label>
							<input type="date" class="form-control" name="nama_mhs" id="nama_mhs" placeholder="Masukan nama mahasiswa" autocomplete="off" required value="<?= $nilai['nama_mahasiswa']?>">
							<div class="invalid-feedback">
								Anda belum memasukan data.
							</div>
						</div>
						<div class="form-group">
							<label for="n_pert1">Cabai (kg)</label>
							<input type="n_pert1" class="form-control" name="n_pert1" id="n_pert1" placeholder="Masukan nilai pertemuan 1" autocomplete="off" required value="<?= $nilai['nilai1']?>">
							<div class="invalid-feedback" >
							Anda belum memasukan data.
							</div>
						</div>
						<div class="form-group">
							<label for="n_pert2">Bayam (kg)</label>
							<input type="n_pert2" class="form-control" name="n_pert2" id="n_pert2" placeholder="Masukan nilai pertemuan 2" autocomplete="off" required value="<?= $nilai['nilai2']?>">
							<div class="invalid-feedback">
							Anda belum memasukan data.
							</div>
						</div>
						<div class="form-group">
							<label for="n_pert3">Wortel (kg)</label>
							<input type="n_pert3" class="form-control" name="n_pert3" id="n_pert3" placeholder="Masukan nilai pertemuan 3" autocomplete="off" required value="<?= $nilai['nilai3']?>">
							<div class="invalid-feedback">
							Anda belum memasukan data.
							</div>
						</div>
						<div class="form-group">
							<label for="n_pert4">Kentang (kg)</label>
							<input type="n_pert4" class="form-control" name="n_pert4" id="n_pert4" placeholder="Masukan nilai pertemuan 4" autocomplete="off" required value="<?= $nilai['nilai4']?>">
							<div class="invalid-feedback">
							Anda belum memasukan data.
							</div>
						</div>
						<div class="text-center">
							<button type="submit" class="btn btn-primary text-center px-3 py-2" name="edit">Edit</button>
						</div>
					</form>
				</div>
			</div>	
		</div>
	</div>
</div>