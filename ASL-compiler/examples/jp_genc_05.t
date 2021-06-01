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
     %1 = %2 * %1
     %3 = 67
     %4 = a + %3
     z[%1] = %4
     %5 = 34
     x = %5
     %7 = 3
     %6 = 1
     %6 = %7 * %6
     %8 = 56
     %9 = 9
     %11 = 1
     %11 = %9 * %11
     %10 = z[%11]
     %12 = %8 + %10
     z[%6] = %12
     %13 = 3
     %15 = 1
     %15 = %13 * %15
     %14 = z[%15]
     %17 = %14 <= x
     %16 = not %17
     ifFalse %16 goto else1
     %18 = 78
     x = %18
     writef b
     writeln
     goto endif1
  label else1 :
     %20 = 99
     x = %20
  label endif1 :
     %21 = 3
     %23 = 1
     %23 = %21 * %23
     %22 = z[%23]
     writei %22
     writeln
     %25 = 1
     _result = %25
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
     %4 = 1
     %5 = r - %4
     r = %5
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


