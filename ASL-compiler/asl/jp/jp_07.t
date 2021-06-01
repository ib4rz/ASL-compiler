function f
  params
    a
  endparams

   %2 = 5
   %3 = a
   %1 = 1
   %1 =  * %1
   %4 = 5
   %6 = 1
   %6 =  * %6
   %7 = a
   %5 = %7[%6]
   %8 = 10
   %10 = float %8
   %9 = %5 *. %10
   %3[%1] = %9
   return
endfunction

function main
  vars
    b 10
    c 10
  endvars

   %2 = 5
   %1 = 1
   %1 =  * %1
   readf %3
   b[%1] = %3
   %5 = 7
   %4 = 1
   %4 =  * %4
   %6 = 5
   %8 = 1
   %8 =  * %8
   %7 = b[%8]
   c[%4] = %7
   %9 = 5
   %11 = 1
   %11 =  * %11
   %10 = b[%11]
   writef %10
   writeln
   %13 = 7
   %15 = 1
   %15 =  * %15
   %14 = c[%15]
   writef %14
   writeln
   %17 = &b
   pushparam %17
   call f
   popparam 
   %18 = 5
   %20 = 1
   %20 =  * %20
   %19 = b[%20]
   writef %19
   writeln
   %22 = 7
   %24 = 1
   %24 =  * %24
   %23 = c[%24]
   writef %23
   writeln
   return
endfunction


