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
     %1 =  * %1
     readi %3
     z[%1] = %3
     %4 = 5
     %6 = 1
     %6 =  * %6
     %5 = z[%6]
     %7 = 88
     %8 = %5 + %7
     writei %8
     readi b
     readf f
     ifFalse b goto endif1
     %11 = 'h'
     writec %11
     writeln
     %11 = '\t'
     writec %11
     %11 = 'l'
     writec %11
     %11 = '\\'
     writec %11
     %11 = 'a'
     writec %11
     %12 = -. f
     %13 = -. %12
     %14 = -. %13
     writef %14
     writeln
  label endif1 :
     %16 = 1
     _result = %16
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
     %5 = 1
     %6 = r - %5
     r = %6
     goto while1
  label endWhile1 :
     %7 = 0
     %8 = r == %7
     ifFalse %8 goto endif1
     pushparam 
     %9 = 55555
     pushparam %9
     %10 = 1
     %11 = 4
     %12 = %10 / %11
     %13 = float %12
     pushparam %13
     call f
     popparam 
     popparam 
     popparam 
  label endif1 :
     %14 = 3
     %15 = r + %14
     %17 = float %15
     %16 = %17 *. u
     _result = %16
     return
endfunction

function main
  vars
    a 1
    q 1
  endvars

   %2 = 0
   %3 = float %2
   q = %3
   pushparam 
   %6 = 3
   %7 = 4
   %8 = %6 + %7
   pushparam %8
   pushparam 
   %10 = 4444
   pushparam %10
   %11 = 2
   %13 = float %11
   %12 = q +. %13
   pushparam %12
   call fz
   popparam 
   popparam 
   popparam %9
   pushparam %9
   call fz
   popparam 
   popparam 
   popparam %5
   q = %5
   %14 = 3.7
   %15 = q +. %14
   %16 = 4
   %18 = float %16
   %17 = %15 +. %18
   writef %17
   writeln
   return
endfunction


