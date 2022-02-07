<div class="d-flex flex-column flex-md-row align-items-center p-3 px-md-4 mb-3 bg-white border-bottom shadow-sm">
	<h5 class="my-0 mr-md-auto font-weight-normal">Penjualan Tukang Sayur</h5>
</div>

<div class="container">
	<div class="row justify-content-md-center">
		<div class="col-md-6">
			<div class="card bg-light my-5">
				<div class="card-header text-center">Login Penjual</div>
				<div class="card-body">
					<h5 class="card-title">Penjualan Tukang Sayur</h5>
					<p class="card-text">Masukan username dan password untuk mengakses halaman penjualan</p>
					
					<?php if ($this->session->flashdata('salah_login')): ?>
						<div class="alert alert-danger" role="alert">
							Username atau Password salah!
						</div>
					
					<?php elseif ($this->session->flashdata('belum_login')): ?>
						<div class="alert alert-danger" role="alert">
							Anda belum melakukan login!
						</div>
					<?php endif?>
					
					
					
					<form action="" method="post" class="needs-validation" novalidate>
						<div class="form-group">
							<label for="username">Username</label>
							<input type="text" class="form-control" name="username" id="username" placeholder="Masukan username" autocomplete="off" required>
							<div class="invalid-feedback">
								Anda belum memasukan username.
							</div>
						</div>
						<div class="form-group">
							<label for="password">Password</label>
							<input type="password" class="form-control" name="password" id="password" placeholder="Masukan password" autocomplete="off" required>
							<div class="invalid-feedback">
								Anda belum memasukan password.
							</div>
						</div>
						<div class="text-center">
							<button type="submit" class="btn btn-primary text-center px-3 py-2" name="login">Login</button>
						</div>
					</form>
				</div>
			</div>	
		</div>
	</div>
</div>