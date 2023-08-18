-- phpMyAdmin SQL Dump
-- version 5.0.3
-- https://www.phpmyadmin.net/
--
-- Servidor: 127.0.0.1
-- Tiempo de generación: 15-11-2020 a las 17:15:06
-- Versión del servidor: 10.4.14-MariaDB
-- Versión de PHP: 7.2.34

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Base de datos: `final`
--

-- --------------------------------------------------------

--
-- Estructura de tabla para la tabla `moneda`
--

CREATE TABLE `moneda` (
  `id` int(10) NOT NULL,
  `Nombre` varchar(20) COLLATE utf8mb4_spanish_ci NOT NULL,
  `val_quetzal` float NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_spanish_ci;

--
-- Volcado de datos para la tabla `moneda`
--

INSERT INTO `moneda` (`id`, `Nombre`, `val_quetzal`) VALUES
(28, 'Bolívar Venezolano', 75621.8),
(29, 'Colón Costarricense', 78.9107),
(30, 'Córdoba Nicaraguense', 4.47799),
(31, 'Dólar Canadiense', 0.16907),
(32, 'Dólar de Barbados', 0.25944),
(33, 'Dólar de Belice', 0.259),
(34, 'Dólar de Bermudas', 0.12849),
(35, 'Dólar de las Bahamas', 0.12849),
(36, 'Dólar de las Islas C', 0.10708),
(37, 'Dólar de Trinidad y ', 0.87186),
(38, 'Dólar del Caribe Ori', 0.34697),
(39, 'Dólar Estadounidense', 0.12838),
(40, 'Dólar Jamaiquino', 19.0151),
(41, 'Florín Antillano', 0.23051),
(42, 'Gourde Haitiano', 8.12803),
(43, 'Guaraní Paraguayo', 903.453),
(44, 'Lempira Hondureño', 3.15491),
(45, 'Peso Argentino', 10.2097),
(46, 'Peso Boliviano', 0.88724),
(47, 'Peso Chileno', 97.3081),
(48, 'Peso Colombiano', 467.589),
(49, 'Peso Cubano', 3.40367),
(50, 'Peso Dominicano', 7.50397),
(51, 'Peso Mexicano', 2.65379),
(52, 'Peso Uruguayo', 5.48861),
(53, 'Real Brasileño', 0.70089),
(54, 'Sol Peruano', 0.46526);

--
-- Índices para tablas volcadas
--

--
-- Indices de la tabla `moneda`
--
ALTER TABLE `moneda`
  ADD PRIMARY KEY (`id`);

--
-- AUTO_INCREMENT de las tablas volcadas
--

--
-- AUTO_INCREMENT de la tabla `moneda`
--
ALTER TABLE `moneda`
  MODIFY `id` int(10) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=55;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
