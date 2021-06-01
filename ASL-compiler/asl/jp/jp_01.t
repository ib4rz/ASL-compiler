function main
  vars
    a 1
    b 1
    end 1
    pi 1
  endvars

   %2 = 12
   a = %2
   %4 = 5
   %5 = a * %4
   %6 = 1
   %7 = a + %6
   %8 = a * %7
   %9 = %5 + %8
   b = %9
   %12 = b < a
   %11 = not %12
   %13 = 0
   %14 = a == %13
   %15 = not %14
   %16 = %11 and %15
   end = %16
   %18 = 3.3
   %19 = 1
   %20 = %19 / a
   %22 = float %20
   %21 = %18 +. %22
   %23 = 2.0
   %24 = -. %23
   %26 = float a
   %25 = %24 /. %26
   %27 = %21 -. %25
   pi = %27
   %28 = a == b
   %29 = %28 or end
   writei %29
   writeln
   %31 = a * b
   writei %31
   writeln
   %33 = 2
   %35 = float %33
   %34 = %35 *. pi
   writef %34
   writeln
   return
endfunction


