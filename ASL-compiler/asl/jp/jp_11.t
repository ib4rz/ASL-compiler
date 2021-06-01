function main
  vars
    a 1
    b 1
    c 1
  endvars

   %2 = 13
   a = %2
   %4 = 4
   b = %4
   %7 = a / b
   %8 = %7 * b
   %6 = a - %8
   c = %6
   writei c
   %9 = ''.''
   writec %9
   %10 = ''\n''
   writec %10
   %12 = - a
   %14 = %12 / b
   %15 = %14 * b
   %13 = %12 - %15
   c = %13
   writei c
   %16 = ''.''
   writec %16
   %17 = ''\n''
   writec %17
   %19 = - b
   %21 = a / %19
   %22 = %21 * %19
   %20 = a - %22
   c = %20
   writei c
   %23 = ''.''
   writec %23
   %24 = ''\n''
   writec %24
   %26 = 3
   %27 = a + %26
   %29 = %27 / b
   %30 = %29 * b
   %28 = %27 - %30
   c = %28
   writei c
   %31 = ''.''
   writec %31
   %32 = ''\n''
   writec %32
   %34 = - a
   %35 = 3
   %36 = %34 - %35
   %37 = - b
   %39 = %36 / %37
   %40 = %39 * %37
   %38 = %36 - %40
   c = %38
   writei c
   %41 = ''.''
   writec %41
   %42 = ''\n''
   writec %42
   return
endfunction


