function main
  vars
    a 1
    b 1
    c 1
  endvars

   %1 = 13
   a = %1
   %2 = 4
   b = %2
   %4 = a / b
   %5 = %4 * b
   %3 = a - %5
   c = %3
   writei c
   %6 = '.'
   writec %6
   %7 = '\n'
   writec %7
   %8 = - a
   %10 = %8 / b
   %11 = %10 * b
   %9 = %8 - %11
   c = %9
   writei c
   %12 = '.'
   writec %12
   %13 = '\n'
   writec %13
   %14 = - b
   %16 = a / %14
   %17 = %16 * %14
   %15 = a - %17
   c = %15
   writei c
   %18 = '.'
   writec %18
   %19 = '\n'
   writec %19
   %20 = 3
   %21 = a + %20
   %23 = %21 / b
   %24 = %23 * b
   %22 = %21 - %24
   c = %22
   writei c
   %25 = '.'
   writec %25
   %26 = '\n'
   writec %26
   %27 = - a
   %28 = 3
   %29 = %27 - %28
   %30 = - b
   %32 = %29 / %30
   %33 = %32 * %30
   %31 = %29 - %33
   c = %31
   writei c
   %34 = '.'
   writec %34
   %35 = '\n'
   writec %35
   return
endfunction


