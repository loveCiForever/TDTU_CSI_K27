CREATE DATABASE QLNV
GO

USE QLNV
GO

CREATE TABLE NHANVIEN (
    MANV int PRIMARY KEY,
    HOTEN nvarchar(50),
    NGAYSINH datetime,
    DCHI nvarchar(50),
    PHAI nvarchar(10),
    LUONG decimal(10, 2),
    MAPB int,
    FOREIGN KEY (MAPB) REFERENCES PHONGBAN(MAPB)
);

CREATE TABLE THANNHAN (
    MANV int,
    TENTN nvarchar(50),
    PHAI nvarchar(10),
    NGAYSINH datetime,
    QUANHE nvarchar(50),
    FOREIGN KEY (MANV) REFERENCES NHANVIEN(MANV)
);

CREATE TABLE PHONGBAN (
    MAPB int PRIMARY KEY,
    DIADIEM nvarchar(50)
);

CREATE TABLE DUAN (
    MADA int PRIMARY KEY,
    TENDA nvarchar(50),
    DIADIEM nvarchar(50),
    MAPB int,
    FOREIGN KEY (MAPB) REFERENCES PHONGBAN(MAPB)
);

CREATE TABLE PHANCONG (
    MANV int,
    MADA int,
    THOIGIAN datetime,
    FOREIGN KEY (MANV) REFERENCES NHANVIEN(MANV),
    FOREIGN KEY (MADA) REFERENCES DUAN(MADA)
);

-- Cau 1a:
SELECT NV.MANV, NV.HOTEN, NV.MAPB
FROM NHANVIEN NV
LEFT JOIN THANNHAN TN ON NV.MANV = TN.MANV
WHERE TN.MANV IS NULL;
GO

-- Cau 1b:
CREATE PROCEDURE sp_InsertNewProject
    @MADA int,
    @TENDA nvarchar(50),
    @DIADIEM nvarchar(50),
    @MAPB int
AS
BEGIN
    IF NOT EXISTS (SELECT 1 FROM PHONGBAN WHERE MAPB = @MAPB)
        RAISERROR ('Invalid department ID', 16, 1);

    IF EXISTS (SELECT 1 FROM DUAN WHERE MADA = @MADA)
        RAISERROR ('Project ID already exists', 16, 1);

    INSERT INTO DUAN (MADA, TENDA, DIADIEM, MAPB)
    VALUES (@MADA, @TENDA, @DIADIEM, @MAPB);
END;
GO

-- Cau 1c:
CREATE FUNCTION fn_EmployeeCountByDepartment()
RETURNS @result TABLE (MAPB int, EmployeeCount int)
AS
BEGIN
    INSERT INTO @result
    SELECT PB.MAPB, COUNT(NV.MANV) AS EmployeeCount
    FROM NHANVIEN NV
    INNER JOIN PHONGBAN PB ON NV.MAPB = PB.MAPB
    GROUP BY PB.MAPB;

    RETURN;
END;



CREATE DATABASE QLCH
GO

USE QLCH
GO

CREATE TABLE Chinhanh (
    MaCN int PRIMARY KEY,
    TenCN nvarchar(50),
    Diachi nvarchar(50),
    Sodienthoai nvarchar(20),
    Sofax nvarchar(20)
);

CREATE TABLE Nhanvien (
    MaNV int PRIMARY KEY,
    Hoten nvarchar(50),
    Diachi nvarchar(50),
    Gioitinh nvarchar(10),
    Chucvu nvarchar(50),
    Ngaysinh datetime,
    Luong decimal(10, 2),
    MaCN int,
    FOREIGN KEY (MaCN) REFERENCES Chinhanh(MaCN)
);

CREATE TABLE Chunha (
    Machunha int PRIMARY KEY,
    Hoten nvarchar(50),
    Diachi nvarchar(50),
    Sodienthoai nvarchar(20)
);

CREATE TABLE Nhachothue (
    Manha int,
    Diachi nvarchar(50),
    Kieunha nvarchar(50),
    Soluongphong int,
    Giathue

-- Cau 2a:
SELECT NV.Hoten, NV.Luong
FROM Nhanvien NV
WHERE NV.Gioitinh = 'Nam' AND NV.Luong > (
    SELECT AVG(Luong)
    FROM Nhanvien
    WHERE Gioitinh = 'Nữ'
);
GO

-- Cau 2b:
CREATE PROCEDURE sp_InsertNewEmployee
    @MaNV int,
    @Hoten nvarchar(50),
    @Diachi nvarchar(50),
    @Gioitinh nvarchar(10),
    @Chucvu nvarchar(50),
    @Ngaysinh datetime,
    @Luong decimal(10, 2),
    @MaCN int
AS
BEGIN
    IF NOT EXISTS (SELECT 1 FROM Chinhanh WHERE MaCN = @MaCN)
        RAISERROR ('Invalid branch ID', 16, 1);

    IF EXISTS (SELECT 1 FROM Nhanvien WHERE MaNV = @MaNV)
        RAISERROR ('Employee ID already exists', 16, 1);

    INSERT INTO Nhanvien (MaNV, Hoten, Diachi, Gioitinh, Chucvu, Ngaysinh, Luong, MaCN)
    VALUES (@MaNV, @Hoten, @Diachi, @Gioitinh, @Chucvu, @Ngaysinh, @Luong, @MaCN);
END;
GO

-- Cau 2c:
CREATE FUNCTION fn_EmployeeCountByBranch()
RETURNS @result TABLE (MaCN int, EmployeeCount int)
AS
BEGIN
    INSERT INTO @result
    SELECT CN.MaCN, COUNT(NV.MaNV) AS EmployeeCount
    FROM Nhanvien NV
    INNER JOIN Chinhanh CN ON NV.MaCN = CN.MaCN
    GROUP BY CN.MaCN;

    RETURN;
END;
GO
