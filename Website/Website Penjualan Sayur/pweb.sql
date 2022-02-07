-- phpMyAdmin SQL Dump
-- version 5.0.2
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Feb 07, 2022 at 10:41 PM
-- Server version: 10.4.14-MariaDB
-- PHP Version: 7.3.22

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `pweb`
--

-- --------------------------------------------------------

--
-- Table structure for table `matkul`
--

CREATE TABLE `matkul` (
  `KDMK` char(8) DEFAULT NULL,
  `NAMAMK` varchar(30) DEFAULT NULL,
  `SKS` smallint(6) DEFAULT NULL,
  `JENIS` char(1) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `matkul`
--

INSERT INTO `matkul` (`KDMK`, `NAMAMK`, `SKS`, `JENIS`) VALUES
('AK045329', 'Sistem Basis Data 1 **', 3, 'W'),
('AK045205', 'Grafik Komputer 1 **', 2, 'W'),
('IT000201', 'Teknologi Kecerdasan Artifisia', 2, 'W'),
('IT045237', 'Sistem Keamanan Komputer', 2, 'W');

-- --------------------------------------------------------

--
-- Table structure for table `mhs`
--

CREATE TABLE `mhs` (
  `NPM` char(8) DEFAULT NULL,
  `NAMA` varchar(40) DEFAULT NULL,
  `KELAS` char(5) DEFAULT NULL,
  `TEMPAT_L` varchar(30) DEFAULT NULL,
  `TGL_L` date DEFAULT NULL,
  `ALAMAT` varchar(30) DEFAULT NULL,
  `KOTA` varchar(25) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `mhs`
--

INSERT INTO `mhs` (`NPM`, `NAMA`, `KELAS`, `TEMPAT_L`, `TGL_L`, `ALAMAT`, `KOTA`) VALUES
('50419666', 'AMMAR RIDWAN DARMA', '3IA01', 'JAKARTA', '2000-06-04', 'JL MARGONDA', 'DEPOK'),
('52419564', 'GAMMARAL VENERDI DEWAJI', '3IA01', 'SURABAYA', '2000-06-04', 'JL PONDOK CINA', 'DEPOK'),
('54419032', 'MUHAMMAD ARIEF RUBBYANSYAH', '3IA01', 'JAKARTA', '2000-10-31', 'JL MERDEKA', 'BOGOR'),
('54419745', 'NAZWA SAPTA PRADANA', '3IA01', 'SUKABUMI', '2000-06-04', 'JL SALEMBA', 'JAKARTA'),
('56419004', 'SHAFIAH QONITA', '3IA01', 'BOGOR', '2000-01-11', 'JL TAMAN PUSPA', 'BEKASI');

-- --------------------------------------------------------

--
-- Table structure for table `nilai`
--

CREATE TABLE `nilai` (
  `NPM` char(8) DEFAULT NULL,
  `KDMK` char(8) DEFAULT NULL,
  `UTS` smallint(6) DEFAULT NULL,
  `UAS` smallint(6) DEFAULT NULL,
  `RERATA` smallint(6) DEFAULT NULL,
  `GRADE` char(1) DEFAULT NULL,
  `SEM` char(2) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `nilai`
--

INSERT INTO `nilai` (`NPM`, `KDMK`, `UTS`, `UAS`, `RERATA`, `GRADE`, `SEM`) VALUES
('50419666', 'AK045329', 80, 90, 0, '', '5'),
('54419032', 'AK045329', 100, 85, 0, '', '5'),
('54419032', 'IT045237', 90, 85, 0, '', '5'),
('56419004', 'IT000201', 80, 95, 0, '', '5'),
('52419564', 'AK045205', 75, 100, 0, '', '5'),
('52419564', 'IT045237', 90, 100, 0, '', '5'),
('54419745', 'AK045205', 90, 80, 0, '', '5');

-- --------------------------------------------------------

--
-- Table structure for table `tbl_nilai`
--

CREATE TABLE `tbl_nilai` (
  `id_nilai` int(11) NOT NULL,
  `nama_mahasiswa` date NOT NULL,
  `nilai1` int(12) NOT NULL,
  `nilai2` int(12) NOT NULL,
  `nilai3` int(12) NOT NULL,
  `nilai4` int(12) NOT NULL,
  `rata` float NOT NULL,
  `keterangan` varchar(16) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `tbl_nilai`
--

INSERT INTO `tbl_nilai` (`id_nilai`, `nama_mahasiswa`, `nilai1`, `nilai2`, `nilai3`, `nilai4`, `rata`, `keterangan`) VALUES
(32, '2021-12-18', 100, 100, 100, 100, 100, 'Memenuhi'),
(34, '2021-12-17', 12, 11, 14, 13, 12.5, 'Memenuhi'),
(35, '2021-12-17', 9, 10, 10, 1, 7.5, 'Tidak Memenuhi');

-- --------------------------------------------------------

--
-- Table structure for table `tbl_user`
--

CREATE TABLE `tbl_user` (
  `id_user` int(11) NOT NULL,
  `username` varchar(12) NOT NULL,
  `password` varchar(255) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `tbl_user`
--

INSERT INTO `tbl_user` (`id_user`, `username`, `password`) VALUES
(1, 'pengguna', '$2y$10$zKdHbsk9fHoMHHVv8n8v2O3zzraD.65VqUafv.mJPXqPmTZS4COui');

--
-- Indexes for dumped tables
--

--
-- Indexes for table `tbl_nilai`
--
ALTER TABLE `tbl_nilai`
  ADD PRIMARY KEY (`id_nilai`);

--
-- Indexes for table `tbl_user`
--
ALTER TABLE `tbl_user`
  ADD PRIMARY KEY (`id_user`);

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT for table `tbl_nilai`
--
ALTER TABLE `tbl_nilai`
  MODIFY `id_nilai` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=36;

--
-- AUTO_INCREMENT for table `tbl_user`
--
ALTER TABLE `tbl_user`
  MODIFY `id_user` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=3;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
