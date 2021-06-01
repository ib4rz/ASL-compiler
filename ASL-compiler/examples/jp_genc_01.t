function main
  vars
    a 1
    b 1
    end 1
    pi 1
  endvars

   %1 = 12
   a = %1
   %2 = 5
   %3 = a * %2
   %4 = 1
   %5 = a + %4
   %6 = a * %5
   %7 = %3 + %6
   b = %7
   %9 = b < a
   %8 = not %9
   %10 = 0
   %11 = a == %10
   %12 = not %11
   %13 = %8 and %12
   end = %13
   %14 = 3.3
   %15 = 1
   %16 = %15 / a
   %18 = float %16
   %17 = %14 +. %18
   %19 = 2.0
   %20 = -. %19
   %22 = float a
   %21 = %20 /. %22
   %23 = %17 -. %21
   pi = %23
   %24 = a == b
   %25 = %24 or end
   writei %25
   writeln
   %27 = a * b
   writei %27
   writeln
   %29 = 2
   %31 = float %29
   %30 = %31 *. pi
   writef %30
   writeln
   return
endfunction


