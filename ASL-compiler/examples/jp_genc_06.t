function f
  params
    _result
    a
    f
  endparams

  vars
    x 1
    b 1
    z 10
  endvars

     %2 = 5
     %1 = 1
     %1 = %2 * %1
     readi %3
     z[%1] = %3
     %4 = 5
     %6 = 1
     %6 = %4 * %6
     %5 = z[%6]
     %7 = 88
     %8 = %5 + %7
     writei %8
     readi b
     readf f
     ifFalse b goto endif1
     %9 = 'h'
     writec %9
     writeln
     %9 = '\t'
     writec %9
     %9 = 'l'
     writec %9
     %9 = '\\'
     writec %9
     %9 = 'a'
     writec %9
     %10 = -. f
     %11 = -. %10
     %12 = -. %11
     writef %12
     writeln
  label endif1 :
     %14 = 1
     _result = %14
     return
endfunction

function fz
  params
    _result
    r
    u
  endparams

  label while1 :
     %1 = 0
     %3 = r <= %1
     %2 = not %3
     ifFalse %2 goto endWhile1
     %4 = 1
     %5 = r - %4
     r = %5
     goto while1
  label endWhile1 :
     %6 = 0
     %7 = r == %6
     ifFalse %7 goto endif1
     pushparam 
     %8 = 55555
     pushparam %8
     %9 = 1
     %10 = 4
     %11 = %9 / %10
     %12 = float %11
     pushparam %12
     call f
     popparam 
     popparam 
     popparam 
  label endif1 :
     %13 = 3
     %14 = r + %13
     %16 = float %14
     %15 = %16 *. u
     _result = %15
     return
endfunction

function main
  vars
    a 1
    q 1
  endvars

   %1 = 0
   %2 = float %1
   q = %2
   pushparam 
   %4 = 3
   %5 = 4
   %6 = %4 + %5
   pushparam %6
   pushparam 
   %8 = 4444
   pushparam %8
   %9 = 2
   %11 = float %9
   %10 = q +. %11
   pushparam %10
   call fz
   popparam 
   popparam 
   popparam %7
   pushparam %7
   call fz
   popparam 
   popparam 
   popparam %3
   q = %3
   %12 = 3.7
   %13 = q +. %12
   %14 = 4
   %16 = float %14
   %15 = %13 +. %16
   writef %15
   writeln
   return
endfunction


