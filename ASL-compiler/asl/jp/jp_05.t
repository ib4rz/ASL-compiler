function f
  params
    _result
    a
    b
  endparams

  vars
    x 1
    y 1
    z 10
  endvars

     %2 = 9
     %1 = 1
     %1 =  * %1
     %3 = 67
     %4 = a + %3
     z[%1] = %4
     %6 = 34
     x = %6
     %8 = 3
     %7 = 1
     %7 =  * %7
     %9 = 56
     %10 = 9
     %12 = 1
     %12 =  * %12
     %11 = z[%12]
     %13 = %9 + %11
     z[%7] = %13
     %14 = 3
     %16 = 1
     %16 =  * %16
     %15 = z[%16]
     %18 = %15 <= x
     %17 = not %18
     ifFalse %17 goto else1
     %20 = 78
     x = %20
     writef b
     writeln
     goto endif1
  label else1 :
     %23 = 99
     x = %23
  label endif1 :
     %24 = 3
     %26 = 1
     %26 =  * %26
     %25 = z[%26]
     writei %25
     writeln
     %28 = 1
     _result = %28
     return
endfunction

function fz
  params
    r
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
     return
endfunction

function main
  vars
    a 1
  endvars

     pushparam 
     %2 = 3
     pushparam %2
     %3 = 2
     %4 = float %3
     pushparam %4
     call f
     popparam 
     popparam 
     popparam %1
     ifFalse %1 goto endif1
     %5 = 3.7
     %7 = float a
     %6 = %7 +. %5
     %8 = 4
     %10 = float %8
     %9 = %6 +. %10
     writef %9
     writeln
  label endif1 :
     return
endfunction


