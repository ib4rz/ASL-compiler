func f(a:int, b:float): bool
  var x:int
  var y:bool
  var z:array[10] of int
  z[9] = (a + 67);
  x = 34;
  z[3] = 56 + z[9];
  return true;
endfunc

func fz(r:int)
  while r>0 do
    r = r-1;
  endwhile
endfunc

func main()
  var a:int
  if f(3, 2) then
     write a+3.7+4; write "\n";
  endif
endfunc
