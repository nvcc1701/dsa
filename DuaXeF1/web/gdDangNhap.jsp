<%-- 
    Document   : gdDangNhap
    Created on : Nov 9, 2022, 10:55:06 PM
    Author     : anhnguyen
--%>

<%@page contentType="text/html" pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
    <head>
        <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
        <title>Dang nhap</title>
        <meta charset="utf-8">
        <meta name="viewport" content="width=device-width, initial-scale=1">

        <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.2.2/dist/css/bootstrap.min.css" rel="stylesheet" integrity="sha384-Zenh87qX5JnK2Jl0vWa8Ck2rdkQ2Bzep5IDxbcnCeuOxjzrPF/et3URy9Bv1WTRi" crossorigin="anonymous">
        <script src="https://cdn.jsdelivr.net/npm/bootstrap@5.2.2/dist/js/bootstrap.bundle.min.js" integrity="sha384-OERcA2EqjJCMA+/3y+gxIOqMEjwtxJY7qPCqsdltbNJuaOe923+mo//f6V8Qbsw3" crossorigin="anonymous"></script>
        <link rel="stylesheet" href="style.css">
        <link rel="preconnect" href="https://fonts.googleapis.com">
        <link rel="preconnect" href="https://fonts.gstatic.com" crossorigin>
        <link href="https://fonts.googleapis.com/css2?family=Roboto+Condensed:wght@300;400&display=swap" rel="stylesheet">
    </head>
    <body>
        <div class="text-center dangnhap">
            <h2> Đăng nhập </h2>
            <form name="dangnhap" action="doDangNhap.jsp" method="post">
                <input type="text" name="username" id="username" required placeholder="Tên đăng nhập"/><br>
                <input type="password" name="password" id="password" placeholder="Mật khẩu" required class="mt-2"/><br>
                <button type="submit" class="mt-2 btn btn-primary">Đăng nhập</button>
            </form>
        </div>
    </body>
</html>
